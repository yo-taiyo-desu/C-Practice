/*Program that will decide whether a number is even or odd
*/
#include<stdio.h>
int main(){
int a;
printf("Enter a number : ");
scanf("%d",&a);
if(a==0){
printf("%d is Zero \n",a);
}
else if(a%2==0){
printf("%d is Even \n",a);
}
else{
printf("%d is Odd \n",a);
}
return 0;
}
