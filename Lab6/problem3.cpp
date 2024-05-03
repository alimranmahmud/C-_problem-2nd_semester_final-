// // 3. Create a class called &quot;online_shopping_platform&quot; and create objects for
// //  products. Each product object should contain information such as name,
// //  description, price. 6. Create a class called &quot;Library&quot;. Create three book
// //  objects which have attributes like title, author, publication year.
#include <iostream>
using namespace std;
class online_shopping_platform
{
protected:
    string name, description;
    int price;

public:
    online_shopping_platform(string n, string d, int p) : name(n), description(d), price(p) {}
    void display()
    {
        cout << name << endl;
        cout << description << endl;
        cout << price << endl;
    }
};
class Library
{
public:
    string tittle, author;
    int publication_year;
    Library(string t, string a, int p) : tittle(t), author(a), publication_year(p) {}

    void display()
    {
        cout << tittle << endl;
        cout << author << endl;
        cout << publication_year << endl;
    }
};
int main()
{
    online_shopping_platform shop("Risshi", "Good Product", 999);
    shop.display();
    Library book("DR. Anamul Huk", "Naimur", 2021);
    book.display();

    return 0;
}
