/*Program that will take a, b & c as inputs and decide if the statements are True (1) of False 
(0)
a) (𝑎 + 𝑏) ≤ 80
b) ! (𝑎 + 𝑐)
c) 𝑎! = 0 */
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the numbers : ");
scanf("%d%d%d",&a,&b,&c);
printf(" a) %d\n",(a+b)<=80);
printf(" b) %d\n",!(a+c));
printf(" c) %d\n",a!=0);
return 0;
}
