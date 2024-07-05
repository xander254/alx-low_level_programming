#include <stdio.h>

 
void primeFactors(long int n)
{
    int i; 
	while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
 
        printf("%ld ", n);
}
 
int main()
{
    long int n = 612852475143;
    primeFactors(n);
    return 0;
}

