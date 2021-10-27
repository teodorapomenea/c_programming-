#include <iostream>

using namespace std; 

class Rectangle
{
float length;
float width;
public: 
void SetL(float l);
float GetL();
void SetW(float w);
float GetW();
Rectangle();
Rectangle(float l, float w);
float getPerimeter();
};


void Rectangle::SetL(float l)
{
length=l;
}

void Rectangle::SetW(float w)
{
width=w;
}

float Rectangle::GetL()
{
return length;
}

float Rectangle::GetW()
{
return width;
}


Rectangle::Rectangle()
{
length=1;
width=1;
}


Rectangle::Rectangle(float l, float w)
{
length=l;
width=w;
}



float Rectangle::getPerimeter()
{
float peri;
peri=2*(length+width);
return peri;
}


int main()
{ int n; 
cin>>n;
if ((n<2)||(n>10))
{
cout<<"Bad value";
return 0;
}
float _length; float _width; 
Rectangle r[n];
int i;
for (i=1;i<=n;i++)
{
cin >> _length>>_width;
r[i].SetL(_length); 
r[i].SetW(_width); 
}
for(i=1;i<=n;i++)
cout <<r[i].getPerimeter()<<endl;
float min;
int k=1;
min=r[1].getPerimeter();
for(i=2;i<=n;i++)
if(min>r[i].getPerimeter())
{
	min=r[i].getPerimeter();
	k=i;
}

cout<<min<<" "<<k;
return 0;
}









