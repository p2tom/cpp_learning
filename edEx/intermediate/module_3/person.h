#pragma once

#include <iostream>
#include <string>

class Person {
  public:
    Person() : first_name_("fname"),
          last_name_("lname"),
          phone_(0),
          age_(0),
          race_("race") {

          }

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
    
    friend std::ostream & operator << (std::ostream & os, Person & p);

    virtual void OutputIdentity();
    virtual void OutputAge() = 0;

    int age_;

  private:
    std::string first_name_;
    std::string last_name_;
    int phone_;  
    std::string race_;
};
