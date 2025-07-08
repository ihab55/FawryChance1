#pragma once
#include <string>
#include "CartItem.h"
#include<vector>
using namespace std;

class Cart
{
public:
	void addItem( CartItem item) {
		items.push_back(item);
		_SubTotal +=  item.GetItemPrice() * item.GetQuantity();
		_ShippingCost += item.GetShippingCost();
	}
	void removeItem(string itemName) {
		for (CartItem it : items) {
			if (it.GetName() == itemName) {
				it.DeleteFlag = true;
				_SubTotal -= it.GetItemPrice() * it.GetQuantity();
				_ShippingCost -= it.GetShippingCost();
				return;
			}
		}
	}
	float getShippingCost() const { return _ShippingCost; }
	float getSubTotal() const { return _SubTotal; }
	float getTotal() const { return _SubTotal + _ShippingCost; }

private:
	vector<CartItem>items;
	float _ShippingCost = 0.0f,_SubTotal = 0.0f;
};

