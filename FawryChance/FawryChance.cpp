#include <iostream>
#include "clsProduct.h"
#include "clsProdactExpier.h"
#include "Cart.h"
#include "clsCheakOut.h"

int main()
{
	clsCustomer customer1("Ehab", 18, 2000);
	clsProdactExpier Milk = clsProdactExpier("Milk",10,1,2025,10,21);
	Cart cart1;
	cart1.addItem(Milk);
	clsCheakOut checkout1 = clsCheakOut(cart1,customer1);
}
