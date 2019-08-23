/*What is the 10001st prime number?*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    long i;
    long n = 1;
    int flag = 1;
    int prime = 0;
    while(prime != 10001)
    {
        for(i = 2; i <= n/2; i++)
        {
            if(n%i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            prime++;
        if(prime == 10001)
            cout<<n;
        flag = 1;
        n += 2;
    }
    return 0;
}
//104743
