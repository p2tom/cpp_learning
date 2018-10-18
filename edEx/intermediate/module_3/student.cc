#include "student.h"
#include <iostream>

using namespace std;

Student::~Student() {
  cout << "Student Destructor" << endl ;
}

void Student::OutputIdentity() {
  cout << "I am a Student" << endl ;
}

void Student::OutputAge() {
  cout << "I am a Student" << endl ;
  Person:OutputAge();
}
