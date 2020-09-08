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
double num;

double meterToFeeter(double meter);
double feeterToMeter(double feet);
double kiloToPound(double kilo);
double poundToKilo(double pound);
double minuteToHour(double minute);
double hoursToDays(double hours);
double daysToHours(double days);
double minutesToSeconds(double minutes);



printf("pick a number from below: \n\n");
//menu
printf("1 : meters to feet\n");
printf("2 : feet to meters\n");
printf("3 : kilos to pounds\n");
printf("4: pounds to kilos\n");
printf("5: minutes to hours\n");
printf("6 : hours to days\n");
printf("7 : days to hours\n");
printf("8 : minutes to seconds\n\n");



//gets choice
scanf("%d", &choice);

printf("Enter a number to convert: \n");
scanf("%lf", &num);

//handles choice
switch(choice){
  case 1:
        printf("%.2f meters to feet = %.2f feet", num, meterToFeeter(num));
      break;
  case 2:
        printf("%.2f feet to meters = %.2f meters", num, feeterToMeter(num));
      break;
  case 3:
      printf("%.2f kilos to pounds = %.2f pounds", num, kiloToPound(num));
      break;
  case 4:
      printf("%.2f pounds to kilos = %.2f kilos", num, poundToKilo(num));
      break;
  case 5:
      printf("%.2f minutes to hours = %.2f hours", num, minuteToHour(num));
      break;
  case 6:
      printf("%.2f hours to days = %.2f days", num, hoursToDays(num));
      break;
  case 7:
      printf("%.2f days to hours = %.2f hours", num, daysToHours(num));
      break;
  case 8:
      printf("%.2f minutes to seconds = %.2f seconds", num, minutesToSeconds(num));
      break;
  default:
      printf("ERROR");
      break;

}








    return 0; // This is a return statement
}

double meterToFeeter(double meters){
  return (meters * 3.281);
}
double feeterToMeter(double feet){
  return (feet * .3048);
}
double kiloToPound(double kilo){
  return (kilo * 2.205);
}
double poundToKilo(double pound){
  return (pound * .454);
}
double minuteToHour(double minute){
  return (minute / 60.0);
}
double hoursToDays(double hours){
  return (hours / 24.0);
}
double daysToHours(double days){
  return (days * 24.0);
}
double minutesToSeconds(double minutes){
  return (minutes * 60.0);
}
