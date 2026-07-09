/*Program that will take two numbers (a, b) as inputs and compute the value of the equation 
– Without using math.h*/
//X = (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)
#include<stdio.h>
int main(){
  float a,b,p,q,X;
printf("Enter the numbers : ");
scanf("%f%f",&a,&b);
p=((3.31*a*a)+(2.01*b*b*b);
q=((7.16*b*b)+(2.01*a*a*a));
printf("X = %f\n",p/q);
return 0;
}
