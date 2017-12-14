#include <stdio.h>
#include <stdlib.h>

#define LEN 40

int main()
{
    char file_name[LEN], line[LEN], file_lines[LEN];
    int k = 0;

    printf("Enter file name including .txt\n");
    scanf("%s", file_name);
    printf("Your file is %s\n", file_name);
    printf("Now enter line\n");
    scanf("%s", line);
    printf("You are searching for %s", line);
    file_name = "D:\C\\" + file_name;
    FILE *file1 = fopen(file_name, "r");
    if (file1 != NULL)
    {
        while(fgets(file_lines, LEN, file1) != NULL)
        {

        }
    }
    else printf("Unable to open file. Make sure you entered name correctly");
    fclose(file1);




    return 0;
}
