#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;



    public:
    Rectangle(){            //default constructor
        length=1;
        breadth=1;
    }
    Rectangle(int l,int b)  //constructor :: name same as class name
    {
        length=l;
        breadth=b;
    }

    int area();

    void increaseLenght(int newLength)
    {
        length=newLength;
    }

};

int Rectangle::area(){              //important

    return length*breadth;
}

int main()
{
    Rectangle r1(10,5),r2;
    cout<<"R1:"<<r1.area()<<endl;
    cout<<"R2:"<<r2.area()<<endl;
    r1.increaseLenght(50);

    cout<<"R1:"<<r1.area()<<endl;



    return 0;
}
