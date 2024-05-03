// 6.Write a function that gets any positive number and returns its factorial.
#include <iostream>
using namespace std;
void factorialNumber(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial Number is : " << fact << endl;
}
int main()
{
    factorialNumber(4);

    return 0;
}