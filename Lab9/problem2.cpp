// Write a simple class that print a random number (in between 1 - 9) every time whenever ‘n’ is pressed by keyboard
#include <iostream>
using namespace std;
class RandomNumber
{
public:
    char ch;
    RandomNumber(char ch)
    {
        this->ch = ch;
    }
    void display()
    {
        if (ch == 'n')
        {
            cout << "Random number is : " << rand() / 100 << endl;
        }
        else
        {
            cout << "Plese Enter the n leter." << endl;
        }
    }
};
int main()
{
    char ch;

    while (1)
    {
        cout << "press n : ";
        cin >> ch;
        RandomNumber obj(ch);
        obj.display();
    }

    return 0;
}