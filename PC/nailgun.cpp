#include <iostream>
using namespace std;
class NailGun //define the new data type
{
 int MaxNrNails;
 int CrtNrNails;
 bool Safety;
public:
 void SetMaxNrNails(int Max); //setter for MaxNrNails
 /* CrtNrNails doesn’t have to have a setter because it will get incremented or decremented
by the way we call Load() to load the NailGun, or Fire() to fire the NailGun */
 void SetSafety(bool p); //setter for Safety
 int GetMaxNrNails (); //getter for MaxNrNails
 int GetCrtNrNails (); //getter for CrtNrNails
 bool GetSafety(); //getter for Safety
 void Fire();
 void Load();
 void SetSafety();
 void ReleaseSafety();
 NailGun();//implicit constructor
 NailGun(int NrMAX, bool sft);//constructor with arguments
 NailGun(int max, int crt, bool safe);
 ~NailGun() {} //implicit destructor
};

void NailGun:: SetMaxNrNails(int Max) //setter for SetMaxNrNails
{
 MaxNrNails =Max;
}
void NailGun::SetSafety(bool p) //setter for Safety
{
 Safety=p;
}
int NailGun::GetMaxNrNails () //getter for GetMaxNrNails
{
 return MaxNrNails;
}
int NailGun:: GetCrtNrNails () //getter for CrtNrNails
{
 return CrtNrNails;
}
bool NailGun::GetSafety() //getter for Safety
{
 return Safety;
}
void NailGun::Fire()//implementation of the fire method
{
 if(Safety==true)//check of safety already set
 {
 cout<<"Safety set, can’t fire.";
 }
 else//if Safety not set – check the current number of nails
 {
 if(CrtNrNails>0)//check if I have any nails
 {
 CrtNrNails--;//fire a shot – decrease the bullet count in the NailGun
 cout<<"FIRE !!!";//fire message
 }
 else
 {//if no more nails print a message
 cout<<"Out of nails!!!";
 }
 }
}
void NailGun::Load()
{//check first if the NailGun is already loaded
 if (CrtNrNails==MaxNrNails)
 {
 cout<<"NailGun is already loaded !!!";
 }
 else//if there are less nails than max
 {
 CrtNrNails=MaxNrNails;//full load
 }
}
void NailGun::SetSafety ()
{//check if safety already set
 if(Safety==true)
 {
 cout<<"Safety already set.";
 }

 else//if safety not set, then set it
 {
 Safety=true;
 }
}
void NailGun::ReleaseSafety()
{//check if safety is already released
 if(Safety==false)
 {
 cout<<"Safety already released.";
 }
 else//if it not already released, release the Safety (put it to false)
 {
 Safety=false;
 }
}
NailGun::NailGun()
{//initialize values via the implicit constructor
 cout<<"Using the implicit constructor \n";
 MaxNrNails=5;
 Safety=false;
}
NailGun::NailGun(int NrMAX, bool sft)
{//initialize values via the constructor with 2 arguments
 cout<<"Using the constructor with 2 arguments. \n";
 MaxNrNails=NrMAX;
 Safety=sft;
}
NailGun::NailGun(int max,int crt, bool safe)
{//initialize values via the constructor with 3 arguments
 cout<<"Using the constructor with 3 arguments. \n";
 MaxNrNails=max;
 CrtNrNails=crt;
 Safety=safe;
}
int main()
{
 NailGun p0; /* create a NailGun type object p0, without arguments, so using the implicit
constructor */

 if(p0.GetSafety()==true)//check safety
 {//print different messages based on state of Safety
 cout << "Implicit NailGun p0 has a max of "
 << p0.GetMaxNrNails() << " nails and safety set. \n\n";
 }
 else{
 cout << "Implicit NailGun p0 has a max of "
 << p0.GetMaxNrNails()<<" nails and safety released. \n\n";
 }
 NailGun p1(10,true);/* create another NailGun type object (with arguments matching my
definition in both number and type) using the defined constructor with 2 arguments */
 if(p1.GetSafety()==true)
 {//print different messages based on state of Safety
 cout << "Implicit NailGun p1 has a max of "
 << p1.GetMaxNrNails()<<" nails and safety set. \n\n";
 }
 else{
 cout << "Implicit NailGun p1 has a max of " << p1.GetMaxNrNails()
 << " nails and safety released. \n\n";
}
 NailGun p2(10,5,true);
  if(p2.GetSafety()==true)
 {//print different messages based on state of Safety
 cout << "Implicit NailGun p2 has a max of "<< p2.GetMaxNrNails()<<" nails with CrtNrNails= "<<p2.GetCrtNrNails()<< " and safety set. \n\n";
 }
 else{
 cout << "Implicit NailGun p2 has a max of "<< p2.GetMaxNrNails()<<" nails with CrtNrNails=  "<<p2.GetCrtNrNails()<< " and safety released. \n\n";
}
 return 0;
}
