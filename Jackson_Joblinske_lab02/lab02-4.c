/*----------------------------------------------------------------------------
-		        SE 185: Lab 02 - Solving Simple Problems in C
-
-	Name:				Jackson Joblinske
-
- Section:	4
-
-	NetID:	jobo
-
-	Date:			9/1/2020
-
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    /* Put your code after this line */
    int a = 6427 + 1725, b = (6971 * 3925) - 95, e = (22 / 3) * 3, f = 22 / (3 * 3), j = 22.0 / (3 * 3.0);


    double c = 79 + 12 / 5, d = 3640.0 / 107.9, g = 22 / (3 * 3), h = 22 / 3 * 3, i = (22.0 / 3) * 3.0,
     k = 22.0 / 3.0;

    //pt one
    printf("6427 + 1725 = %d\n", a);
    printf("(6971 * 3925) - 95 = %d\n", b);
    printf("79 + 12 / 5 = %.2f\nf", c);
    printf("3640.0 / 107.9 = %.2f\n", d);
    printf("(22 / 3) * 3 = %d\n", e);
    printf("22 / (3 * 3) = %d\n", f);
    printf("22 / (3 * 3) = %.2f\n", g);
    printf("22 / 3 * 3 = %.2f\n", h);
    printf("(22.0 / 3) * 3.0 = %.2f\n", i);
    printf("22.0 / (3 * 3.0) = %d\n", j);
    printf("22.0 / 3.0 * 3.0 = %.2f\n", k);



    //pt two
    printf("\n\nPart Two\n\n");

    double pi = 3.1415;
    double cc = 23.567;
    double radius = c / (2 * pi);

    printf("Area of a circle having a circumference of %.3f = %.3f\n", cc, (pi * radius * radius));

    double mtr = 0.30;

    printf("14ft to meters is = %.2fm\n", (14 * mtr));

    printf("76 degrees F = %.1f degrees celcius\n", ((76-32)/1.8));

    return 0;
}
