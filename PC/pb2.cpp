#include <iostream>
#include <string> //even if your C++ compiler includes string via iostream other environments don't
#include <math.h> //for pow()
#include <iomanip> //for setprecision and fixed

using namespace std; 

class Circle
{
float radius;

public: 
void SetR(float dim);
float GetR();


Circle();

Circle(float dim);


float getArea();
};


void Circle::SetR(float dim)
{
radius=dim;
}


float Circle::GetR()
{
return radius;
}



Circle::Circle()
{
radius=1;

}


Circle::Circle(float dim)
{
radius=dim;

}

float Circle::getArea()
{
float area;
area=M_PI*pow(radius,2); 
return area;
}


int main()
{ int N; 
cin>>N;
if ((N<2)||(N>10))
{
cout<<"Bad value";
return 0;
}
float _radius; 
Circle c[N];
int i;
for (i=1;i<=N;i++)
{
cin >> _radius;
c[i].SetR(_radius); 
}
for(i=1;i<=N;i++)
cout <<c[i].getArea()<<endl;
float max;
int k=1;
max=c[1].getArea();
for(i=2;i<=N;i++)
if(max<c[i].getArea())
{
	max=c[i].getArea();
	k=i;
}

cout<<max<<" "<<k;
return 0;
}









