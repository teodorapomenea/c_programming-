#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a > 10) {
      if (a < 23) {
        cout << "NU";
      }
      if (a > 30) {
        cout << "DA";
      }
    }
    if (a > 40) {
      cout << "DA";
    }
    return 0;
}
