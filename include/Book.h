#ifnfdef BOOK_H
#define BOOK_H

#include <string>
using namespace std:

Class Book{
    private:
    int id;
    string title;
    string author;
    bool isIssued;

    public:
    Book(int id,string title,string author);

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    bool getIsIssued() const;

    void issueBook();
    void returnBook();
}

#endif