/*Program for “Guessing Game”:
Player-1 picks a number X and Player-2 has to guess that number within N = 3 tries. For each 
wrong guess by Player-2, the program prints “Wrong, N-1 Chance(s) Left!” If Player-2
successfully guesses the number, the program prints “Right, Player-2 wins!” and stops 
allowing further tries (if any left). Otherwise after the completion of N = 3 wrong tries, the 
program prints “Player-1 wins!” and halts.
[ Restriction: Without using loop/break/continue
*/
#include<stdio.h>
int main(){
int x,guess,flag=0;
printf("Player 1 , Enter the number : ");
scanf("%d",&x);
printf("Player 2 ' Enter your guess : ");
scanf("%d",&guess);
if(x==guess){
printf("Player 2 Wins!\n");
flag=1;
}
else{
printf("Wrong ! 2 chance's left\n");
}
if(flag==0){
printf("Player 2 ' Enter your guess : ");
scanf("%d",&guess);
if(x==guess){
printf("Player 2 Wins!\n");
flag=1;
}
else{
printf("Wrong ! 1 chance's left\n");
}
}
if(flag==0){
printf("Player 2 ' Enter your guess : ");
scanf("%d",&guess);
if(x==guess){
printf("Player 2 Wins!\n");
flag=1;
}
else{
printf("Player 1 wins!\n");
}
}
return 0;
}
