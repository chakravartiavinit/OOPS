#include <iostream>
#include <vector>
using namespace std;
/**
 * Polymorphism
 * It has two forms .1-static 2-dynamic
 * Ability to use same function in different context.
 * 1.static => Happens at Compile time.
 * 2.dynamic => Happens at run-time.
 *
 * Dynamic Polymorphism => Overriding a method using inheritance.
 * Static Polymorphism => Either number of inputs,type of inputs,output will vary .
 */
// Function Overloading => Compiler itself knows which method we need to use.
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
class ArrayList
{
    // private:    Non accessible direvtly outside the class and also not inheritable
    //    vector<int> arr;

protected: // Will be able to access it directly int he derived class through inheritances
    // but still can't access them outside the class via the object directly.
    // use case :to make data inheritable but still protecting from the outside world.
    vector<int> arr;

public:
    // static,overloaded constrctors.
    ArrayList()
    {
        cout << "Constructor without param called\n";
        arr = {};
    }
    ArrayList(vector<int> arr)
    {
        cout << "Constructor with param called\n";
        this->arr = arr;
    }
    vector<int> getArray()
    {
        return arr;
    }
    int size()
    {
        return arr.size();
    }
    void add(int x)
    {
        cout << "Calling the normal add method\n";
        arr.push_back(x);
    }
    void print()
    {
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
};

//private is never inherited in any of the modes

//in this public mode of inheritance (PUBLIC)
//public data of base => public data of derived
//protected data of base => protected data of derived.

// protected mode of inheritance
// public data of base => protected data of derived
// protected data of base => protected data of derived

// Now let's say we want to push only non-negative integers in the arr list in the class.
class NonNegativeArrayList : public ArrayList
{

public:
    NonNegativeArrayList(vector<int> arr)
    {
        cout << "Calling the non-negative array list constructor.";
        for (auto x : arr)
        {
            add(x);
        }
    }
    // To add only non negative elements we will override the add method.
    void add(int x); // only the declaration or signature here.
};
// definition outside class
// scope resolution operator
// in which class is my method coming
// tell it before I tell the method name
// returnType className::method(args)  => Syntax.
void NonNegativeArrayList::add(int x)
{
    cout << "Calling the non negative array list constructor\n";

    if (x >= 0)
    {
        arr.push_back(x);
    }
}

int main()
{

    // ArrayList myArrayList;
    // cout<<myArrayList.size()<<"\n";

    // myArrayList.add(10);

    // cout<<myArrayList.size()<<"\n";
    vector<int> temp = {1, 2, -5, 4, 10};
    NonNegativeArrayList myNonNegativeArrayList(temp);


    myNonNegativeArrayList.print();
    // cout << myNonNegativeArrayList.size();
}