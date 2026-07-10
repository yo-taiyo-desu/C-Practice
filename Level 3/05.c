/* Program that will read from the console a random positive nonzero number and determine 
if it is a power of 2 */
#include<stdio.h>
#include<math.h>
int main(){
int x;
printf("Enter the number : ");
scanf("%d",&x);
if(x>0&&log(x)==ceil(log(x))){
printf("%d is power of 2 \n",x);
}
else{
printf("%d is not a power of 2\n",x);
}
return 0;
}
