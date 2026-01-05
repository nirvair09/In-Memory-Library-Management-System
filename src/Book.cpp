#include "Book.h"
using namespace std;

Book::Book(int id, string title, string author)
     :id(id),title(title),author(author),isIssued(false) {}

int Book::getId() const {
    return id;
}     

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}


bool Book::getStatus() const {
    return isIssued;
}

void Book::issueBook(){
    isIssued=true;
}

void Book::returnBook(){
    isIssued=false;
}