/*---------------------------------------------------------------------------
-					  SE 185: Lab 07 - Pointers, Pointers and More Pointers           -
-	Name:                    jackson joblinske                                                 -
- Section:                 4                                                 -
-	NetID:                    jobo                                                -
-	Date:                     10/19/20                                                -
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
void makeChange(int *dollars, int *quarters, int *dimes, int *nickels, int *pennies, int paid, int price);

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
int* dollars = (int*)malloc(sizeof(int));
int* quarters = (int*)malloc(sizeof(int));
int* dimes = (int*)malloc(sizeof(int));
int* nickels = (int*)malloc(sizeof(int));
int* pennies = (int*)malloc(sizeof(int));
int price;
int paid;


printf("Enter the price of the item in pennies: ");
scanf("%d", &price);
printf("Enter the amount that you paid in pennies: ");
scanf("%d", &paid);


if(price > paid)return;
makeChange(&dollars, &quarters, &dimes, &nickels, &pennies, paid, price);

printf("Your change is: \n%d Dollars\n%d Quarters\n%d Dimes\n%d Nickels\n%d Pennies", dollars, quarters, dimes, nickels, pennies);




    return 0;

}

/*-----------------------------------------------------------------------------
-								Functions
-----------------------------------------------------------------------------*/

/* put your functions here */

void makeChange(int *dollars, int *quarters, int *dimes, int *nickels, int *pennies, int paid, int price){




  int change = paid - price;

  *dollars = change/100;

  change = change%100;

  *quarters = change/25;

  change = change%25;

  *dimes = change/10;

  change = change%10;

  *nickels = change/5;

  change = change%5;

  *pennies = change;



}
