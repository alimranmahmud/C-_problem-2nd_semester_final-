// 3. Write a C++ program to find out the sum of series 1^2 + 2^2 + …. + n^2.
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, sum = 0;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}