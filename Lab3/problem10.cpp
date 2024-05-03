// 10. Print length of a string
#include <iostream>
using namespace std;

int main()
{
    int l = 0;
    char ch[100];
    cin >> ch;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        l++;
    }
    cout << l << endl;

    return 0;
}