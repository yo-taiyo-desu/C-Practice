/*Program that will categorize a single character that is entered at the terminal, whether it is 
an alphabet, a digit or a special characte 
*/
#include<stdio.h>
int main(){
char ch;
printf("Enter : ");
scanf(" %c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
printf("%c is a Alphabet \n",ch);
}
else if(ch>='0'&&ch<='9'){
printf("%c is a Digit \n",ch);
}
else
printf("%c is a special character \n",ch);
return 0;
}
