// 3. Create a class called person that maintains a register. In the register, it contains name and
// address and blood group, date of birth and an identification number. Store the name, address
// and blood group as string and the identification number as an integer value. Use two public
// functions contain () to store the name, address, date of birth, blood group and identification
// number. And another public function display () will display the information.
#include <iostream>
using namespace std;
class Person
{
    string name, adress, blood_group, date_of_birth;
    int identificationNumber;

public:
    void setValueStore(string n, string a, string b, string d, int i)
    {
        name = n;
        adress = a;
        blood_group = b;
        date_of_birth = d;
        identificationNumber = i;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Adress : " << adress << endl;
        cout << "Blood Group : " << blood_group << endl;
        cout << "Date of birth : " << date_of_birth << endl;
        cout << "Identification Number" << identificationNumber << endl;
    }
};
int main()
{
    Person p;
    p.setValueStore("Richi", "Dhaka", "A+", "2/2/2002", 23423423423);
    p.display();

    return 0;
}