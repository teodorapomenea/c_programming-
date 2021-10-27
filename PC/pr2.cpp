#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

class Car
{
    string Name;
    float Mileage;
    float Tank;
    public:
    void SetN(string n);
    void SetM(float m);
    void SetT(float t);
    string GetN();
    float GetM();
    float GetT();
    Car();
    Car(string n, float m, float t);
};
     void Car::SetN(string n)
     {
         Name=n;
     }
      void Car::SetM(float m)
     {
         Mileage=m;
     }
      void Car::SetT(float t)
     {
        Tank=t;
     }
     string Car::GetN()
     {
         return Name;
     }
      float  Car::GetM()
     {
         return Mileage;
     }
     
     float  Car::GetT()
     {
         return Tank;
     }
     Car::Car()
     {
         Name="name";
         Mileage=1;
         Tank=1;
     }
       Car::Car(string n, float m, float t)
     {
         Name=n;
         Mileage=m;
         Tank=t;
     }
     
     int main()
     {
         Car c1;
         string _name; float _mileage; float _tank;
         cin>> _name>> _mileage>> _tank;
         c1.SetN(_name); c1.SetM(_mileage); c1.SetT(_tank);
         Car c2;
         cin>> _name>> _mileage>> _tank;
         c2.SetN(_name); c2.SetM(_mileage); c2.SetT(_tank);
         float km;
         km=c1.GetT()*100/c1.GetM() + c2.GetT()*100/c2.GetM();
         cout<<setprecision(3)<<fixed;
         cout<<"Km until out of gas: "<<km<<endl;
         c2.SetM(5);
         c1.SetT(100);
         km=c1.GetT()*100/c1.GetM() + c2.GetT()*100/c2.GetM();
         cout<<setprecision(3)<<fixed;
         cout<<"Km until out of gas: "<<km;
         return 0;
     }
     
     
     
