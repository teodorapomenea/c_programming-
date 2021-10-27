#include <iostream>
#include <string> //even if your C++ compiler includes string via iostream other environments don't
#include <math.h> //for pow()
#include <iomanip> //for setprecision and fixed

using namespace std; 

#define VERBOSE_PROGRAM 

class Circle
{
float radius;
string color; 
public: 
void SetR(float dim);
void SetColor(string clr);
float GetR();
string GetColor();

Circle();

Circle(float dim, string clr);

Circle(const Circle &c);

~Circle();

friend float Perimeter(Circle *C);

float Area();
};


void Circle::SetR(float dim)
{
radius=dim;
}


void Circle::SetColor(string clr)
{
color=clr;
}

float Circle::GetR()
{
return radius;
}


string Circle::GetColor()
{
return color;
}


Circle::Circle()
{
radius=10;
color="green";

}


Circle::Circle(float dim, string clr)
{
radius=dim;
color=clr; 
	
}

Circle::Circle(const Circle &c)
{ 
radius=c.radius;
color=c.color;

}
Circle::~Circle()
{

}


float Perimeter(Circle *C)
{//perimeter computation
float perimeter;
perimeter=2*M_PI* C->radius;
//side is private, but friend function also has access to PROTECTED and PRIVATE elements
return perimeter;
}


float Circle::Area()
{//compute area
float area;
area=M_PI*pow(radius,2); 
return area;
}



class Cone : Circle
{
float height;
public:
void SetHeight(float dim) 
{
height=dim;//dim is local variable in function, can be reused
}
float GetHeight() //getter
{
return height;
}
float Volume() //non-standard method
{
float volume;
//method Volume has access to Area() because public-public
//inheritance allows it
volume=Area()*height/3;
return volume;
}
};//derived class as any class ends with "};"

int main()
{ Circle ci1;
float _radius; string _color; float _height;


cin >> _radius >> _color; 
ci1.SetR(_radius); ci1.SetColor(_color); //set attributes for object



Cone c2;

cin >> _height; c2.SetHeight(_height);        	
c2.SetR(ci1.GetR());
c2.SetColor(ci1.GetColor());
cout <<setprecision(2) <<fixed;
cout <<Perimeter(&ci1)<<endl ;
cout <<ci1.Area() <<endl;
cout <<c2.Volume()<<endl;
}

