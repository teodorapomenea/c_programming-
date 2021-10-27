#include<iostream>

using namespace std;

class Car {
	
    string _brand;   
    string _model;
    string _transmission;
    string _fuel;
    int _year;
    int _km;
   
    public:
void SetBrand(string b);
string GetBrand();
void SetModel(string m); 
string GetModel(); 
void SetTransmission(string t);
string GetTransmission();
void SetFuel(string f);
string GetFuel();
void SetYear(int a);
int GetYear(); 
void SetKm(int k);
int GetKm();
void DontBuyIt();
Car();

};
void Car::SetBrand(string b)
{
   _brand=b;
}
void Car::SetModel(string m)
{
   _model=m;
}
void Car::SetTransmission(string t) 
{
    _transmission=t;
}
void Car::SetFuel(string f)
{
    _fuel=f;
}
void Car::SetYear(int y)
{
	_year=y;
}
void Car::SetKm(int k)
{
	_km=k;
}
string Car::GetBrand()
{
    return _brand;
}
string Car::GetModel() 
{
return _model;
}
    string Car::GetTransmission()
{
    return _transmission;
}
 string Car::GetFuel()
{
    return _fuel;
}
int Car::GetYear()
{
   return _year;
}
 string Car:: GetKm()
{
    return _km;
}
void Car::DontBuyIt()
{
	if (_km>300000) cout<<" \n Do Not Buy It \n";
	 else if (_year<2000) cout<<" \n Do Not Buy It \n";
}

Car::Car()
{   _brand="Renault";
    _model=" Captur";
    _transmission="automatic";
    _fuel="hybrid"
	_year=2020;
	_km=10000;
}

int main() {
  
  Car car1;
 
  cout << "Car 1 obtained by using implicti constructor is  " << car1.GetBrand() << " " << car1.GetModel() << " " << car1.GetTransmission()<<" "<<car1.GetFuel() << " " << car1.Year() <<"  "<<car1.GetKm()<< " km "<<car1.DontBuyIt();

  
  
  Car car2;
  car2.SetBrand("Audi");
  car2.SetModel("A4");
  car2.SetTransmission("manual");
  car2.SetFuel("diesel");
  car2.SetYear(1998);
  car2.SetKm("300000");

  
 
  cout << "Car 2 obtained by using setters is  " << car2.GetBrand() << " " << car2.GetModel() << " " <<car2.GetTransmission() << " " << car2.GetFuel() << " " << car2.GetYear() << " " << car2.GetKm() << " km "<<car2.DontBuyIt();
  

  string brand, model , transmission, fuel;
  int year, km;
  Car car3;
  cout << " The brand of the car :" ;
  cin >> brand;
  cout << "The model of the car :";
  cin >> model;
  cout << " The transmission of the car : ";
  cin >>  transmission;
  cout << "Fuel :" ;
  cin >> fuel;
  cout << "The year of the car :" ;
  cin >> year;
  cout << "The number of km :" ;
  cin >> km;
  
  
  car3.SetBrand(brand);
  car3.SetModel(model);
  car3.SetTransmission(transmission);
  car3.SetFuel(fuel);
  car3.SetYear(year);
  car3.SetKm(km);
  cout << "Car 3 entered by keyboard is  " << car3.GetBrand() << " " << car3.GetModel() << " " <<car3.GetTransmission() << " " << car3.GetFuel() << " " << car3.GetYear() << " " << car3.GetKm() << " km "<<car3.DontBuyIt();
  
  
}
