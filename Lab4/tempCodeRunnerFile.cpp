// C++ Program to Print Prime Numbers between two Numbers
#include <iostream>
using namespace std;
bool isPrime(int);
void printPrime(int num1, int num2);

int main()
{
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    printPrime(num1, num2);
}
void printPrime(int num1, int num2)
{
    if (num1 > num2)
    {
        swap(num1, num2);
    }
    for (int i = num1 + 1; i < num2; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

bool isPrime(int n)
{
    bool is_prime = true;
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return is_prime;
}