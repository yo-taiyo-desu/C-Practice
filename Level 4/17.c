/*WAP that will determine whether an integer is palindrome number or not
*/
#include<stdio.h>
int main(){
int n,r,temp,num;
printf("Enter : ");
scanf("%d",&num);
n=num;
while(n!=0){
temp=n%10;
r=r*10+temp;
n=n/10;
}
if(r==num){
printf("%d is Palindrome \n");
}
else
printf("%d is not Palindrome \n");
return 0;
}
