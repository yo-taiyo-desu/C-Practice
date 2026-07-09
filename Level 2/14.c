/*Program to find size of int, float, double and char of the system 
*/
#include<stdio.h>
int main(){
int a=4;
float b=4.89;
char ch='c';
printf("Size of int : %zu \n",sizeof(a));
printf(" Size of float : %zu \n",sizeof(b));
printf(" Size of char : %zu \n",sizeof(ch));
return 0;
}
