#include<iostream>
using namespace std;

// class
class rectangle
{
    private:
        double length;
        double width;
    public:
        double setlength(double);
        double setwidth(double);
        double getlength() const;
        double getwidth() const;
        double getarea() const;
};

// now functioning the class
double rectangle:: setlength(double len)
{
    length=len;
}

double rectangle:: setwidth(double w)
{
    width=w;
}
double rectangle:: getlength() const
{
    return length;
}

double rectangle:: getwidth() const
{
    return width;
}

double rectangle:: getarea() const
{
    return length * width;
}

int main()
{
    // total rooms and total area
    double number;
    double total;

    // pointer with class
    rectangle *kitchen = nullptr;
    rectangle *room= nullptr;
    rectangle *din=nullptr;

    // dynamically allocate the objects
    kitchen = new rectangle;
    room=new rectangle;
    din=new rectangle;

    // Get kitchen dimensions
    cout<<"Enter the length of Kitchen: ";
    cin>>number;
    cout<<endl;
    kitchen->setlength(number);

    cout<<"Enter the width of Kitchen: ";
    cin>>number;
    cout<<endl;
    kitchen->setwidth(number);
    
    // Room Dimensions
    cout<<"Enter the length of Room: ";
    cin>>number;
    cout<<endl;
    room->setlength(number);

    cout<<"Enter the width of Room: ";
    cin>>number;
    cout<<endl;
    room->setwidth(number);

    // din dimensions
    cout<<"Enter the Length of Din: ";
    cin>>number;
    cout<<endl;
    din->setlength(number);

    cout<<"Enter the width of Din: ";
    cin>>number;
    cout<<endl;
    din->setwidth(number);

    total=kitchen->getarea() + room->getarea()+ din->getarea();

    cout<<"Total Area of House: "<<total<<endl;
    cout<<"Total Area of Kitchen: "<<kitchen->getarea()<<endl;
    cout<<"Total Area of BedRoom: "<<room->getarea()<<endl;
    cout<<"Total Area of Dining Hall: "<<din->getarea()<<endl;

    delete kitchen;
    delete room;
    delete din;
    kitchen = nullptr;
    room = nullptr;
    din=nullptr;
    return 0;
}