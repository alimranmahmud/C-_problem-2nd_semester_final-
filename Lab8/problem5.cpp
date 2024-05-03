// Input a string in a base class. Convert that string into uppercase in child class
#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    string ch;
    void set()
    {
        cin >> ch;
    }
};
class Child : public Base
{
public:
    void display()
    {
        transform(ch.begin(), ch.end(), ch.begin(), ::toupper);
        cout << ch << endl;
    }
};
int main()
{
    Child obj;
    obj.set();
    obj.display();

    return 0;
}
