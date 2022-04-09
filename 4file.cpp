#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s = "Name : sakib";
    string s1 = "Roll : 190606";
    fstream out("output.txt");
    out<<s<<"\n";
    out<<s1<<"\n";
    return 0;
}
