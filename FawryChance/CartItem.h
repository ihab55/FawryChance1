#pragma once
#include <string>
#include "clsProduct.h"
#include "clsProdactExpier.h"
#include "clsShippedProduct.h"
using namespace std;
class CartItem
{
public:
	CartItem(clsProdactExpier product) {
		_name = product.Name;
		_ItemPrice = product.Price;
		_quantity = product.Quantity;
	}
	CartItem(clsShippedProduct product) {
		_name = product.Name;
		_ItemPrice = product.Price;
		_quantity = product.Quantity;
		_Weight = product.Weight;
		ShippingCost = product.ShippingCost;
	}
	CartItem(clsProduct product) {
		_name = product.Name;
		_ItemPrice = product.Price;
		_quantity = product.Quantity;
	}
	float GetItemPrice(){ return _ItemPrice; }
	string GetName() { return _name; }
	int GetQuantity() { return _quantity; }
	float GetWeight() { return _Weight; }
	float GetShippingCost() { return ShippingCost; }
	float GetTotalPrice() {
		return (_ItemPrice * _quantity) + ShippingCost
			;
	}
	bool DeleteFlag = false;
private:
	string _name;
	float _ItemPrice =0;
	int _quantity = 0;
	float _Weight = 0, ShippingCost=0;
};

