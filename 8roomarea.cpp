#include<iostream>
using namespace std;
class Room{
  public:
      double length;
      double width;
      double height;
      double Compute(double length,double width){
          return length*width;
      }
      double Compute(double length,double width,double height){
          return length*width*height;
      }
      void SetLength(double length_){
           length = length_;
      }
      void SetHeight(double height_){
           height = height_;
      }
      void SetWidth(double width_){
           width = width_;
      }
};
int main(){
    Room r1;

    cout<<r1.Compute(10,8)<<"\n";
    cout<<r1.Compute(10,8,6)<<"\n";
    return 0;
}

