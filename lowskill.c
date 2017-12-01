#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

void fsize(char *);


int main (int argc, char **argv)
{
    if (argc == 1)
        fsize(".");
    else
        while (--argc > 0)
            fsize(*++argv);
    return 0;
}

void dirwalk(char *, void (*fcn)(char *));


void fsize(char *name)
{
    struct stat stbuf;
    struct tm * time_info;
    char timestr[5];  /* "HH:MM\0" */

    if (stat(name, &stbuf) == -1) {
        fprintf(stderr, "fsize: РЅРµС‚ РґРѕСЃС‚СѓРїР° Рє %s\n", name);
        return;
    }
    if ((stbuf.st_mode & S_IFMT) == S_IFDIR)
        dirwalk(name, fsize);

    time_info = localtime(&stbuf.st_mtime);
    strftime(timestr, sizeof(stbuf.st_mtime), "%H:%M", time_info);
    printf("%ld %8ld %s %s\n", stbuf.st_size, timestr, name);
}

#define MAX_PATH 1024


void dirwalk(char *dir, void (*fcn)(char *))
{
    char name[MAX_PATH];
    struct dirent *dp;
    DIR *dfd;

    if ((dfd = opendir(dir)) == NULL) {
        fprintf(stderr, "dirwalk: РЅРµ РјРѕРіСѓ РѕС‚РєСЂС‹С‚СЊ %s\n", dir);
        return;
    }
    while ((dp = readdir(dfd)) != NULL) {
        if (strcmp(dp->d_name, ".") == 0
            || strcmp(dp->d_name, "..") == 0)
            continue;
        if (strlen(dir)+strlen(dp->d_name) + 2 > sizeof(name))
            fprintf(stderr, "dirwalk: СЃР»РёС€РєРѕРј РґР»РёРЅРЅРѕРµ РёРјСЏ %s/%s\n",
                dir, dp->d_name);
        else {
            sprintf(name, "%s/%s", dir, dp->d_name);
            (*fcn) (name);
        }
    }
    closedir(dfd);
}
