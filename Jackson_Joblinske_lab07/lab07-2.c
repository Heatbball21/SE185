/*---------------------------------------------------------------------------
-					  SE 185: Lab 07 - Pointers, Pointers and More Pointers           -
-	Name:                Jackson joblinske                                                     -
- Section:            4                                                      -
-	NetID:                 jobo                                                   -
-	Date:                  10/19/20                                                   -
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

    char *inputMajor = (char*) malloc(sizeof(char) * 1024);
    char *inputName = (char*) malloc(sizeof(char) * 1024);


    printf("Enter your major: \n");
    scanf("%s", inputMajor);
    printf("Enter your name: \n");
    scanf("%s", inputName);

    printf("Hello, %s. I hear %s is really hard!\n", inputName, inputMajor);

free(inputName);free(inputMajor);

    return 0;

}

/*-----------------------------------------------------------------------------
-								Functions
-----------------------------------------------------------------------------*/

/* put your functions here */
