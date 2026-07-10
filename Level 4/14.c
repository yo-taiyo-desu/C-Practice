/*Write a program (WAP) that will find xy
(x to the power y) where x, y are positive integers
*/
#include<stdio.h>
int main(){
int x,y,i,result=1;
printf("Enter x : ");
scanf("%d",&x);
printf("Enter y : ");
scanf("%d",&y);
for(i=1;i<=y;i++){
result=result*x;
}
printf("Result is : %d\n", result);
return 0;
}
