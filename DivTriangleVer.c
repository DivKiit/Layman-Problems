#include<stdio.h>
#include<math.h>
/*Divyaranjan Sahoo
Triangle area using sides*/
int main()
{float a,b,c,s,Area;
  printf("Enter the values of sides of triangle ~ ");
  scanf("%f%f%f",&a,&b,&c);

  while (a+b>c && a+c>b && c+b>a){
    s=(a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    break;}

  while (a+b<c || a+c<b || c+b<a){
    Area=0;
    break;}

  printf("\n%.3f\n",Area);
  return 0;}
