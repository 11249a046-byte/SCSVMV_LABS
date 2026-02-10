#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;

public:
rectangle()
    {
        cout<<"enter length,breadth :";
        cin>>length>>breadth;
    }
    inline int area()
    {
        return length*breadth;
    }
};
int main()
{
    rectangle r;
    cout<<"area of rectangle :"<<r.area();
    return 0;
}
