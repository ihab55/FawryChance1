#pragma once
#include "clsProduct.h"
class clsShippedProduct :
    public clsProduct
{
public:
    clsShippedProduct(string name, float price, int quantity, float Weight,float ShippingCost)
        : clsProduct(name, price, quantity) {
		_Weight = Weight;
		_ShippingCost = ShippingCost;
    }
#pragma region SetGet

    void SetWeight(float Weight) {
        _Weight = Weight;
    }
    float GetWeight() {
        return _Weight;
    }
    void SetShippingCost(float ShippingCost) {
        _ShippingCost = ShippingCost;
    }
    float GetShippingCost() {
        return _ShippingCost;
    }
#pragma endregion

	__declspec(property(get = GetShippingCost, put = SetShippingCost)) float ShippingCost;
	_declspec(property(get = GetWeight, put = SetWeight)) float Weight;
private:
	float _Weight;
    float _ShippingCost = 0;
};

