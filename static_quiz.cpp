#include <iostream>
using namespace std;
class Test
{
    static int x;

public:
    Test()
    {
        x++;                    //Common interview question to count the total number of objects created.
    }
    static int getX()
    {
        return x;
    }
};
int Test::x = 0;
int main()
{

    cout << Test::getX() << " ";
    Test t[5];          //Since we are creating 5 objects static variable gets increases to 5.
    cout << Test::getX() << "\n";


    //Desired Output:
    //0 5
}