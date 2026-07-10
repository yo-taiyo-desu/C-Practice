/*Program that will evaluate simple expressions of the form- 
<number1> <operator> <number2>
; where operators are (+, - , *, /)
And if the operator is “/”, then check if <number2> nonzero or not
*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b;
char op;
printf("Enter : ");
scanf("%f %c %f",&a,&op,&b);
switch (op){
case '+':
printf("%f\n",a+b);
break;
case '-':
printf("%f\n",a-b);
break;
case '*':
printf("%f\n",a*b);
break;
case '/':
if(b!=0){
printf("%f\n"a/b);
}
else{
printf("Not divisible by Zero\n");
}
break;
default:
printf("Invalid Operator \n");
return 0;
}
