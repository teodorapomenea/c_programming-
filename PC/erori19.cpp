#include <iostream>

using namespace std;

class Baza
{
	int x;
public:
	void initX(int n) { x = n; }	// setter (mutator)
	void afiseazaX()  {cout<<"Variabila x (afisata din parinte):"<<x<<endl;}
};

class Derivata : private Baza		// aten?ie la tipul de mo?tenire!
{
	int y;
 public:
	// setter (mutator); am acces la metoda initX() din clasa p?rinte
	void initXY(int n, int m) { initX(n); y = m;};

	// getter (accesor)
void afiseazaY()
{ 
	cout<< "Variabila y (din copil):" << y << endl;
    //cout<< "Variabila x (din parinte):"<< x << endl;
    afiseazaX();
};

	void afiseazaXY() 
	{
		cout << "Variabila x (afisata din copil): "; 
		afiseazaX();	// OK din interiorul clasei
		cout << " si variabila y (din copil): " << y << endl; 
	}
};


int main()
{
Derivata objD;	// vlad: C++ ofera constructor implicit

//ojD.initX(10);
//objD.afiseazaX();

objD.initXY(20, 30); // vlad: clasa copil are acces la propriile metode
objD.afiseazaXY();   // vlad: observ ca am reusit accesul la 
// variabila privata a parintelui DAR nu din exterior

return 0;
}

