#include <iostream>
#include <string.h>
using namespace std;
class Vietate
{
	protected:
		int NrPicioare;
		string Culoare;
		public:
			void GetterVietate();
			Vietate();
			Vietate(const Vietate &c);
			void Naparleste(string schimba)
			{
				Culoare=schimba;
			}
			Vietate(int p,string c)
			{
				NrPicioare=p;
				Culoare=c;
			}
			void scoatesunet(int k){
				if(k==2) cout<<"Cip-ci-rip"<<endl;
				else cout<<"Nihao"<<endl;
				
			}
			virtual void surub(){
				cout<<"Zuzu nu mi-a adus suruburi"<<endl;
			}
			
};
void Vietate::GetterVietate()
{
	cout<< NrPicioare<<endl;
	cout<< Culoare<<endl;
}
Vietate::Vietate()
{
	NrPicioare=0;             //Construnctor implicit
	Culoare="Negru";
}
Vietate::Vietate(const Vietate &c)
{
	NrPicioare=c.NrPicioare;  //Constructor copiator
	Culoare=c.Culoare;
}
class Pisica : public Vietate
{
	float greutate;
	     public:
	       void GetterPisica()
	   {
	   	cout<< greutate <<endl;
	   	cout<<NrPicioare<<endl;
	   	cout<<Culoare<<endl;
	   }
	   Pisica(float g,int p,string c) : Vietate(p,c)
	   {
	   	greutate=g;
	   }
	   void Mananca(int n)
	      {
	      	greutate=greutate+n;
		  }
		  void scoatesunet()
		  {
		  	cout<<"Miau!"<<endl;
		  }
		  void surub()
		  {
		  	cout<<"Chipsuri"<<endl;
		  }
};
int main()
{
	Vietate v1;
	Vietate v2;
	v2=v1;
	Pisica p1(3,4,"maro");
	p1.Naparleste("galben");
	p1.GetterPisica();
	p1.scoatesunet();
	v1.scoatesunet(2);
	p1.surub();
	v1.surub();
	Vietate *f;
	f=&v1;
	f->surub();
	f=&p1;
	f->surub();
}
