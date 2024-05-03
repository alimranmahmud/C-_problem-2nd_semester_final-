// 5. Simple class program to find prime number using class prime. And take the input value as a
// private member and declare two public member function get_input() to get the input from user.
// And another function is calculate () to calculate the input is prime or not and display it using
// calculate () function.
#include <iostream>
using namespace std;
class Prime
{
    int number;

public:
    void get_input(int n)
    {
        number = n;
    }
    int calculate()
    {
        int p = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % 2 == 0)
            {
                p++;
                break;
            }
        }
        return p;
    }
    void display()
    {
        int prime = calculate();
        if (prime == 0)
        {
            cout << number << " is prime Number" << endl;
        }
        else
        {
            cout << number << " is not prime Number" << endl;
        }
    }
};
int main()
{
    Prime p;
    p.get_input(3);
    p.calculate();
    p.display();
    return 0;
}