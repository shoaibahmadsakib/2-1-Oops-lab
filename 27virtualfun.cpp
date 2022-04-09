#include<iostream>
using namespace std;
class first
{

public:
    virtual void sakib() = 0; // Pure Virtual Function
};

class second:public first
{

public:
    void sakib()
    {
        cout << "Virtual Function in Derived class\n";
    }
};

int main()
{
    second obj;
    obj.sakib();
    return 0;

}
