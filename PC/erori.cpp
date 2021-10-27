#include <iostream>

using namespace std;

class Point
{
	
	int x, y;

	public:
	void set(int a, int b)
	{ x=a;
	  y=b;
	};
	int getX(){return x;};
	int getY(){return y;};
	Point(int a, int b)
	{ x=a;
	  y=b;
	};
	Point()
	{ x=0;
	   y=0;
	};
};

int main()
{
	Point a(1, 2), b(10, -20);
    Point c;
	cout << a.getX() << ", " << a.getY()<<endl;
	c.set(5, 15);
	cout << c.getX() << ", " << c.getY();

	return 0;
}

