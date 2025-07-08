#pragma once
#include <string>
using namespace std;
class clsProduct
{
public:
#pragma region Set And Get Method ( PRICE , NAME, QUANTITY )
	void SetName(string name) { _Name = name; }
	void SetPrice(float price) { _Price = price; }
	void SetQuantity(int quantity) { _Quantity = quantity; }
	string GetName() { return _Name; }
	float GetPrice() { return _Price; }
	int GetQuantity() { return _Quantity; }
#pragma endregion

	__declspec(property(get = GetName, put = SetName)) string Name;   // Name to Call
	__declspec(property(get = GetPrice, put = SetPrice)) float Price;  // Same as above
	__declspec(property(get = GetQuantity, put = SetQuantity)) int Quantity; // Same as above

	clsProduct(string name, float price, int quantity) {
		_Name = name;
		_Price = price;
		_Quantity = quantity;
	}
	float GetTotalPrice() { return _Price * _Quantity; }
	bool IsAvailable() { return _Quantity > 0; }
private:
     string _Name;
	 float _Price;
	 int _Quantity;
	 bool _IsCanExpiered = false; // Default is false, can be set to true if needed
	 bool _IsShipped = false; 

};

