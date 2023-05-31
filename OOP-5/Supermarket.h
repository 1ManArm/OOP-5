#pragma once
#include "Food.h"

class Supermarket {
private:
	std::vector<Food *>_stock;
public:
	void showStock();

	Food* searchByName(std::string name);
	
	void buy(std::string name);

	void addProduct(Food *food);
};
