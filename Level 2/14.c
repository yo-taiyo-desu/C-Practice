/*Program to find size of int, float, double and char of the system 
*/
#include<stdio.h>
int main(){
int a;
float b;
char ch;
double d;
printf(" Size of int : %zu \n",sizeof(a));
printf(" Size of float : %zu \n",sizeof(b));
printf(" Size of char : %zu \n",sizeof(ch));
printf(" Size of double : %zu \n",sizeof(d));
return 0;
}
