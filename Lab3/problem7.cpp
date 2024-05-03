// 7.Write a function that gets any positive number and returns sum of its digit.
#include <iostream>
using namespace std;
int sumOfDegit(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter the positive number : ";
    cin >> num;
    cout << "Sum of digit : " << sumOfDegit(num) << endl;

    return 0;
}