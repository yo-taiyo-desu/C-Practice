/*Program that will declare a variable from each data type: long int, long long int, long double, 
short int. Then it will initialize them with values and print them
*/
#include<stdio.h>
int main(){
long int a=235283628;
long long int b=372747827492638753;
long double c=374837383689;
short int d=32766;
printf("The long int value : %ld\n",a);
printf("The long long int value : %lld\n",b);
printf("The long double value : %Le\n",c);
printf("The short int vaule : %hd\n",d);
return 0;
}
