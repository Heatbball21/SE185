/*---------------------------------------------------------------------------
-					  SE 185: Lab 08 function and structs          -
-	Name:                Jackson joblinske                                                     -
- Section:            4                                                      -
-	NetID:                 jobo                                                   -
-	Date:                  10/25/20                                                   -
-                                                                           -
-   This file provides the outline for your program.                        -
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* add whatever you see fit and need */

/*----------------------------------------------------------------------------
-	                            Prototypes                                   -
-----------------------------------------------------------------------------*/

typedef struct student{

  char name[50];
  char major[50];
  int age;
  char from[50];
  double gpa;
  int grades[5];

}Student;

typedef struct university{

  char name[100];
  Student stus[1];
  int built;
  char location[500];

}Uni;
/* put your function prototypes here */
int getMax(Student *stu[], int a, int n);
int getMin(Student *stu[], int a, int n);
int getAvg(Student *stu[], int a, int n);

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// compile with gcc -o lab07-1 lab07-1.c

/*-----------------------------------------------------------------------------
-								Implementation
-----------------------------------------------------------------------------*/




int main(int argc, char *argv[])
{

  Student *stu1, *stu2, *stu3;

  stu1 = (Student*)malloc(sizeof(Student));
  stu2 = (Student*)malloc(sizeof(Student));
  stu3 = (Student*)malloc(sizeof(Student));

  Student *stus[3] = {stu1, stu2, stu3};

  Uni uni1, uni2, uni3;



//stu1
  strcpy(stu1->name,"Tom");
  strcpy(stu1->major,"Business");
  stu1->age = 18;
  strcpy(stu1->from,"Iowa");
  stu1->gpa = 3.25;
  stu1->grades[0] = 85;
  stu1->grades[1] = 65;
  stu1->grades[2] = 98;
  stu1->grades[3] = 35;
  stu1->grades[4] = 56;

//stu2
  strcpy(stu2->name,"Steve");
  strcpy(stu2->major,"Business");
  stu2->age = 18;
  strcpy(stu2->from,"Iowa");
  stu2->gpa = 2.25;
  stu2->grades[0] = 35;
  stu2->grades[1] = 45;
  stu2->grades[2] = 30;
  stu2->grades[3] = 45;
  stu2->grades[4] = 56;
//stu3
  strcpy(stu3->name,"Bob");
  strcpy(stu3->major,"Business");
  stu3->age = 18;
  strcpy(stu3->from,"Iowa");
  stu3->gpa = 2.75;
  stu3->grades[0] = 55;
  stu3->grades[1] = 65;
  stu3->grades[2] = 98;
  stu3->grades[3] = 35;
  stu3->grades[4] = 56;

//uni1
  strcpy(uni1.name, "University of Iowa");
  uni1.stus[0] = *stu1;
  uni1.built = 1867;
  strcpy(uni1.location, "Iowa City, Iowa");
//uni2
  strcpy(uni2.name, "Iowa State Unniversity");
  uni2.stus[0] = *stu2;
  uni2.built = 1932;
  strcpy(uni2.location, "Ames, Iowa");
//uni3
  strcpy(uni3.name, "University of Northern Iowa");
  uni3.stus[0] = *stu3;
  uni3.built = 1929;
  strcpy(uni3.location, "Cedar Falls, Iowa");


  // printf("%d\n", stu1->age);

  // printf("max is %d\n", getMax(stus, 3, 3));
  // printf("min is %d\n", getMin(stus, 3, 3));
  // printf("avg is %d\n", getAvg(stus, 3, 3));


  printf("University 1: %s\n", uni1.name);
  printf("  Student: %s\n", uni1.stus[0].name);
  printf("    Student age: %d\n", uni1.stus[0].age);
  printf("    Student major: %s\n", uni1.stus[0].major);
  printf("  Built: %d\n", uni1.built);
  printf("  Location: %s\n", uni1.location);

  printf("\n");

  printf("University 2: %s\n", uni2.name);
  printf("  Student: %s\n", uni2.stus[0].name);
  printf("    Student age: %d\n", uni2.stus[0].age);
  printf("    Student major: %s\n", uni2.stus[0].major);
  printf("  Built: %d\n", uni2.built);
  printf("  Location: %s\n", uni2.location);

  printf("\n");

  printf("University 3: %s\n", uni3.name);
  printf("  Student: %s\n", uni3.stus[0].name);
  printf("    Student age: %d\n", uni3.stus[0].age);
  printf("    Student major: %s\n", uni3.stus[0].major);
  printf("  Built: %d\n", uni3.built);
  printf("  Location: %s\n", uni3.location);

  printf("\n");

    return 0;

}

/*-----------------------------------------------------------------------------
-								Functions
-----------------------------------------------------------------------------*/

/* put your functions here */

int getMax(Student *stu[], int a, int n){
  // for(int i = 0; i<n;i++){
  //   printf("%s\n", stu[i]->name);
  // }
  int max = 0;
  for(int i = 0; i < n; i++){
    if(stu[i]->grades[a-1] > max){
      max = stu[i]->grades[a-1];
    }

  }
  return max;

}

int getMin(Student *stu[], int a, int n){
  int min = stu[0]->grades[a-1];
  for(int i = 0; i < n; i++){
    if(stu[i]->grades[a-1] < min){
      min = stu[i]->grades[a-1];
    }

  }
  return min;

}

int getAvg(Student *stu[], int a, int n){
  int sum = 0;
  for(int i = 0; i<n; i++){
    sum+= stu[i]->grades[a-1];
  }
  return (sum/n);

}
