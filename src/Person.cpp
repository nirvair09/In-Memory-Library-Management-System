#include "Person.h"

Person::Person(int id,string name):id(id),name(name){}

int Person::getId() const {
    return id;
}

string Person::getName() const{
    return name;
}