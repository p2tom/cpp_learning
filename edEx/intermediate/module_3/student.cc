#include "student.h"
#include "person.h"

#include <iostream>

using namespace std;

Student::~Student() {
  cout << "Student Destructor" << endl ;
}

void Student::OutputIdentity() {
  cout << "I am a Student" << endl ;
  Person::OutputIdentity();
}

void Student::OutputAge() {
  cout << "Student Age:" << age_ << endl ;
}
