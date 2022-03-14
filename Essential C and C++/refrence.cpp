#include<iostream>
using namespace std;
int main()

{
    int a = 10; //data variable
    int &r = a; //reference variable

    cout<<"a = "<<a<<endl;
    cout<<"r = "<<r<<endl;
    r++;
    a++;
    cout<<"a = "<<a<<endl;
    cout<<"r = "<<r<<endl;
    return 0;
}