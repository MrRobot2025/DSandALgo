#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}R4;
struct Rectangle R3;

int main()
{
    struct Rectangle R1 ,R2 = {10,5};
    R1.length = 10;
    R1.breadth = 5;
    struct Rectangle Rarray[5] = {{10,5},{20,10},{30,15},{40,20},{50,25}}; //array of structs
    
    return 0;
}