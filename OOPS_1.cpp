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
class Spaceship
{
    string name;
    int shieldStrength;
    int numOfMissiles;
    // int difficulty;             //0,1,2 => 0 is for easy, 1 is for medium , 2 is for tough.
    static int difficulty;

public:
    Spaceship(string nm)
    {
        this->name = nm;
    }
    void fireMissile()
    {
        if (numOfMissiles > 0)
        {
            numOfMissiles--;
        }
    }
    string getName()
    {
        return this->name;
    }
    Spaceship giveMeMyOwnReference()
    {
        return (*this);
    }

    // static methods to access static variables
    // className::methodName(*args)
    //static methods can only access static data.

    static int getDifficulty()
    {
        return difficulty;
    }
    static void changeDifficulty(int newDifficulty)
    {
        difficulty = newDifficulty;
    }
};

// For all the static variables we need to assign the data outside the class.
// We need to manually assign memory to static variables.
// even though it is private we can assign it,one time assignment.

int Spaceship::difficulty = 0;

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

    // Encapsulation => Binding the method with the data and by using this we can access the data not directly but by using methods.
    // Getter and setter methods can be used
    // Incapsulation is used to connect data with the methods.
    // Abstraction:Hiding the data we do not want user to manipulate any data.

    /**
     * Advantages
     * -maintainable
     * -reusable
     * -extensible
     *
     * Disadvantage
     * -You have to read a lot to understand every bit of code.
     * -Length of code is generally longer than usual.
     * -Everything is treated as object in OOP so before applying it we need to have excellent thinking in terms of objects.
     */

    Test t; // during creation constructor gets called;
    t.setX(100);

    // objectName.methodName(*args)
    cout << t.getX() << "\n";

    /**
     * Special Keywords
     * this keyword
     *
     * this is a pointer that refers to the object itself.
     * this->name or (*this).name
     * -When local variables name is same as the member's name this keyword is used.
     * -To return reference to the calling object.
     * -Can be used for chained function calls on an object.
     *
     * static keyword
     * let us say we want to have a configuration to change the toughness of the space wars game
     * this 'difficulty' of the game is going to be the same for all the spaceships in the game.
     * if we store it seperately in all the objects ,we will have to pay the price to maintain it consistently in all of the objects/
     * even updation will take O(N) time complexity
     * we will keep a single copy in the memory for all the objects of Spaceship for the difficulty variable
     *   this is a static variable
     *      --although it can be changed.
     *      --it is named static because all the objects have the exact same copy (ONE COPY) of the variable.
     *      --it is no of copied do not change as the no of object change.
     *      --shared with all the spaceships.
     */

    Spaceship mySpaceship("Voyager1");

    cout << mySpaceship.giveMeMyOwnReference().getName() << "\n";
    // Example of chaining method calls by this keyword

    Spaceship cargoShuttle("CargoShuttle");
    Spaceship warpCruiser("WarpCruiser");

    // To access a static variable.
    // ClassName::propertyName

    cout<<Spaceship::getDifficulty()<<"\n";

    Spaceship::changeDifficulty(3);

    cout << Spaceship::getDifficulty() << "\n";
}
