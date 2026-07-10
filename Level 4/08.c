/*Write a program (WAP) that will reverse the digits of an input integer
*/
#include<stdio.h>
int main(){
int n,temp,r=0;
printf("Enter the number : ");
scanf("%d",&n);
while(n!=0){
temp=n%10;
r=r*10+temp;
n=n/10;
}
printf("Reverse number is : %d\n",r);
return 0;
}
