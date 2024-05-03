// 4. Write a C++ program to find out the sum of series 1 + 2 + 4 + 8 … to
//  infinity.
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i *= 2)
    {
        sum += i;
        cout << i << " ";
    }
    cout << "\n\nSum Of Above Series Is\n";
    cout << sum << endl;

    return 0;
}