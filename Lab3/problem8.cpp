// 8.Write a function that gets any positive number and returns digital root.
#include <iostream>
using namespace std;

int digSum(int n)
{
    int sum = 0;
    int rem;
    int rem2;
    int sum2 = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    while (sum != 0)
    {
        rem2 = sum % 10;
        sum2 = sum2 + rem2;
        sum = sum / 10;
    }
    return sum2;
}
int main()
{
    int n = 1234;
    cout << digSum(n);
    return 0;
}
