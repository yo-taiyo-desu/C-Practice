/*Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….*/
#include<stdio.h>
int main(){
int n,i,sum=0,sum1=0,sum2=0;
printf("Series upto : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2!=0){
printf("%d",i);
sum1=sum1+i;
}
else{
print("%d",-i);
sum2=sum2-i;
}
if(i>n){
printf(",");
}
}
sum=sum1+sum2;
printf("Sum is : %d\n",sum);
return 0;
}
