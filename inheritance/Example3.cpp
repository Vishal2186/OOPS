// // C++ program to show that a derived class
// // doesn’t inherit access to private data members.
// // However, it does inherit a full parent object.
// class A {
//     public:
//         int x;
    
//     protected:
//         int y;
    
//     private:
//         int z;
//     };
    
//     class B : public A {
//         // x is public
//         // y is protected
//         // z is not accessible from B
//     };
    
//     class C : protected A {
//         // x is protected
//         // y is protected
//         // z is not accessible from C
//     };
    
//     class D : private A // 'private' is default for classes
//     {
//         // x is private
//         // y is private
//         // z is not accessible from D
//     };
    
//************************-------------------------Example-------------------------*************************/

// C++ program to illustrate how to access the private data
// members of the base class in derived class using public
// getter methods of base class
#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int privateVar;

public:
    // Constructor to initialize privateVar
    Base(int val): privateVar(val){}

    // Public getter function to get the value of privateVar
    int getPrivateVar() const { return privateVar; }

    // Public setter function to set the value of privateVar
    void setPrivateVar(int val) { privateVar = val; }
};

// Derived class
class Derived : public Base {
public:
    // Constructor to initialize the base class
    Derived(int val) : Base(val){}

    // Function to display the private member of the base
    // class
    void displayPrivateVar()
    {
        // Accessing privateVar using the public member
        // function of the base class
        cout << "Value of privateVar in Base class: "
             << getPrivateVar() << endl;
    }

    // Function to modify the private member of the base
    // class
    void modifyPrivateVar(int val)
    {
        // Modifying privateVar using the public member
        // function of the base class
        setPrivateVar(val);
    }
};

int main()
{
    // Create an object of Derived class
    Derived obj(10);

    // Display the initial value of privateVar
    obj.displayPrivateVar();

    // Modify the value of privateVar
    obj.modifyPrivateVar(20);

    // Display the modified value of privateVar
    obj.displayPrivateVar();

    return 0;
}