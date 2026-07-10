/*Program that will check whether a triangle is valid or not, when the three angles (angle value 
should be such that, 0 < value < 180) of the triangle are entered through the keyboard
*/
#include<stdio.h>
int main(){
float a,b,c;
printf("Enter the angles : ");
scanf("%f%f%f",&a,&b,&c);
if(a+b+c==180&&a>0&&b>0&&c>0){
printf("Triangle is valid\n");
}
else{
printf("No Triangles \n");
}
return 0;
}


