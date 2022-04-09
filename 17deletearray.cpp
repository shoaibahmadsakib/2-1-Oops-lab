#include<iostream>
using namespace std;

int main()
{

        int arr[50], size, i, del, count=0;

        cout<<"Enter array size : ";
        cin>>size;


        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr Element :: ";
                cin>>arr[i];
        }

        cout<<"\nEnter element to be delete :: ";
        cin>>del;

        for(i=0; i<size; i++)
        {
                if(arr[i]==del)
                {
                        for(int j=i; j<(size-1); j++)
                        {
                                arr[j]=arr[j+1];
                        }
                        count++;
                        break;
                }
        }

                cout<<"Now the new array is:\n";
                for(i=0; i<(size-1); i++)
                {
                        cout<<arr[i]<<" ";
                }

    cout<<"\n";

        return 0;
}
