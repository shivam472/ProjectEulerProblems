/*Find the sum of all the multiples of 3 or 5 below 1000*/
#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    while(i<1000)
    {
        if(i%3==0 || i%5==0)
            sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}
//sum = 233168
