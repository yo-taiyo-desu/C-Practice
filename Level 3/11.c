/* Program that will take the final score of a student in a particular subject as input and find 
his/her grade */
#include<stdio.h>
#include<math.h>
int main(){
float marks;
printf("Enter your marks : ");
scanf("%f",&marks);
if(marks<=100&&marks>=90)
printf("A+");
else if(marks<90&&marks>=86)
printf("A-");
else if(marks<86&&marks>=82)
printf("B+");
else if(marks<82&&marks>=78)
printf("B");
else if(marks<78&&marks>=74)
printf("B-");
else if(marks<74&&marks>=70)
printf("C+");
else if(marks<70&&marks>=66)
printf("C");
else if(marks<66&&marks>=62)
printf("C-");
else if(marks<62&&marks>=58)
printf("D+");
else if(marks<58&&marks<=55)
printf("D");
else if(marks<55)
printf("F");
else
printf("Invalid marks");
return 0;
}
