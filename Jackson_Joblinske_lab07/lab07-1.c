/*---------------------------------------------------------------------------
-					  SE 185: Lab 07 - Pointers, Pointers and More Pointers           -
-	Name:                                                                     -
- Section:                                                                  -
-	NetID:                                                                    -
-	Date:                                                                     -
-                                                                           -
-   This file provides the outline for your program.                        -
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/* add whatever you see fit and need */

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/

/* put your function prototypes here */

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// compile with gcc -o lab07-1 lab07-1.c

/*-----------------------------------------------------------------------------
-								Implementation
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{

    /* implement your solutions here */

    int* point = malloc(sizeof(int));

    *point = 4;

    printf("%d\n", *point);
    printf("%x", &point);


    return 0;

}

/*-----------------------------------------------------------------------------
-								Functions
-----------------------------------------------------------------------------*/

/* put your functions here */
