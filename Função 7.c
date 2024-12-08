#include<stdio.h>

 int Maiormaismenor (int a, int b, int c)
 { int add;
     if (a > b && a > c)
     {
         if( b < c)
         {
             add = a + b;

             return add;
         }
         else
         {
             add = a + c;

             return add;
         }
     }
     else if (b > a && b > c )
     {
         if (c < a)
         {
             add = b + c;

             return add;
         }
         else
         {
             add = b + a;

             return add;
         }
     }
     else if (c > a && c > b)
     {
         if(b < a)
         {
             add = c + b;

             return add;
         }
         else
         {
             add = c + a;

             return add;
         }
     }

 }

 int main()
 {
   int a, b, c;

   scanf("%d %d %d", &a, &b, &c);

   int Soma =Maiormaismenor(a, b, c);

   printf("%d", Soma);

  return 0;
 }
