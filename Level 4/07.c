/*Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’
at the keyboard.*/
#include<stdio.h>
int main(){
char ch;
while(1){
printf("Enter a Character : ");
scanf(" %c",&ch);
if(ch!='A'){
printf("Your Character is : %c \n",ch);
}
if(ch=='A'){
break;
}
}
return 0;
}
