// 8. Create a class called &quot;summation&quot; with the PRIVATE variables number1 and number2. Use a
// constructor to initialize these private variables. calculate the sum of these numbers.
#include <iostream>
using namespace std;
class summation
{
    int n1, n2;

public:
    summation(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    void display()
    {
        cout << "Sum of Value : " << n1 + n2 << endl;
    }
};
int main()
{
    summation obj(2, 3);
    obj.display();
    return 0;
}