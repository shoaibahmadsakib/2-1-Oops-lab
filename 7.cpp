#include<bits/stdc++.h>
using namespace std;
class Rectangle{
public:
    double width,length;
    double ComputeAreaSquare(double length){
        return length*length;
    }
    double ComputeArea(double width, double length){
        return width*length;
    }

};
int main(){
    Rectangle r1;

    cout<<r1.ComputeArea(3,5)<<"\n";
    cout<<r1.ComputeAreaSquare(5)<<"\n";
    return 0;
}
