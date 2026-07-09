/*Program that will multiply and divide a number X by Y. Use *= and /= operators
*/
#include<stdio.h>
int main(){
int a,b;
printf("Enter 2 numbers : ");
scanf("%d%d",&a,&b);
printf("Multiplication : %d",a*=b);
printf("Division : %d",a/=b);
return 0;
}
