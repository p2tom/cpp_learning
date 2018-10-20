#include "person.h"
#include <iostream>

using namespace std;

Person::~Person() { 
  cout << "Person Destructor" << endl; 
}

void Person::OutputIdentity() {
    cout << "I am also a person:" << endl;
    cout << first_name_ << " " << last_name_ << endl;
    cout << "Age: " << age_ << endl;
    cout << "Phone: " << phone_ << endl;
    cout << "Race: " << race_ << endl;
}
