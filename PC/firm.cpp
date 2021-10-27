#include <iostream>
using namespace std;
class Firm
{
 string Name;
 float Revenue;
public:
 void SetName(string n);
 void SetRevenue(float r);
 string GetName();
 float GetRevenue();
 Firm();
 Firm(float re);
 Firm(string name, float rev);
 ~Firm() {} 
};
void Firm::SetName(string n){
 Name=n;
}
void Firm::SetRevenue(float r){
 Revenue=r;
}
string Firm::GetName(){
 return Name;
}
float Firm::GetRevenue(){
 return Revenue;
}
Firm::Firm()
{
 Name="SC ACME SRL";
 Revenue=100;
}
Firm::Firm(string name, float rev)
{
 Name=name;
 Revenue=rev;
}
Firm::Firm(float re)
{
 Revenue=re;
}
int main()
{
cout << "create firm1" << endl;
 Firm firm1;
cout << "create firm2" << endl;
 Firm firm2(51200.0);
 cout << "create firm3" << endl;
 Firm firm3("SC ELearning SRL", -471.56);
cout << "at the end " << endl;
 return 0;
}

