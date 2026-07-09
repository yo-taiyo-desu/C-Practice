/*Program that will increment and decrement a number X by Y. Use += and -= operators
*/
#include<stdio.h>
int main(){
int x,y;
printf("Enter the numbers : ");
scanf("%d%d",&x,&y);
printf("Incremented value : %d\n",x+=y);
printf("Decremented value : %d\n",x-=y);
return 0;
}
