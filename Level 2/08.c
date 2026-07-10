/*Program that will take two numbers as inputs and print the maximum value. (Using 
conditional operator - ?)*/
#include<stdio.h>
int main(){
int a,b,max;
printf("Enter 2 numbers : ");
scanf("%d%d",&a,&b);
max= (a>b) ? a:b;
printf("Max : %d\n",max);
return 0;
}
