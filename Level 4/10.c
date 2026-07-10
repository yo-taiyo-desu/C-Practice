/*Write a program (WAP) that will calculate the result for the first Nth terms of the 
following series. [In that series sum, dot sign (.) means multiplication]
1².2 + 2².3 + 3².4 + 4².5 + ……*/
#include<stdio.h>
#include<math.h>
int main(){
int n,i,sum=0;
printf("Series upto : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("%d^2*%d ",i,i+1);
sum=sum+(i*i)*(i+1);
if(i<n){
printf("+");
}
}
printf("\nSum is : %d \n",sum);
return 0;
}
