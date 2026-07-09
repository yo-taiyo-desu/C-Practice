/*Program that will increment and decrement a number X by 1 inside the printf function. 
Use ++ and - - operators*/
#include<stdio.h>
int main(){
int x;
printf("Enter the number : ");
scanf("%d",&x);
printf("X++ : %d\n",x++);
printf("++X : %d\n",++x);
printf("X-- : %d\n",x--);
printf("--X : %d\n",--x);
return 0;
}
