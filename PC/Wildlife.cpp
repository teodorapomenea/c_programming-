#include<iostream>

using namespace std;

class Wildlife
{ 
	
		string _species; 
		string _name;
		int _nr; 
	
	public:
		
		void SetSpecies(string a); 
		string GetSpecies();
	    void SetName(string b);
		string GetName();  	
		void SetNr(int c);
		int GetNr(); 
		void Warning();
		Wildlife(); 
		Wildlife(string s, int n);
		
};

void Wildlife::SetSpecies(string a) 
{
_species=a;
}
string Wildlife::GetSpecies() 
{
return _species;
}
void Wildlife::SetName(string b) 
{
_name=b;
}
string Wildlife::GetName()
{
return _name;
}
void Wildlife::SetNr(int c) 
{
_nr=c;
}
int Wildlife::GetNr() 
{
return _nr;
}
void Wildlife::Warning() 
{ if(_nr<5000) cout<<"\n Endangered Species \n ";
}
Wildlife::Wildlife()
{
_species="Sumatran";
_name="Tiger";
_nr = 3500 ; 

}
Wildlife::Wildlife(string s, int n)
{
	_species=s;
	_nr=n;
}
int main()
{

	Wildlife w1; 

	w1.SetSpecies("Walia");
	w1.SetName("Ibex");
	w1.SetNr(200);

cout <<"Wildlife object obtained by using setters is: " << w1.GetSpecies()<< "  " << w1.GetName()<<" \nThe nr of  animals in the species : "<<w1.GetNr()<< "\n";
w1.Warning();

Wildlife w2;
cout <<"\nWildlife object obtained by using implicit constructor is: "<< w2.GetSpecies()<< "  " << w2.GetName()<<"\nThe nr of animals in the species:  "<< w2.GetNr()<< "\n";
w2.Warning();

string species , name;
	int nr;
	Wildlife w3;
	cout << "\nThe species of the animal : " ;
	cin >> species;
	cout << "The name of the animal : ";
	cin >> name;
	cout << "The number of anlimals existing in the given species : ";
	cin >> nr;
	w3.SetSpecies(species);
	w3.SetName(name);
	w3.SetNr(nr);

cout <<"\nWildlife attributes entered by keyboar are: "<< w3.GetSpecies()<< "  " << w3.GetName()<<"\nThe nr of  animals in the species : "<<w3.GetNr()<< "\n";
w3.Warning();

Wildlife w4("Dove",100000);
cout <<"\n Wildlife object obtained by using a constructor with 2 parameters is: " << w4.GetSpecies()<<" \nThe nr of animals in the species:  "<< w4.GetNr()<< "\n";

return 0;
}
