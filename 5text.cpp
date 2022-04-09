#include<iostream>
#include<fstream>
using namespace std;

int main(){

 string a,b,c;
 ifstream sakib("inputt.txt");
 getline(sakib,a);
 getline(sakib,b);
 getline(sakib,c);

 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c<<endl;

}
