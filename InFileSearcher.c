#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;
    char file_name[20];
    int line;

    printf("Enter file name including .txt\n");
    scanf("%s", file_name);
    printf("%s\n", file_name);
    printf("Now enter line number");
    scanf("%d", line);

    if (file1 = fopen(file_name, "r")!- NULL)
    {

    }
    else printf("Unable to open file. Make sure you entered name correctly");
    fclose(file1);
    return 0;








}
