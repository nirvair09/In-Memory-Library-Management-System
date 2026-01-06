#inlcude <iostream>
#inlcude "User.h"
#include "Book.h"
using namespace std;

int main(){

    User u1(101,"Roy");
    u1.displayRole();

    Book b1(1,"Clean Code","Rober C. Martin");
    cout<<"Book ID: "<<b1.getId()<<endl;
    cout<<"Title: "<<b1.getTitle()<<endl;
    cout<<"Author: "<<b1.getAuthor()<<endl;

    return 0;
}