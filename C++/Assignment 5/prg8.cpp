#include <iostream>

using namespace std;

class GrandParent {
public:
    GrandParent() {
        cout << "Constructor is used at Base class (GrandParent) " << endl;
    }
    virtual ~GrandParent() {
        cout << "Constructor is used at base class (Grandparent class) " << endl;
    }
};

class Parent : public GrandParent {
public:
    Parent() {
        cout << "Constructor is used at level 1 derived class (parent class) " << endl;
    }
    ~Parent() {
        cout << "destructor is used at level 1 derived class (parent class) " << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Constructor is used at level 2 derived class (child class) " << endl;
    }
    ~Child() {
        cout << "destructor is used at level 2 derived class (child class) " << endl;
    }
};

int main() {
    {
        Child child1;
    }
    return 0;
}
