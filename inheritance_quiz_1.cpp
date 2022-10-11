#include <iostream>
using namespace std;
/**
 * Multi level inheritance
 *
 */
class A
{
public:
    void print()
    {
        cout << "Inside A\n";
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "Inside A\n";
    }
};
class C : public B
{
public:
    void print()
    {
        cout << "Inside A\n";
    }
};
int main()
{
    C c;
    c.print();
    return 0;
}