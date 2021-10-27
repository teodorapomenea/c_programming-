#include <iostream>
#include <iomanip>
using namespace std;
int rad;
//float pi= 3.1415;
class Circle {
	int radius;
	public:
		  void SetRadius(int r);
		  int GetRadius();
		  
		  float GetPerimeter();
};

void Circle::SetRadius(int r){
     radius=r;
}

int Circle::GetRadius(){
	return radius;
}

float Circle::GetPerimeter(){
	float perimeter=0, rad,pi=3.1415;
	perimeter=2*pi*radius;
	return perimeter;
}

int main(){
	int N,index;
	float  max=0;
	//float pi= 3.1415; 
	cin>>N;
	if (N<2 || N>10){
		cout<<"Bad Value";
	   return 0; 
}

    cout<<setprecision(3)<<fixed;
	for (int i=1;i<=N;i++){
		cin>>rad;
		Circle p;
		p.SetRadius(rad);
		cout<<p.GetPerimeter()<<endl;
		if (p.GetPerimeter()>max){
			max=p.GetPerimeter();
			index=i;
		}
		
	} 
	cout<<max<<" "<<index;
}
