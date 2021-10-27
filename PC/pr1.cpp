#include <iostream>
#include <string> 
#include <iomanip> //for setprecision and fixed

using namespace std; 


class Product
{
string Name;
float Price;
float Weight; 
public: 
void SetN(string n);
void SetP(float p);
void SetW(float w);
string GetN();
float GetP();
float GetW();

Product();

Product(string n, float p, float w );


};


void Product::SetN(string n)
{
   Name=n;
}


void Product::SetP(float p)
{
   Price=p;
}

void Product::SetW(float w)
{
   Weight=w;
}

string Product::GetN()
{
return Name;
}


float Product::GetP()
{
return Price;
}

float Product::GetW()
{
return Weight;
}

Product::Product()
{
Name="name";
Price=1;
Weight=1;
}


Product::Product(string n, float p, float w)
{
Name=n;
Price=p;
Weight=w; 
	
}


int main()
{ Product p1;
string _name; float _price; float _weight;


cin >> _name >> _price >> _weight; 
p1.SetN(_name); p1.SetP(_price); p1.SetW(_weight);



Product p2;
cin >> _name >> _price >> _weight; 
p2.SetN(_name); p2.SetP(_price); p2.SetW(_weight);


float counter;
counter= p1.GetP()*p1.GetW() + p2.GetP()*p2.GetW();

cout <<setprecision(3) <<fixed;
cout<<"Counter price: "<<counter<<endl;

p2.SetP(9.99);
p1.SetW(1.0);
counter= p1.GetP()*p1.GetW() + p2.GetP()*p2.GetW();

cout <<setprecision(3) <<fixed;
cout<<"Counter price: "<<counter;
return 0;
}

