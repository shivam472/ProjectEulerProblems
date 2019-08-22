/*What is the largest prime factor of the number 600851475143*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

bool isPrime(long numberToCheck)
{

    bool numberIsPrime = true;
    for(long j = 2 ; j < sqrt(numberToCheck) ; j++)
    {
        if(numberToCheck % j == 0)
            numberIsPrime = false;


    }
    return numberIsPrime;
}

int main()
{
    long long number = 600851475143, primeNumber, i, j;
    long long sqrtofNum = sqrt(number);

    for(i = 2; i<number ; i++ )
    {

        if(isPrime(i))
        {
           if(number % i == 0)
            {
                cout << " prime factor :: " << i;
            }

        }
    }
    return 0;
}
//6857


