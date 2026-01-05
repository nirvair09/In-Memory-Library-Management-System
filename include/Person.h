#ifnfdef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{

protected:
   int id;
   string name;
   
public:
   Person(int id,string name);
   virtsual ~Person();
   
   virtsual void displayRole() const = 0;

   int getId() const;
   string getName() const;
};


#endif