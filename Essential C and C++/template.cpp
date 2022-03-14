#include<iostream>
using namespace std;

template <class T>
class Rectangle{
    private:
    T length;
    T breadth;



    public:
    Rectangle(T l,T b)
    {
        length=l;
        breadth=b;
    }

    T area();

    void increaseLenght(T newLength)
    {
        length=newLength;
    }

};
template <class T>
T Rectangle <T> ::area(){              //important

    return length*breadth;
}

int main()
{
    Rectangle<float> r1(1.0,5.2);
    cout<<"Area 1st:"<<r1.area()<<endl;
    r1.increaseLenght(5.4);

    cout<<"Area 2nd:"<<r1.area()<<endl;



    return 0;
}
