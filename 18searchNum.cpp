#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[50], size, search,i;
    bool found;
    int pos;
    cout<<"Enter array size : ";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cout<<"\nEnter arr Element :";
        cin>>arr[i];
    }
    cout<<"\n enter a search number:";
    cin>>search;
    for(i=0; i<size; i++)
    {
        if(search == arr[i])
        {
            found =true;
            pos = i;
            cout<<"\n present and position is:"<<pos;
            break;

        }
        else
        {
            found =false;


        }

    }
    if(found == false)
    {
        cout<<"not found";
    }


}

