
/*----------------------------------------------------------------------------
-		    SE 185: Lab 01 - Getting to Know the 185 Environment		 	 -
-	Name: Jackson Joblinske																	 -
- Section:	4															 -
-	NetID:	jobo															     -
-	Date:		9/8/20															 -
-----------------------------------------------------------------------------*/

/*
	Here is a block comment.
	These lines don't run when you compile or run the code.
	I.e., they're the machine doesn't see them, only you.
*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>

/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
  int choice;
  int fibonacci_sequence(int n);
  printf("Enter a number: \n");
  scanf("%d", &choice);

  printf("The fib number at that spot is: %d", fibonacci_sequence(choice));


  return 0;
}












int fibonacci_sequence(int n)
{
    if (n <= 1) return n;
    int previous_fib = 0, current_fib = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int new_fib = previous_fib + current_fib;
        previous_fib = current_fib;
        current_fib = new_fib;
    }
    return current_fib;
}
