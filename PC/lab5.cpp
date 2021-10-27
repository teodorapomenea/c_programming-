#include <iostream>
using namespace std;

class A
{//create class BASE
    int x;//private attribute
    public://the following are public
    void initX(int n)//Setter for x
    {
        x=n;
    }
    void printX()//non-standard method to display x
    {
        cout<<x<<endl;
    }
};//always close class with };

class B:private A
{//create a derivate class
    int y;//private member
    public://the following are public
    void initXY(int n, int m)//setter for y, and x after calling initX
    {
        initX(n);//x=n;
        y=m;
    }
    void printXY()//non-standard method to display y& x after calling printX
    {
        printX();
        cout<<y<<endl;
    }
};

class C:private B
{//create a derivate class
    int z;//private member
    public://the following are public
    void initXYZ(int n, int m, int k)//setter for y, and x after calling initX
    {
        initXY(n,m);//x=n;
        z=k;
    }
    void printXYZ()//non-standard method to display y& x after calling printX
    {
        printXY();
        cout<<z<<endl;
    }
};
int main()
{
    C d1;
    d1.initXYZ(10, 20,30);
    d1.printXYZ();
}

