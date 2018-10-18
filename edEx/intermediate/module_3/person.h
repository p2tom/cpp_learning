#pragma once

#include <iostream>
#include <string>

class Person {
  public:
    Person(
        std::string fname, 
        std::string lname,
        int phone,
        int age,
        std::string race)
        : first_name_(fname),
          last_name_(lname),
          phone_(phone),
          age_(age),
          race_(race) {

          }

    virtual ~Person();

    std::string first_name_;
    std::string last_name_;

    virtual void OutputIdentity() = 0;
    virtual void OutputAge();

  protected:
    int phone_;  

  private:
    int age_;
    std::string race_;

};

