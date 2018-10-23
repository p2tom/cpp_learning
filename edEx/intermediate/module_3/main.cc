#include <iostream>
#include "student.h"

using namespace std;

int main () {

  Student student_1(33,
                    "Prithvi", 
                    "Thomas",
                    3008580,
                    "Indian",
                    "C++");

  student_1.OutputIdentity();
  student_1.OutputAge();

  return 0;
} 
