#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Russian");

    int m, n, i, j, curr, curr1, minimal, i1, j1;
    m = 5, n = 5, minimal = 100; /* m - amount of lines, n - amount of column */
    int mas[5][5] = {{5, 4, 2, 7, 0}, {5, 4, 2, 7, 1}, {5, 4, 2, 7, 2}, {5, 4, 2, 7, 3}, {5, 4, 2, 7, 4}};
    int mas[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    for (i=0; i<5; i++)
        {
        for (j=0; j<5; j++)
              printf("%d\t",mas[i][j]);
        printf("\n");
        }
    printf("\n");
    i = 0;
    for(i=0; i<5; i++)
        {
            curr = mas[0][i];
            mas[0][i] = mas[4][i];
            mas[4][i] = curr;
        }
    for(i=0; i<2; i++)
    {
        curr = mas[0][i];
        curr1 = mas[4][i];
        mas[0][i] = mas[0][4-i];
        mas[4][i] = mas[4][4-i];
        mas[0][4-i] = curr;
        mas[4][4-i] = curr1;

    }
    for (i=0; i<5; i++)
    {
    for (j=0; j<5; j++)
          printf("%d\t",mas[i][j]);
    printf("\n");
    }


/* Cycle for searching minimal and it's coordinates */
    for(i=0; i<5; i++)
        {
        for(j=0; j<5; j++)
            {
            if (mas[i][j] < minimal)
                minimal = mas[i][j];
                i1 = i;
                j1 = j;
            }

        }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

        }
        }
    }



}






