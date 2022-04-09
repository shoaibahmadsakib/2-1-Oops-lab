//insert any number in an array

#include<iostream>
using namespace std;
class myNum
{
public:
    int arr[20], i, elem,num,n;

};
int main()
{

    myNum obj;
    obj.arr;
    obj.i;
    obj.num;

    cout<<"enter number of array :";
    cin>>obj.num;
    cout<<"enter the element\n";
    for(obj.i=1; obj.i<=5; obj.i++)
        cin>>obj.arr[obj.i];

    cout<<"new array\n";

    for(obj.i=1; obj.i<=5; obj.i++)
        cout<<obj.arr[obj.i]<<"\n";
    cout<<endl;
    return 0;
}


