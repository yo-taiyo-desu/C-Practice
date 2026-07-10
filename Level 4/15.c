/*WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) 
of two positive integers*/
#include<stdio.h>
int main(){
int n1,n2,i,gcd,lcm,temp,r,num2,num1;
printf("Enter 2 numbers : ");
scanf("%d%d",&n1,&n2);
num1=n1;
num2=n2;
while(num2!=0){
r=num1%num2;
num1=num2;
num2=r;
}
gcd=num1;
lcm=(n1*n2)/gcd;
printf("GCD of %d & %d is : %d\n",n1,n2,gcd);
printf("LCM of %d & %d is : %d\n",n1,n2,lcm);
return 0;
}
