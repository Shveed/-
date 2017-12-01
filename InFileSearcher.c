#include <stdio.h>
#include <stdlib.h>

#define LEN 40

int main()
{
    FILE *file1;
    char file_name[LEN], line[LEN], file_lines[LEN];

    printf("Enter file name including .txt\n");
    scanf("%s", file_name);
    printf("Your file is %s\n", file_name);
    printf("Now enter line\n");
    scanf("%s", line);
    printf("You are searching for %s", line);
    while (file1 = fopen(file_name, "r")!= NULL)
    {

        fgets(file_lines, LEN, file_name);
    }
    else printf("Unable to open file. Make sure you entered name correctly");
    fclose(file1);
    return 0;








}
