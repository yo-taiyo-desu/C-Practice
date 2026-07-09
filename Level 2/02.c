/* Program that will calculate the circumference of a circle having radius r.
*/
#include<stdio.h>
#include<math.h>
int main(){
  float r,A;
const float pi=3.1416;
printf("Enter the radius : ");
scanf("%f",&r);
A=2*pi*r;
printf("Circumference : %f\n",A);
return 0;
} 
