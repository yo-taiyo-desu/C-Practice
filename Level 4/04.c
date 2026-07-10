/*Write a program (WAP) that will take N numbers as inputs and compute their average. 
(Restriction: Without using any array)*/
#include<stdio.h>
int main(){
int n,i;
float num,sum=0,avg;
printf("How many numbers to enter : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter number %d : \n",i);
scanf("%f",&num);
sum=sum+num;
}
avg=sum/n;
printf("Average is : %f \n",avg);
return 0;
}
