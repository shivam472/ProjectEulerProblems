/*By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the dum of the even valued terms.*/
#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int first = 1;
    int second = 2;
    int third = 0;
    int sum = 0;
    while(second<=4000000)
    {
        third = first + second;
        if(second%2 == 0)
            sum+=second;
        first = second;
        second = third;
    }
    cout<<sum;

    return 0;
}
//sum = 4613732
