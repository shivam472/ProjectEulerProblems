/*Find the sum of all the primes below two million*/

#include <iostream>
#include <math.h>

using namespace std;

long long isPrime(long long n)
{
    for(long long i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
            return 0;

    }
    return 1;
}

int main()
{
    long long sum = 2;
    for (long long i = 3; i < 2000000; i += 2)
    {
        if(isPrime(i))
            sum += i;
    }
    cout<<sum;
    return 0;
}
//sum = 142913828922
