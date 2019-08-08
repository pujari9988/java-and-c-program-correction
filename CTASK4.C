		  //PROGRAM TO SHOW USER COMBINE NAME

#include<stdio.h>
#include<conio.h>
void main()
 {
  char fname[20],lname[20];
  clrscr();
  printf("\n Enter Your first name and last name=");
    scanf("%s %s",&fname,&lname);
  printf("\n You have said that %s %s",fname,lname);
  getch();
  }