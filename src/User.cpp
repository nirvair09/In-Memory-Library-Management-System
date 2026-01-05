#include "User.h"
#include <iostream>
using namespace std;

User::User(int id, string name) : Person(id, name) {}

void User::displayRole() const {
    cout << "Role: Library User" << endl;
}
