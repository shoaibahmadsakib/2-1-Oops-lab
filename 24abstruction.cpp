#include<iostream>
using namespace std;

class moblieUser
{

public:
    virtual void sendMessage()=0;
};

class Rahim: public moblieUser{

void sendMessage()
    {
        cout<<"this is rahim message"<<endl;
    }

};




class Karim: public moblieUser{

 void sendMessage()
    {
        cout<<"this is karim message";
    }
};





int main()
{
    moblieUser *myObj;
    Rahim obj1;
    Karim obj2;

    myObj =&obj1;


    myObj->sendMessage();
    myObj = &obj2;
    myObj->sendMessage();




}
