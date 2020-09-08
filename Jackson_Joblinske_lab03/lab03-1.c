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

double meterToFeeter(double meters){
  double answer = (meters * 3.281);
  return answer;
}
double feeterToMeter(double feet){
  double answer = (feet * 0.3048);
  return answer;
}
double kiloToPound(double kilo){
  double answer = (kilo * 2.205);
  return answer;
}
double poundToKilo(double pound){
  double answer = (pound * 0.454);
  return answer;
}
double minuteToHour(double minute){
  double answer = (minute / 60.0);
  return answer;
}
double hoursToDays(double hours){
  double answer = (hours / 24.0);
  return answer;
}
double daysToHours(double days){
  double answer = (days * 24.0);
  return answer;
}
double minutesToSeconds(double minutes){
  double answer = (minutes * 60.0);
  return answer;
}


//using 5 for all numbers
  printf("%lf meter(s) = %lf feet\n", 5.00, meterToFeeter(5.00));
  printf("%lf feet = %lf meter(s)\n", 5.00, feeterToMeter(5.00));
  printf("%lf kilo(s) = %lf pound(s)\n", 5.00, kiloToPound(5.00));
  printf("%lf pound(s) = %lf kilo(s)\n", 5.00, poundToKilo(5.00));
  printf("%lf minute(s) = %lf hour(s)\n", 5.00, minuteToHour(5.00));
  printf("%lf hour(s) = %lf day(s)\n", 5.00, hoursToDays(5.00));
  printf("%lf day(s) = %lf hour(s)\n", 5.00, daysToHours(5.00));
  printf("%lf minute(s) = %lf second(s)\n", 5.00, minutesToSeconds(5.00));


    return 0; // This is a return statement
}
