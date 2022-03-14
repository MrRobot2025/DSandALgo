#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}R1;
int main()
{
    // struct Rectangle R1={10,15};
    // struct Rectangle *p=&R1; //pointer to structure
    // R1.breadth=20;


    // (*p).length=20; //accessing structure using pointer
    // (*p).breadth=25;

    // p->length=30; //accessing structure using pointer
    // p->breadth=35;

    //dynamic memory allocation 
    struct Rectangle *p,*q;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    q= new Rectangle;  //cppcode
    p->length=10;
    cout<<p->length<<endl; 
    return 0;
}