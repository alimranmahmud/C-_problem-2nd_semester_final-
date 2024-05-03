// 7. A class has two string type private variables (first_name &amp; last_name). Now access these with
// help of a friend function and print the full name by a single string.
#include <iostream>
#include <string>
using namespace std;
class BaseClass
{
private:
    string s1, s2;

public:
    void setValue(string s1, string s2)
    {
        this->s1 = s1;
        this->s2 = s2;
    }
    friend void display(BaseClass obj);
};
void display(BaseClass obj)
{
    cout << "Full Name Is : " << obj.s1 + " " + obj.s2 << endl;
}
int main()
{
    BaseClass object;
    object.setValue("Hello", "World");
    display(object);
    return 0;
}