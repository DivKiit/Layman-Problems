#include<stdio.h>
/*Divyaranjan
Character Recognition*/
int main(){
  char Alpha;
  printf("\nEnter the Alphabet here ~ ");
  scanf("%c",&Alpha);

  if (Alpha>'`' && Alpha<'{'){
    printf("\nThe uppercase of the alphabet is %c\n", toupper(Alpha));}

  if (Alpha>'@' && Alpha<'['){
    printf("\nThe input is already in an uppercase alphabet\n");}

  return 0;
}
