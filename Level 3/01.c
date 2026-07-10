/*Program that will decide whether a number is positive or not.*/
#include<stdio.h>
int main(){
double a;
printf("Enter a number : ");
scanf("%lf",&a);
if(a>0){
printf("%lf is positive \n",a);
}
else if(a<0){
printf("%lf is negative \n",a);
}
else{
printf("%lf is Zero \n",a);
}
return 0;
}
