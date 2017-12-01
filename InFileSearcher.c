#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;
    char file_name[20], line[40], file_lines[20];

    printf("Enter file name including .txt\n");
    scanf("%s", file_name);
    printf("Your file is %s\n", file_name);
    printf("Now enter line\n");
    scanf("%s", line);
    printf("You are searching for %s", line);
    if (file1 = fopen(file_name, "r")!= NULL)
    {
        fgets()
    }
    else printf("Unable to open file. Make sure you entered name correctly");
    fclose(file1); 
    return 0;








}
