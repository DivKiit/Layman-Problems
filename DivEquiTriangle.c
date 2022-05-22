#include<stdio.h>
/*Divyaranjan Sahoo
Equilateral Triangle program*/
int main()
{float a,b,c;
  int Div=0;
  printf("Enter the values of sides of triangle ~ ");
  scanf("%f%f%f",&a,&b,&c);

  while (a+b>c && a+c>b && c+b>a && a==b && b==c){
    Div=1;
    break;}

  while (a!=b || b!=c || c!=a){
    Div=0;
    break;}

  while (a+b<c || a+c<b || c+b<a){
    Div=0;
    break;}

  printf("%d",Div);
  return 0;}
