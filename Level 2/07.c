/*Program that will declare and initialize an integer and a floating point number. Then it will 
perform floating to integer and integer to floating conversions using
(a) Assignment operation
(b) Type casting*/
#include<stdio.h>
int main(){
int a=-150;
float b=123.125;
int intresult;
float floatresult;
//(a) Assignment operation
intresult = b;
floatresult = a;
printf("Assignment : %f assigned to an int produces %d\n",b,intresult);
printf("Assignment : %d assigned to a float produces %f\n",a,floatresult);
//(b) Type casting
intresult = (int)b;
floatresult = (float)a;
printf("Type Casting : (float) %d produces %f\n",a,intresult);
printf("Type Casting : (int) %f produces %d\n",b,floatresult);
return 0;
}
