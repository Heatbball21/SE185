//Team 23
//Gabe Owen-
//Jackson Joblinske-
//Kyle Youngblut-


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


//TODO

//add highscore table

//function to generate symbols 8 characters in length
//function to read in highscores from file




//Struct//
typedef struct player{

  char name[100];//name
  int score;//score at the end of each game
  int gamesPlayed;//games played by user


}Player;

typedef struct game{

  int round;//round number
  double timeAllowed;
  int highScores[10];//holds top ten high scores
  char initials[10][2];//holds initials of highscore holders
  char symbol[8];//holds correct symbol
  char allSymbols[4][8];//holds all choices of symbols

}Game;




//Prototype//
void genSymbol(Game *g);
void getHighScores();
void chooseSymbol(Game *g);




//main//
int main(int argc, char const *argv[]) {

Player *p = (Player*)malloc(sizeof(Player));
Game *g = (Game*)malloc(sizeof(Game));


char start;//start game character 's'
bool roundWon = true;//true means go to next round false means end game

char userAnswer[8];


srand(time(NULL));//seed random

printf("Welcome to the game of memory! the goal is to memorize the group of special characters and retype them exactly.\n");
printf("Please enter your name: \n");
scanf("%s", &p->name);

printf("Hello %s whenever you are ready type s to start: \n", p->name);
scanf("%s", &start);

if(start == 's'){
  printf("Game is starting\n");
}

p->score = 0;;
g->round = 1;
g->timeAllowed = 10.0;

while(roundWon){
printf("Round: %d\n\n", g->round);
//generate symbols
genSymbol(g);
chooseSymbol(g);

//print symbols
for(int i = 0; i < 4; i++){
  printf("%d:  %s\n", i, g->allSymbols[i]);
}


bool timeLeft = true;
struct timespec start, curr;
clock_gettime(CLOCK_REALTIME, &start);
double difference;


while(timeLeft){
//impelemnt timer here and check the difference between start and current against time allowed set timeLeft true or false
clock_gettime(CLOCK_REALTIME, &curr);

  difference =  (fabs((curr.tv_sec - start.tv_sec)) + (fabs((curr.tv_nsec - start.tv_nsec)) / 1000000000.0));

  if(difference > g->timeAllowed){
    timeLeft = false;
  }



}

//after time is up reprint board
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

printf("Answer: ");
scanf("%s", &userAnswer);

if(strcmp(g->symbol, userAnswer) == 0){
  p->score ++;
  g->round ++;
  g->timeAllowed -= .02;
  printf("Correct\nScore: %d\nRound: %d\nTime: %.1f\n", p->score, g->round, g->timeAllowed);
}else{
  printf("Sorry, that's incorrect\n");
  roundWon = false;
  printf("Correct answer was: %s\n", g->symbol);
  printf("Your final score was: %d, after %d rounds.\nTanks for playing!\n", p->score, g->round);

  for(int i = 0; i < 10; i++){
    printf("%s %d\n", g->initials[i], g->highScores[i]);
  }
}

}





  return 0;
}







//functions//


void genSymbol(Game *g){
//generate 4 random strings containing 8 special characters each and store them in g->allSymbols[i]



}

void chooseSymbol(Game *g){
//chooses which symbol to use as the answer

  int r2 = rand() % 4;

  strcpy(g->symbol, g->allSymbols[r2]);

  printf("\nSymbol #%d\n", r2);
}


void getHighScores(){


}
