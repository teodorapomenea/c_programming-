#include <iostream>
#include <iomanip>
using namespace std;
class Product{
  string product_type;
  string product_name;
  string barcode;
  float price;
  
public:
  void SetType(string t) {product_type=t;}
  void SetName(string n) {product_name=n;}
  void SetBarcode(string b) {barcode=b;}
  void SetPrice(float p) {price=p;}
  string GetType(){return product_type;}
  string GetName(){return product_name;}
  string GetBarcode(){return barcode;}
  float GetPrice() {return price;}
  friend void Total(Product p1, Product p2);
};

void Total(Product p1, Product p2)
{     
    cout << setprecision(2) <<fixed; 
    
    cout << "Total:" << p1.price + p2.price;

}

int main()
{
	Product p1, p2;
	p1.SetType("soft_drink");
	p1.SetName("Cola");
	p1.SetBarcode("1234");
	p1.SetPrice(3.99);
	p2.SetType("food");
	p2.SetName("Fruit");
	p2.SetBarcode("1356");
	p2.SetPrice(3.99);
	Total(p1,p2);
	
	
	
	
	
	
	
	
	
	
	
	
}
