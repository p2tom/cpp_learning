#pragma once

#include <iostream>
#include <string>
#include "person.h"

class Student: public Person {
  public:
   Student(
        int age,
        std::string fname, 
        std::string lname,
        int phone,
        std::string race,
        std::string course)
        : Person(age,
          fname,
          lname,
          phone,
          race),
          course_(course) {
            
          }

    virtual ~Student();

    virtual void OutputIdentity() override;
    virtual void OutputAge() override;

  private:
    std::string course_;

};

