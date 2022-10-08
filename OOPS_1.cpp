/**
 * @file OOPS_1.cpp
 * @author Avinit (you@domain.com)
 * @version 0.1
 * @date 2022-10-08
 * @copyright Copyright (c) 2022
 *
 */

/**
 * Why do we need OOPS
 * OOPS vs Procedural Paradigms
 * Object
 * Classes
 * Constructor:allocates memory and initialization
 * Encapsulation:Binding the member data with the member methods
 * 2 scopes public,private
 * Abstraction:
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;
class Mug
{
    string brand, filled;
    int current_quantity;
    int capacity;

public:
    Mug()
    {
        this->current_quantity = 0;
    }
    Mug(string name, string liquid, int amount, int size)
    {
        this->brand = name;
        this->filled = liquid;
        this->current_quantity = amount;
        this->capacity = size;
    }
    void fill(int amount)
    {
        current_quantity = min(this->capacity, this->current_quantity + amount);
    }
    void empty(int amount)
    {
        current_quantity = max(0, current_quantity - amount);
    }
    void Display()
    {
        cout << "Mug is of Brand: " << this->brand << "\n";
        cout << "Currently " << this->current_quantity << " ml of " << this->filled << " is filled\n";
        cout << "Total capacity of the mug: " << this->capacity << " ml\n";
    }
};
class Cookie
{
    string type;
    int price;

public:
    Cookie()
    {
        this->type = "Chocolate";
        this->price = 80000;
    }
    Cookie(string name, int price)
    {
        this->type = name;
        this->price = price;
    }
};
class CookieJar
{
    int numCookies;
    int capacity;
    vector<Cookie> data;

public:
    CookieJar()
    {
        this->numCookies = 0;
    }
    CookieJar(int number, int capacity, vector<Cookie> all)
    {
        this->numCookies = number;
        this->capacity = capacity;
        this->data = all;
    }
    void setNumCookies(int result)
    {
        this->numCookies = result;
    }
    int getNumCookies()
    {
        return this->numCookies;
    }
};

class Test
{
    int x;

public:
    Test() // Constructor
    {
        this->x = 0;
    }
    int getX() // Encapsulation data is bound with the values
    {
        return this->x;
    }
    void setX(int val)
    {
        this->x = val;
    }
};

int main()
{
    // OOPS

    // Concept of Object Oriented Programming
    // We need a standard way in order to structure the code
    // Relate to real world entities
    // Maintanable,Transparent ,easy to test and fix things.
    // Extensible-Add new features quickly on top of the old code
    // Reusable-Ability to reuse code.

    // Procedural Algorithm => Where everything is executed line by line

    // Object => Attributes/data/fields and methods/behaviours

    // Every object belongs to a certain type that is know as "class".
        Mug m1("Scaler", "Water", 20, 80);
        m1.fill(40);
        m1.Display();

    // Method v/s function

    // Method => It can only be called using an object.
    // Function => It can be called independently

    // Objects are created using the classes.

    CookieJar j1;

    // Private and public scope in a class
    // Constructor will be same name as the class name which has no return type it will always be public.
    // Reason =>
    // Every class object is created using the same new keyword, so it must have information
    // about the class to which it must create an object.For this reason, the constructor name should be the same as the class name.

    // Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object
    // which is why it is known as constructors. Constructor does not have a return value, hence they do not have a return type.

    // Concept of private,public
    // If data can be accessible outside the class then anyone can modify its value by using the . operator which will not be very beneficial
    // We want to keep a lock over this data so that it cannot be directly accessible
    // If this could have been a bank account anyone can update value to anything

    // The methods can access the data by using "this" keyword/

    // Incapsulation => Binding the method with the data and by using this we can access the data not directly but by using methods.
    // Getter and setter methods can be used
    // Incapsulation is used to connect data with the methods.
    // Abstraction:Hiding the data we do not want user to manipulate any data.

    Test t; // during creation constructor gets called;
    t.setX(100);

    // objectName.methodName(*args)
    cout << t.getX();



    //Static
    
}
