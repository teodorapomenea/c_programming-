#include <iostream>

using namespace std;

class Point
{
	private:
	int x, y;
public:
	void set(int a, int b);
	int getX();
	int getY();
};

void Point::set(int a ,int b)
{
    x=a;
    y=b;
}
int Point::getX()
{
	return x;
}
int Point::getY()
{
	return y;
}


int main()
{
	Point point1, point2;
point1.set(10,20);
cout << point1.getX() << ", " << point1.getY()<<endl;

point2.set(-5, -25);
cout << point2.getX() << ", " << point2.getY();

	return 0;
}


