/*Program that will evaluate the equation 
2𝐜𝐨𝐬²𝐱 − √3 𝐬𝐢𝐧𝐱 + 𝐬𝐢𝐧x/2  */
#include<stdio.h>
#include<math.h>
int main(){
double x,X,rad;
printf("Enter the angle : ");
scanf("%lf",&x);
rad=x*M_PI/180;
X=2*pow(cos(rad),2)-(sqrt(3)*sin(rad))+(sin(rad/2));
printf(" The answer is : %lf\n",X);
return 0;
}
