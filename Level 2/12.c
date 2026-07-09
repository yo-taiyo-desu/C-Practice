/*Program that will take calculate the roots of a quadratic equation (a.x2 + b.x + c = 0) from 
the formula, (here, dot (.) stands for multiplication) -
𝐫𝐨𝐨𝐭 = −𝐛 ± 𝐬𝐪𝐫𝐭( 𝐛² − 4. 𝐚. 𝐜)/2. 𝐚  */
#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,d,x1,x2;
printf("Enter the numbers : ");
scanf("%f%f%f",&a,&b,&c);
if(a==0){
printf("Imaginary \n");
return 0;
}
d=(b*b-4*a*c);
if(d<0){
printf("Imaginary \n");
return 0;
}
d=sqrt(d);
x1=(-b+d)/(2*a);
x2=(-b-d)/(2*a);
printf("Root1= %f\n",x1);
printf("Root2= %f\n",x2);
return 0;
}
