#include <iostream>
using namespace std;


class Person {
public:
   virtual void display () { cout << "I am"<<endl;}
};
class Student : public Person {
    public:void display() {cout <<"I learn"<<endl;}
};
class Teacher : public Person {
   void display() {cout <<"I teach"<<endl;}
};
class Manager : public Person {
   void display() {cout <<"I manage"<<endl;}
};	void do_display(Person *p){
      p->display();
}

int main() {
    Student s1;
    Teacher t1;
    Manager m1;
    s1.display();
    do_display(&s1); //--> I learn
    do_display(&t1); //--> I teach
    do_display(&m1); //--> I manage
}




