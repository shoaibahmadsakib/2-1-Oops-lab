#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    double mark;
    void getdata()
    {
        cout<<"Students Roll : "<<"\n";
        cin>>roll;
        cout<<"Students name : "<<"\n";
        cin>>name;
        cout<<"mark"<<"\n";
        cin>>mark;

    }
    void putdata()
    {
        cout<<"The Students roll number : "<<roll<<"\n";;
        cout<<"The students name : "<<name<<"\n";
        cout<<"mark:"<<mark<<"\n";

    }
};
class marks : public Student
{
public:

    int totalMark;
    void input()
    {

        getdata();
        putdata();


    }

    void calculate()
    {
        totalMark = mark;
//        totalMark = (arr[0]+arr[1]+arr[2])/3;
//        cout<<"Total mark : "<<totalMark<<"\n";
        if(totalMark>=80)
        {
            cout<<"GRADE : A+"<<"\n";
        }
        else if(totalMark>75 && totalMark<80)
        {
            cout<<"GRADE : A"<<"\n";
        }
        else
        {
            cout<<"GRADE : FAIL"<<"\n";
        }
    }

//    int per;
//    int arr[3];
//    void input()
//    {
//        getdata();
//        cout<<"Enter All subjects Marks: ";
//        for(int i=0; i<3; i++)
//        {
//            cin>>arr[i];
//        }
//    }
//    void output()
//    {
//        putdata();
//        cout<<"All Subjects Marks: ";
//        for(int i=0; i<3; i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<"\n";
//    }


};
int main()
{
    marks m1;

    m1.input();


    m1.calculate();
    return 0;
}

