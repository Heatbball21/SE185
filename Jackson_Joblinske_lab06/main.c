/*----------------------------------------------------------------------------
-		                    SE 185: Lab 06 - Bop-It!	    	             -
-	Name:						Jackson Joblinske											 -
- 	Section:				4												 -
-	NetID:						jobo										     -
-	Date:							10/6/2020										 -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									 -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "table.h"


/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/
int rand(void);
char generateChar(void);
void sleep(int);


/*----------------------------------------------------------------------------
-	                            Notes                                        -
-----------------------------------------------------------------------------*/
// Compile with gcc lab06.c -o lab06


/*----------------------------------------------------------------------------
-								Implementation								 -
-----------------------------------------------------------------------------*/
int main(int argc, char *argv[])
{
    srand(time(NULL)); /* This will ensure a random game each time. */

//time keeping
    struct timespec start, end;
    double difference;

//sentinel value
    char choice = 'n';

//game variation
    int variation;

//statistic variables
    int rounds = 0;
    int totGames = 0;
    double avgScore;
    int win = 1;

//holds the users input and the generated character
    char genChar;
    char user;

//time allowed each round, decreases by inc every round
    double timeAllowed = 5.0;
    double inc = .05;

//short intro
    printf("Welcome to the Bop-It one off!\n");
    printf("For this game you will press the key that the game indicates, then hit enter to finalize your choice. \n");
    printf("If you pressed the button fast enough you will move onto the next level and the time allowed will be less. \n\n");

    printf("Press y to start a new game or anything alse to end game.\n");
    scanf("%c", &choice);
    printf("Enter 1 to play regular or 2 for ASCII table: \n");
    scanf("%d", &variation);


//catches wrong inputs
    while(variation != 1 && variation != 2){
      printf("Invalid Entry!!\n\n");
      printf("Enter 1 to play regular or 2 for ASCII table: \n");
      scanf("%d", &variation);
    }





//as long as the player wants to play
    while(choice == 'y'){
      totGames ++;
      win = 1;

//variation 1
      if(variation == 1){
        //simple countdown timer before game starts
              printf("Get ready for the time of your life!\n\n");
              printf("3\n");
              sleep(1);
              printf("2\n");
              sleep(1);
              printf("1\n");
              sleep(1);
              printf("GOOO!\n\n");

        //while user has not lost
              while(win == 1){


        //print whatever character is to be presed
              genChar = generateChar();
              printf("%c\n", genChar);

        //impliment start time
             clock_gettime(CLOCK_REALTIME, &start);

        //get value of users key pressed
            scanf("%s", &user);

            //sleep(1);       used for verifying time accuracy


        //impliment end time
             clock_gettime(CLOCK_REALTIME, &end);
            difference =  (fabs((end.tv_sec - start.tv_sec)) + (fabs((end.tv_nsec - start.tv_nsec)) / 1000000000.0));

            //printf("%lf\n", difference);     used for seeing the time difference
        //compare user char and generated char
            if(user == genChar && difference < timeAllowed){
              printf("Next round! \n\n");
              rounds ++;
            }else{
              printf("Too bad you lose!\n\n");
              win = 0;
                }
        //decrease timeAllowed
                timeAllowed -= inc;
              }

//variation 2
      }else if(variation == 2){
        //simple countdown timer before game starts
              printf("Get ready for the time of your life!\n\n");
              printf("3\n");
              sleep(1);
              printf("2\n");
              sleep(1);
              printf("1\n");
              sleep(1);
              printf("GOOO!\n\n");

        //while user has not lost
              while(win == 1){


        //print whatever character is to be presed
              genChar = generateChar();
              printf("press: %d\n", (int)genChar);
        //print ASCII table of possible values
              printTable();

        //impliment start time
             clock_gettime(CLOCK_REALTIME, &start);

        //get value of users key pressed
            scanf("%s", &user);

            //sleep(1);      // used for verifying time accuracy


        //impliment end time
             clock_gettime(CLOCK_REALTIME, &end);
            difference =  (fabs((end.tv_sec - start.tv_sec)) + (fabs((end.tv_nsec - start.tv_nsec)) / 1000000000.0));

            //printf("%lf\n", difference);     //used for seeing the time difference
        //compare user char and generated char
            if(user == genChar && difference < timeAllowed){
              printf("Next round! \n\n");
              rounds ++;
            }else{
              printf("Too bad you lose!\n\n");
              win = 0;
                }
        //decrease timeAllowed
                timeAllowed -= inc;
              }


      }




//print atfer game is lost
    avgScore = (rounds/totGames);
    printf("time to beat was %.2lf\n", timeAllowed);
    printf("Total rounds won: %d of %d games played for an average score of %.1lf\n", rounds, totGames, avgScore);
    printf("Play Again(y)?: \n");
    scanf("%s", &choice);

    if(choice == 'y'){
    printf("Enter 1 to play regular or 2 for ASCII table: \n");
    scanf("%d", &variation);


//catches wrong inputs
    while(variation != 1 && variation != 2){
      printf("Invalid Entry!!\n\n");
      printf("Enter 1 to play regular or 2 for ASCII table: \n");
      scanf("%d", &variation);
    }
    }

    }


    return 0;
}

//generates character
char generateChar(){
  char r = (rand() %26) + 'a';

  return r;

}
