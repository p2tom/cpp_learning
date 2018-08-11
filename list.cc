#include <iostream>

using namespace std;

class listElement {
  public:
  // Constructor
  listElement(int n = 0, listElement* nxt = nullptr):
      data(n), next(nxt) {}
  
  int getData() {
    return data;
  }

  listElement* getNext() {
    return next;
  }

  private:
    int data;
    listElement* next;
};

class list {
  public:
    // Constructor
    list(listElement* h = nullptr, listElement* c = nullptr):
        head(h), cursor(c) {
      cout << "Constructor" << endl;
    }

    // Add an Element to the head of the list
    void prepend(int data = 0) {
      if(head == nullptr)
      {
        cursor = head = new listElement(data, head);
      }
      else {
        head = new listElement(data, head);
      }
    }

    void setCursorHead() {
      cursor = head;
    }

    // Get the data pointed to by cursor
    int getCurrent() {
      if(cursor != nullptr) {
        return cursor->getData();
      }
      else {
        return -1;
      }
    }

    // Advance cursor to the next element
    int advance() {
      int retVal = 0;
      if(cursor != nullptr) {
        cursor = cursor->getNext(); 
      }
      else {
        retVal = -1;
      }
      return retVal;
    }

    // Print elements in the list
    void print() {
      listElement* h = head;
      cout << "List Elements: "; 
      while(h != nullptr)
      {
        cout << h->getData() << "->";
        h = h->getNext();
      }
      cout << "##" << endl;
    }
    
    ~list() {
      listElement* h = head;
      while(h != nullptr)
      {
        h = h->getNext();
        delete head;
        head = h;
      }

      cout << "Destructor" << endl;
    }
  private:
    listElement* head;
    listElement* cursor;

};

// Overload operator << 
ostream& operator<< (ostream& out, list& l) {

  l.setCursorHead();

  int retVal = l.getCurrent();
  
  while( retVal != -1)
  {
    out << retVal << "->";
    l.advance();
    retVal = l.getCurrent();
  }
  out << "##";

  return out;
}

int main() {

  cout << "Main:" << endl;
  list myList;

  cout << "Prepend:" << endl;
  myList.prepend(1);
  myList.prepend(2);
  myList.prepend(3);

  //myList.print();

  cout << myList << endl;

  cout << "Current: " << myList.getCurrent() << endl;
  myList.advance();
  cout << "Current: " << myList.getCurrent() << endl;
  myList.advance();

  return 0;
}