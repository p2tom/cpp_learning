#include <iostream>
#include "student.h"

using namespace std;

int main () {

  Student student_1("Prithvi", 
                    "Thomas",
                    3008580,
                    33,
                    "Indian",
                    "C++");

  student_1.OutputIdentity();
  student_1.OutputAge();

  return 0;
} 
