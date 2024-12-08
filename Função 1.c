#include<stdio.h>

int delta (int a, int b, int c)
 {
     int D = (b*b) - (4*a*c);

     return D;
 }

 int main()
 {
   int a, b, c;

   scanf("%d %d %d", &a, &b, &c);

   int D = delta(a,b,c);

   printf("%d", D);


  return 0;
 }
