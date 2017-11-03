#include <stdlib.h>
#include <stdio.h>

/* Program for converting temperatures in Celcium, 
    Farenheit and Kelvin */

void convert (double t, char type) /* function "convert" made for counting
					temperatures and selecting them in the right way */
{
    switch (type) /* переключатель для C,c,K,k,F,f*/
    {
        case 'C':
        case 'c':
            if (t < -273.15){
                printf("Temperature < abs.0"); /* If temperature is below abs.zero
						   for current measure - break the cicle */
                break;
            }
            else{
                double k = t + 273.15;
                double f = (t * 9 / 5) + 32;
                printf ("%.2f C:\n", t);
                printf ("%.2f K:\n",  k);
                printf ("%.2f F:\n", f);
                break;
            }

        case 'K':
        case 'k':
            if (t < 0){
                printf("Temperature < abs.0"); /* If temperature is below abs.zero
						   for current measure - break the cicle*/
                break;
            }
            else {
                double c = t - 273.15;
                double f = (t / 5 * 9) - 459.67;
                printf ("%.2f K: \n", t);
                printf ("%.2f C: \n",  c);
                printf ("%.2f F: \n", f);
            break;
            }

        case 'F':
        case 'f':
            if (t < -459.67) {
                printf("Temperature < abs.0"); /* If temperature is below abs.zero
						   for current measure - break the cicle*/
                break;
            }
            else {
                double c = (t - 32) * 5 / 9;
                double k = (t + 459.67) * 5 / 9;
                printf ("%.2f F: \n", t);
                printf ("%.2f C: \n",  c);
                printf ("%.2f K: \n", k);
                break;
            }

        default:

                printf("Error");

            break;
    }

}

int main(int argc, char *argv[])
{
    if (argc == 2){   /* If temperature type is not specified, output for all 3 types */
        double temp = atof(argv[1]); 
        convert(temp,'C');
    printf("\n");
    convert(temp,'K');
    printf("\n");
    convert(temp,'F');
    }
    else if(argc == 3) {
        double temp = atof(argv[1]);
        convert(temp,*argv[2]);
    }
    return 0;
}
