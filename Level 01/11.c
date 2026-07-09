/*Program that will declare a variable from each data type: unsigned int, unsigned long int, 
unsigned long long int, unsigned short int. Then it will initialize them with values and print
them*/
#include<stdio.h>
int main(){
unsigned int a=484744773;
unsigned long int b=47484737373;
unsigned long long int c=4848474747474;
unsigned short int d=65535;
printf("The unsigned int value : %u\n",a);
printf("The unsigned long int value : %lu\n",b);
printf("The unsigned long long int value : %llu\n",c);
printf("The unsigned short int value : %hu\n",d);
return 0;
}

