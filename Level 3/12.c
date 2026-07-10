/*Program that will construct a menu for performing arithmetic operations. The user will give 
two real numbers (a, b) on which the arithmetic operations will be performed and an integer 
number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, 
subtraction, multiplication, division (quotient) respectively.*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b;
int choice;
printf("Enter 2 numbers : ");
scanf("%f%f",&a,&b);
printf("1) Addition\n");
printf("2) Subtraction \n");
printf("3) Multiplication \n");
printf("4) Division (Quotient) \n");
printf("Enter your choice (1-4) : ");
scanf("%d",&choice);
if(choice==1){
printf("%f\n",a+b);
}
else if(choice==2){
printf("%f\n",a-b);
}
else if(choice==3){
printf("%f\n",a*b);
}
else if(choice==4){
if(b==0){
printf("Not divisible by Zero");
}
else{
printf("%f\n",a/b);
}
}
else
printf("Invalid Choice");
return 0;
}
