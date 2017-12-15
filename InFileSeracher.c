#include <stdio.h>
#include <string.h>

int main()
{
    FILE* log_file;
    FILE* result_file;
    char current_str[1000];

    if(!(log_file=fopen("apoj.txt", "r")))
    {
        printf("Open apoj_file failed.\n");
        return 0;
    }

    result_file=fopen("result.txt", "w");

    fin: while(!(feof(log_file)))
    {
        fgets(current_str, 1000, log_file);
        if (ferror(log_file))
        {
            printf("error");
            return 0;
        }

        if (((strstr(current_str,"10077"))!=NULL)&&((strstr(current_str,"Новая запись:"))!=NULL))
        {
            fputs(current_str, stdout);
            fputs(current_str, result_file);
        }
        else
            goto fin;
    }

    fclose(log_file);
    fclose(result_file);

    return 0;
}
