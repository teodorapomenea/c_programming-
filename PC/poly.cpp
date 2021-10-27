
#include <iostream>
#include <string>
using namespace std;
template <class T>
T fcn(T a, T b) {
 return a > b ? a : b;
}

int main() {
 cout << fcn<int>(2, 1) << endl;     // 2

 string foo="foo", bar="bar"; 
 cout << fcn<string>(foo, bar) << endl; // "foo"
}

