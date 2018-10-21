#include "person.h"
#include <iostream>
#include <iomanip>

using namespace std;

std::ostream & operator << (std::ostream & os, Person & p) {
  os << "I am also a person:" << endl
     << std::setw(10) << "Name: " << p.first_name_ << " " << p.last_name_ << endl
     << std::setw(10) << "Age: " << p.age_ << endl
     << std::setw(10) << "Phone: " << p.phone_ << endl
     << std::setw(10) << "Race: " << p.race_ << endl;

     return os;
}

Person::~Person() { 
  cout << "Person Destructor" << endl; 
}

void Person::OutputIdentity() {
    cout << *this;
}
