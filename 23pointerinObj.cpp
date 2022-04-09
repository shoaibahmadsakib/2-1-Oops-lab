// A simple example using an object pointer.
#include <iostream>
using namespace std;
class My_Class
{
    int num;
public:
    void setNum(int val)
    {
        num = val;
    }
    void getNum(){

    cout<<num<<endl;
    };
};

int main()
{
    My_Class ob1, *p;
    p = &ob1;
    p->setNum(200);
    p->getNum();
    My_Class obj2, *q;
    q = &obj2;
    q->setNum(111);
    q->getNum();

}
