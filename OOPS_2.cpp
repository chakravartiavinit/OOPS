#include <iostream>
using namespace std;
// Inheritance
class Bird
{
    double wt, ht;
    string color;

public:
    // void fly(string birdType)            //Not good approach
    // {
    //     if(birdType=="eagle")
    //     {
    //         cout<<"I am an eagle and I am flying high\n";
    //     }
    //     else if(birdType=="hen")
    //     {
    //         cout<<"I am a hen and I am flying\n";
    //     }
    //     else
    //     {
    //         cout<<"Please update fly method\n";
    //     }
    // }
};
class Spaceship
{
    string callSign;
    int shieldStrength;

public:
    Spaceship()
    {
        cout << "Spaceship is created\n";
        callSign = "The nameless ship";
        shieldStrength = 100;
    }
    void fireMissile()
    {
        cout << "Firing a normal missile\n";
    }
    void reduceShield(int amount)
    {
        shieldStrength = max(0, shieldStrength - amount);
    }
    int getShieldStrength()
    {
        return shieldStrength;
    }
    void Display()
    {
        cout<<"Name of ship: "<<callSign<<"\n";
        cout<<"Shield Strength: "<<shieldStrength<<"\n";
    }
};
class Firefighter:public Spaceship{
    int fireStrength;
public:
    Firefighter()
    {
        cout<<"Firefighter is created\n";
        fireStrength=getShieldStrength()*2;
        cout<<"Fire Strength is : "<<fireStrength<<"\n";
    }
    //override the base class's functionality
    void fireMissile()
    {
        cout<<"Firefighter is firing a normal missile\n";
    }
    // void print()
    // {
    //     cout<<"Name : "<<callSign<<" ShieldStrength: "<<shieldStrength<<" FireStrength: "<<fireStrength<<"\n";
    // }
};
int main()
{

    // Bird hen;
    // Bird eagle;
    // Bird can have some unique way of flying.
    // In order to replicate different fly methods what can we do.

    // Using different fly methods =>Using this approach we have to update our fly methods everytime we have to add new type of bird.
    // Now to overcome this problem and inorder to introduce code reusability we use the concept of "Inheritance".
    /**
     *                  Bird
     *                 /    \
     *               Hen   Eagle
     *
     * Now there will be a parent bird class and every type of bird will inherit from this bird class and can add other methods also.
     * We are reusing data as of now but not methods as both hen and eagle can have different fly methods.
     * Let's say there is some method that is common to both of them then we can use them too.
     *
     *
     * When generally we need Inheritance?
     * Whenever there are two or more classes that have similar data or methods then we can create a hierarchy or bigger class and the rest classes can inherit from it.
     * When there is shared attributes or methods then we can use inheritance.
     *
     *
     * Example:
     *                  Person           //Base Class
     *                  /    \
     *           Employee   Customer    //Derived Class
     *
     *
     * Instead of copying methods we can directly inherit from Base class and can create some extra methods that are not part of the Base class.
     *
     */


    // Spaceship ship;
    // ship.Display();

    /**
     * When we crate an object of the derived class
     * Then the data for derived class need to be connected with memory
     * but before that 
     * we are inheriting some attributes /methods from the base class
     * 
     * 
     * 1.Why do we need to call base constructor?
     * those base class methods might use some of the base class's attributes
     * so we need to initialize them for sure
     * 
     * we for sure need to call the base class's constructor.
     * 2.What is the order of constructor calls?
     * Before the derived class comes to existence we need to make sure that we initialize the data properly for its base class.
     * 
     */
    Firefighter myFireFighter;
    myFireFighter.Display();


}
