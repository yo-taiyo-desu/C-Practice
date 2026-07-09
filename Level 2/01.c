/*Program that will take two numbers X and Y as inputs, then calculate and print the values 
of their addition, subtraction, multiplication, division (quotient and reminder).*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b;
printf("Enter two numbers : ");
scanf("%f%f",&a,&b);
//a+b
printf("1) Addition : %f\n",a+b);
//a-b
printf("2) Subtraction : %f\n",a-b);
//a*b
printf("3) Multiplication : %f\n",a*b);
//a/b & a%b
printf("4) Division : \n");
printf("1) Quotient : %f\n",a/b);
printf("2) Remainder : %f\n",fmod(a,b));
return 0;
}
