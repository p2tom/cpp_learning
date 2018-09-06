#include <iostream>

using namespace std;

class Person {

  private:
    string name_;
    int age_;

  public:
    Person(string name, int age):
        name_(name), age_(age){}

    ~Person() {
      cout << "Person Destructed!" << endl;
    }

    void setName(string name) {
      name_ = name;
    }

    string  getName() {
      return name_;
    }

    void setAge(int age) {
      age_ = age;
    }

    int getAge() {
      return age_;
    }

    void printPerson() {
      cout << "Name: " << name_ << " Age: " << age_ << endl;
    }
};

void passByValue(int num);
void passByRef(int& num);
void modifyPerson(Person& myPerson);

int main() {
  int num_1 = 3;
  int num_2 = 3;

  int* pNum_1 = &num_2;

  double* pDubNum_1 = new double(2.36);

  Person me("Rini", 31);

  *pNum_1 = 5;

  cout << "num_1: " << num_1 << endl;
  cout << "num_2: " << num_2 << endl;

  cout << "-----" << endl;

  passByValue(num_1);
  passByRef(num_2);

  cout << "-----" << endl;

  cout << "num_1: " << num_1 << endl;
  cout << "num_2: " << num_2 << endl;

  cout << "pDubNum_1: " <<  *pDubNum_1 << endl ;

  delete pDubNum_1;

  cout << "pDubNum_1: " <<  *pDubNum_1 << endl ;
  cout << "-----" << endl;

  me.printPerson();
  cout << "-----" << endl;
  modifyPerson(me);
  me.printPerson();
  cout << "-----" << endl;
}

void passByValue(int num) {

  cout << "By Value: " << ++num << endl;
}

void passByRef(int& num) {
  cout << "By Ref: " << ++num << endl;
}

void modifyPerson(Person& myPerson) {
  myPerson.setName("Prithvi");
  myPerson.setAge(33);
}