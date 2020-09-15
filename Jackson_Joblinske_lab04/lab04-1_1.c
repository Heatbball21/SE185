/*----------------------------------------------------------------------------
-		                 SE 185: Lab 04 - Debugging Code	    	         -
-	Name:				Jackson				Joblinske									 -
- 	Section:		4														 -
-	NetID:				jobo												     -
-	Date:					915/2020												 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/
// Compile with gcc lab04-1_1.c -o lab04-1_1
// Run with ./lab04-1_1
/* This program outputs if a integer will divide into another integer with no remainder. */

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    int i, j;
//add ;
    printf("Enter an integer: ");
    scanf("%d", &i);

//added ""
    printf("Enter another integer: ");
    //add ;
    scanf("%d", &j);

    if (j % i == 0)
    {
        printf("%d divides %d\n", i, j);
//add {}
    } else{

        printf("%d does not divide %d\n", i, j);
        printf("%d %% %d is %d\n", j, i, (j % i));
    }

    return 0;
}
