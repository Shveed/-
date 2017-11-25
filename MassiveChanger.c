#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Russian");

    int m, n, i, j, curr, curr1, minimal, i1, j1, c, d;
    m = 5, n = 5, minimal = 100; /* m - amount of lines, n - amount of column */
    int mas[m][n], newmas[4][4], lastmas[4][4], lol[4][4];

    /* Array generator */
    for (i=0; i<m; i++)
    {
        for (j=0; j<m; j++)
            {
                mas[i][j] = rand() % 10;
            }
    }
    printf("Starting with...");
    /* Shows entered array */
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
            {
                printf("%d\t",mas[i][j]);
            }
        printf("\n");
    }
    printf("\n");
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
    printf("Remade array:");
    printf("\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
            {
            printf("%d\t",mas[i][j]);
            }
        printf("\n");
    }
    printf("\n");


/* Cycle for searching minimal and it's coordinates */
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            if (mas[i][j] < minimal)
            {
                minimal = mas[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }
    printf("Minimal = %d\n", minimal);
    printf("\n");
    printf("Line %d, column %d\n", i1, j1);
    printf("\n");

    /* Cycle for removing string and column
     which contain minimal element */
    c = 0;
    d = 0;
    for(i=0; i<5; i++)
    {
        if(i != i1)
        {
            for(j=0; j<5; j++)
            {
                if (j != j1)
                {
                    lol[c][d] = mas[i][j];
                    d++;
                }
            }
            d = 0;
            c++;
        }
    }

    /* New Array Entrance */
    for (i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("newmas[%d][%d] = ", i, j);
            scanf("%d", &newmas[i][j]);
        }
    }
    printf("First multiplier(array)");
    printf("\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d\t",lol[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second multiplier(array):\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d\t", newmas[i][j]);
        }
        printf("\n");
    }
    /* Multiplication of first and entered arrays */
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            lastmas[i][j] = newmas[i][j] * lol[i][j];
        }
    }
    printf("\n");

    printf("Result is:\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d\t", lastmas[i][j]);
        }
        printf("\n");
    }
}
