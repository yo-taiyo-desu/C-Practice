/*Write a program (WAP) that will find nCr where n >= r; n and r are integers 
*/
#include<stdio.h>
int main(){
int n,r,i,ncr,factn=1,factr=1,factnr=1;
printf("Enter n : ");
scanf("%d",&n);
printf("Enter r : ");
scanf("%d",&r);
if(r>n){
printf("Invalid");
return 0;
}
for(i=1;i<=n;i++){
factn=factn*i;
}
for(i=1;i<=r;i++){
factr=factr*i;
}
for(i=1;i<=(n-r);i++){
factnr=factnr*i;
}
ncr=factn/(factr*factnr);
printf("NCR of %d & %d is : %d\n",n,r,ncr);
return 0;
}
