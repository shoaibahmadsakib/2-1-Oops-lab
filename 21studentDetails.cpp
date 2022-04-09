#include <iostream>
using namespace std;
class student
{

private:
    char  name[30];
    int   rollNo;
    int   total,sub1,sub2,sub3;
    float perc;
public:
//member function to input student's details from user
    void getdata()
    {
        cout << "Enter name: " ;
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter total 3 subject mark: ";
        cin >> sub1>>sub2>>sub3;

        total = sub1 + sub2 +sub3;
        perc=(float)total/3;

    }
//member function to display student's details
    void putdata()
    {
        cout << "Student details:";
        cout<<endl;
        cout << "Name of student :"<< name;
        cout<<endl;
        cout<< "Roll Number of student :" << rollNo;
        cout<<endl;
        cout<< "Total marks of student :" << total;
        cout<<endl;
        cout<< "average :" << perc;



        if(total>260)
        {
            cout<<"A+";

        }
        else
            cout<<"fail";

    }
};
int main()
{
//object declaration of class student
    student obj;
    obj.getdata();
    obj.putdata();
    return 0;
}

