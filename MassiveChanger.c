#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Russian");

    int m, n, i, j, curr, curr1, minimal, i1, j1, c, d;
    m = 5, n = 5, minimal = 100; /* m - amount of lines, n - amount of column */
    int mas[5][5] = {{5, 4, 2, 7, 0}, {5, 4, 2, 7, 1}, {5, 4, 2, 7, 2}, {5, 4, 2, 7, 3}, {5, 4, 2, 7, 4}};
    int lol[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
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
    printf("\n");


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
    printf("%d\n", minimal);
    printf("\n");
    printf("%d, %d\n", i1, j1);
    printf("\n");

    c = 0;
    d = 0;
    for(i=0; i<5; i++)
        {
        if(i != i1)
            {
            for(j=0; j<5; j++)
            {
                if (j != j1)
                    lol[c][d] = mas[i][j];
                    d++;
            }
            d = 0;
            c++;
            }
        }
    for (i=0; i<4; i++)
    {
    for (j=0; j<4; j++)
          printf("%d\t",lol[i][j]);
    printf("\n");
    }
    }






