// 1. C++ program to check prime number using user defined function.
#include <iostream>
using namespace std;
int checkPrime(int n)
{
    int p = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p++;
            break;
        }
    }
    return p;
}
int main()
{
    int num;
    cin >> num;
    int prime = checkPrime(num);
    if (prime == 1)
    {
        cout << "This number is not prime." << endl;
    }
    else
    {
        cout << "This number is prime." << endl;
    }

    return 0;
}