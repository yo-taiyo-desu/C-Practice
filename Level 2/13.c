/*Program that will take a floating point number X as input and evaluate A,B,C where-
A = Value when X is rounded up to the nearest integer
B = Value when X is rounded down to the nearest integer
C = Absolute value of X */
#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
double a,C;
int A,B;
printf("Enter the number : ");
scanf("%lf",&a);
A=(int)ceil(a);
B=(int)floor(a);
C=fabs(a);
printf(" A) %d \n",A);
printf(" B) %d \n",B);
printf(" C) %lf \n",C);
return 0;
}
