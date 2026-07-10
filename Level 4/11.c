/*Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….*/
#include<stdio.h>
int main(){
int n,i,fibo,first=0,second=1;
printf("Series Upto : ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d",first);
fibo=first+second;
first=second;
second=fibo;
if(i<n-1)
printf(",");
}
return 0;
}
