/*Program that will evaluate the equation 
2𝐜𝐨𝐬²𝐱 − √3 𝐬𝐢𝐧𝐱 + 𝐬𝐢𝐧x/2  */
#include<stdio.h>
#include<math.h>
int main(){
double x,X;
printf("Enter the angle : ");
scanf("%lf",&x);
X=2*pow(cos(x),2)-(sqrt(3)*sin(x)+(sin(x/2));
printf(" The answer is : %lf\n",X);
return 0;
}
