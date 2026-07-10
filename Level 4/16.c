/*WAP that will determine whether a number is prime or not
*/
#include<stdio.h>
int main(){
int n,i,isprime=0;
printf("Enter the number : ");
scanf("%d",&n);
if(n<=1){
isprime=1;
}
else{
for(i=2;i<=sqrt(n);i++){
if(n%i==0){
isprime=1;
break;
}
}
}
if(isprime==0){
printf("%d is prime \n",n);
}
else{
printf("%d is not prime \n",n);
}
return 0;
}
