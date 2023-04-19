#include<stdio.h>

int main(){

   int i=1, j=2, k=3, m=2;
   
   printf( "%d", j==1 );
   printf( "%d", j==3 );
   printf( "%d", i >= 1 && j < 4 );
   printf( "%d", m >= 99 && k < m );
   printf("%d", j >= i || k == m );
   printf( "%d", k + m < j || 3 - j >= k );
 printf( "%d", !m );
 printf( "%d", !( j - m ) );
 printf( "%d", !( k > m ) );
 printf( "%d", !( j > k ) );



    return 0;
}