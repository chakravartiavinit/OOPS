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
int main()
{

        Bird hen;
        Bird eagle;
        //Bird can have some unique way of flying.
        //In order to replicate different fly methods what can we do.

        //Using different fly methods =>Using this approach we have to update our fly methods everytime we have to add new type of bird.
        //Now to overcome this problem and inorder to introduce code reusability we use the concept of "Inheritance".
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
         */

        
                        

}
