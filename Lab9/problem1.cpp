// Class A has an int n1 and class B has an int n2. Calculate the sum of two variables in class C.
#include <iostream>
using namespace std;
class A
{
public:
    int n1;
    void setvalue1(int n1)
    {
        this->n1 = n1;
    }
};
class B
{
public:
    int n2;
    void setValue2(int n2)
    {
        this->n2 = n2;
    }
};
class C : public A, public B
{
public:
    void sum()
    {
        cout << "Sum : " << n1 + n2 << endl;
    }
};

int main()
{
    C obj;
    obj.setvalue1(10);
    obj.setValue2(20);
    obj.sum();
    return 0;
}