#include <iostream>
#include <string> //even if your C++ compiler includes string via iostream other environments don't
#include <math.h> //for pow()
#include <iomanip> //for setprecision and fixed

using namespace std; 

class Segment
{
float x1;
float y1;
float x2;
float y2;
public: 
void SetX1(float a);
float GetX1();
void SetY1(float b);
float GetY1();
void SetX2(float c);
float GetX2();
void SetY2(float d);
float GetY2();
float computeLength();
};


void Segment::SetX1(float a)
{
x1=a;
}


float Segment::GetX1()
{
return x1;
}

void Segment::SetY1(float b)
{
y1=b;
}


float Segment::GetY1()
{
return y1;
}

void Segment::SetX2(float c)
{
x2=c;
}


float Segment::GetX2()
{
return x2;
}

void Segment::SetY2(float d)
{
y2=d;
}


float Segment::GetY2()
{
return y2;
}


float Segment::computeLength()
{
float l,s1,s2;
s1=x1-x2;
s2=y1-y2;
l=sqrt(pow(s1,2)+pow(s2,2)); 
return l;
}


int main()
{ int N; 
cin>>N;
if ((N<3)||(N>10))
{
cout<<"Bad value";
return 0;
}
float _x1; float _y1; float _x2; float _y2; 
Segment s[N];
int i;
for (i=1;i<=N;i++)
{
cin >> _x1; cin >> _y1; cin >> _x2; cin >> _y2;
s[i].SetX1(_x1);s[i].SetY1(_y1); s[i].SetX2(_x2); s[i].SetY2(_y2);  
}
float P=0;
for(i=1;i<=N;i++)
P= P+ s[i].computeLength();
cout<<P;
return 0;
}









