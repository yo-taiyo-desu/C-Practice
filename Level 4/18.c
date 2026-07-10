/*Write a program that takes an integer number n as input and find out the sum of the 
following series up to n terms.
1 + 12 + 123 + 1234 + …… */
#include<stdio.h>
int main(){
int n,i,term=0,sum=0;
printf("Series Upto : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
term=(term*10)+i;
printf(" %d ",term);
sum=sum+term;
if(i<n)
printf("+");
}
printf("\nSum is : %d\n",sum);
return 0;
}
