#include<stdio.h>

 int Nmaior (int x, int y)
 {
     if ( x > y)
     {
         return x;
     }
     else
     {
         return y;
     }
 }

 int main()
 {
  int x, y;

  scanf("%d %d", &x, &y);

  int maior = Nmaior(x, y);

  printf("%d", maior);


  return 0;
 }
