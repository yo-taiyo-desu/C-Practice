/*Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
*/
#include<stdio.h>
int main(){
int n,i;
printf("Series upto : ");
scanf("%d",&n);
for(i=1;i<=n;i+=2){
printf("%d ",2*i-1);
if(i<n){
printf(" , ");
}
}
return 0;
}
