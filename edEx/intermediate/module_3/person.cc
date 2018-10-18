#include "person.h"
#include <iostream>

using namespace std;

Person::~Person() { 
  cout << "Person Destructor" << endl; 
}

void Person::OutputAge() {
  cout << "I am " << age_ << " years old." << endl;
}
