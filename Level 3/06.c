/*Program that will read from the console a random number and check if it is a nonzero 
positive number. If the check is yes, it will determine if the number is a power of 2.
If the check fails the program will check for two more cases. If the number is zero, the 
program will print “Zero is not a valid input”. Else it will print “Negative input is not valid”*/
#include<stdio.h>
#include<math.h>
int main(){
int x;
printf("Enter a number : ");
scanf("%d",&x);
if(x>0&&log2(x)==ceil(log2(x))){
printf("%d is a power of 2\n",x);
}
else if(x==0){
printf("Zero \n",x);
}
else if(x<0){
printf("%d is negative \n",x);
}
else
printf("%d is not a power of 2\n",x);
return 0;
}
