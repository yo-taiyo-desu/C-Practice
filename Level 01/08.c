/*Program that will take three integer numbers from keyboard but assign only the first and 
last inputs to variables and skip any assignment of the middle one.*/
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the values : ");
scanf("%d%d%d",&a,&b,&c);
printf("First value : %d\n",a);
printf("Last value : %d\n",c);
return 0;
}
