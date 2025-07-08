#pragma once
#include <string>
#include "clsCustomer.h"
#include "Cart.h"
using namespace std;
class clsCheakOut
{
public:
	clsCheakOut(Cart cart, clsCustomer customer) {
		if (customer.Balance >= cart.getTotal())
		{
			//Cout << "Success "
		}
		else {
			//Messsage for error
		}
	}
};

