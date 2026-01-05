#ifnfdef USER_H
#define USER_H

#include "Person.h"

class User::public Person{
    public:

    User(int id,string name);

    void displayRole() const override;

};

#endif