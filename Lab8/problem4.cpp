// Take an array in parent class and calculate the average of that array elements in child class.
#include <iostream>
using namespace std;
class Parent
{
public:
    int arr[100];
};
class Child : public Parent
{
public:
    int sum = 0;
    void calc()
    {
        cout << "Enter the Number : " << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        cout << "Average : " << sum / 5 << endl;
    }
};
int main()
{
    Child obj;
    obj.calc();

    return 0;
}