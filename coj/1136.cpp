#include <stdio.h>
#include <string.h>

 #define  L  35000
 int prime[ L ], nprime;
 
 void initPrime() {
         int i, j;
         memset( prime, 0, sizeof(prime) );
        nprime = 0;
        for ( i = 2; i < L; ++i ) {
                if ( prime[ i ] == 0 ) {
                        prime[ nprime++ ] = i;
                        for ( j = i + i; j < L; j += i ) {
                                prime[ j ] = 1;
                        }
                }
        }
        prime[ nprime++ ] = L;
}

int isPrime( int n ) {
        int i = 0;
        if ( n == 2 ) {
               return 1;
        }
        while ( (prime[i]*prime[i]<=n) && (n%prime[i]!=0) ) {
                ++i;
        }
        return n % prime[ i ] != 0;
}

int main() {
        int td, a, b;
        initPrime();
        scanf( "%d", &td );
        while ( td-- > 0 ) {
               scanf( "%d%d", &a, &b );
                if ( a < 2 ) {
                        a = 2;
               }
              while ( a <= b ) {
                        if ( isPrime( a ) ) {
                                printf( "%d\n", a );
                        }
                        ++a;
                }
                if ( td > 0 ) {
                        printf( "\n" );
                }
        }
        return 0;
}
