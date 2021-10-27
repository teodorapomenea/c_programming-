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


float getPerimeter();
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


float Circle::getPerimeter()
{
float peri;
peri=2*M_PI*radius;
return peri;
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
cout<<setprecision(3)<<fixed;
for(i=1;i<=N;i++)
cout <<c[i].getPerimeter()<<endl;
float max;
int k=1;
max=c[1].getPerimeter();
for(i=2;i<=N;i++)
if(max<c[i].getPerimeter())
{
	max=c[i].getPerimeter();
	k=i;
}

cout<<max<<" "<<k;
return 0;
}









