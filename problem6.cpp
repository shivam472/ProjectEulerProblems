/*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int sum1 = 0, sum2 = 0, difference;
    
    for(int i=1; i<=100; i++)
    {
        sum1 += i*i;
    }
    cout<<sum1<<endl;
    
    for(int j=1; j<=100; j++)
    {
        sum2 += j;
    }
    sum2 = sum2 * sum2;
    cout<<sum2<<endl;
    difference = sum2 - sum1;
    cout<<difference;

    return 0;
}
//difference = 25164150
