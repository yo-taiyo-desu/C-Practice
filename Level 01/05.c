/* Program that will do the followings:
a) Declare a variable uninitialized
b) Declare and initialize a variable in one statement
c) Declare and initialize multiple variables with different values in one statement
d) Declare and initialize multiple variables with the same value in one statement
*/
#include<stdio.h>
int main(){
//a) Declare a variable uninitialized
int a;
//b) Declare and initialize a variable in one statement
int b=1;
//c) Declare and initialize multiple variables with different values in one statement
int x=2,y=5,z=9;
//d) Declare and initialize multiple variables with the same value in one statement
int p=7,q=7,r=7;
//printf the values
printf("a= %d\n",a);//It's uninitialized , so the value will be garbage 
printf("b= %d\n",b);
printf("x= %d , y= %d , z= %d\n",x,y,z);
printf("p= %d , q= %d , r= %d\n",p,q,r);
return 0;
}
