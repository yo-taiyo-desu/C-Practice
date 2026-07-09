/*Program that will receive the values of an integer, a floating point number, a character from 
the keyboard and print those values.*/
#include<stdio.h>
int main(){
int a;
float b;
char ch;
printf("Enter the integer value : ");
scanf("%d",&a);
printf("Enter the float value : ");
scanf("%f",&b);
printf("Enter the char value : ");
scanf(" %c",&ch);//To printf a character value from user , you have to have a space between parentheses & %c to get input . if you don't do it then a space will be printed instead of input & will print garbage value
printf("The integer value : %d\n",a);
printf("The floating value : %f\n",b);
printf("The character value : %c\n",ch);
return 0;
}
