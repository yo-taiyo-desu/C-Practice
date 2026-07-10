/* Write a program (WAP) that will print the factorial (N!) of a given number N. Please see 
the sample input output */
#include<stdio.h>
int main(){
int n,i,fact=1;
printf("Upto : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("Factorial of %d is : %d \n",n,fact);
return 0;
}
