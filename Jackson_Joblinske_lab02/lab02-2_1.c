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
    int x, y;
    printf("Enter a width: ");
    scanf("%d", &x);
    printf("Enter a height: ");
    scanf("%d", &y);
    printf("A %d by %d rectangle's area is %d\n", x , y , x*y);




    return 0;
}
