#include<iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout<<"i am a persion";
    }
};

class student: public person
{
public:
    void display()
    {
        cout<<"\n i am a student";
    }

};
class teacher: public person
{
public:
    void display()
    {
        cout<<"\n i am a teacher";
    }

};

int main()
{
    person obj;
    obj.display();

    student obj2;
    obj2.display();

    teacher obj3;
    obj3.display();
}

