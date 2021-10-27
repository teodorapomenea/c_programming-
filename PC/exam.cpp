#include <iostream>
#include <iomanip>
using namespace std;

class CPU
{protected:
 float Power;
 public:
 void SetP(float p) {Power=p;}
 float GetP() {return Power;}
 CPU();
 CPU(const CPU&);
 CPU(float p)
 {Power=p;}
 void ScaleUp();
};

CPU::CPU(const CPU&c)
 {Power=c.Power;}
CPU::CPU()
{Power=0;}

void CPU::ScaleUp()
{ float x;
  x=Power;
  Power=x*1.2;
}

class SoC : public CPU
{
    float Price;
    public:
     float GetPr() {return Price;}
    SoC(float a, float b)
    {
        Power=a;
        Price=b;
    }
    void Discount()
    {
        float y;
       y=Price;
       Price=y*0.7;
    }
    friend float TCO(SoC *s);
};
 float TCO(SoC *s)
{
    float TCO;
    TCO=s->Price+ 360*s->Power;
    return TCO;
}
int main()
{
 CPU ARM;
 float a;
 cin>>a;
 if(a>50|| a<0)
 { cout<<"Wrong value";
       return 0;}
 ARM.SetP(a);
 cout<<setprecision(3)<<fixed;
 cout<<ARM.GetP();
 CPU Cortex_A77=ARM;
 Cortex_A77.ScaleUp();
  cout<<setprecision(3)<<fixed;
 cout<<Cortex_A77.GetP();
 float t;
 float u;
 cin>>t>>u;
  if(t>50|| t<0)
 { cout<<"Wrong value";
       return 0;}

 if(u>5.99|| u<0)
 { cout<<"Wrong value";
       return 0;}
       SoC Snapdragon(t,u);
       Snapdragon.Discount();
        cout<<setprecision(3)<<fixed;
 cout<<Snapdragon.GetPr()<<" "<<TCO(&Snapdragon);
 return 0;
 }
 
