// 4. Create a class called card that maintains a library card catalog entry. In the card, it will store a
// book’s title, author and number of copies on hand. Store the title, author as string and the
// number of books on hand as an integer value. Use two public functions store () to store the title,
// author and number of books on hand. And another public function display () will display the
// information.
#include <iostream>
using namespace std;
class Card
{
    string book_title, author, number_of_copies;

public:
    void store(string b, string a, int n)
    {
        book_title = b;
        author = a;
        number_of_copies = n;
    }
    void display()
    {
        cout << "Book Title : " << book_title << endl;
        cout << "Author : " << author << endl;
        cout << "number of copies: " << number_of_copies << endl;
    }
};
int main()
{
    Card c;
    c.store("CSE", "Daniyal Richi", 3);
    c.display();

    return 0;
}
