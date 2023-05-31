#include "Food.h"
#include "Supermarket.h"

void Supermarket::showStock() {
	if (_stock.size() > 0) {
		for (const auto& it : _stock) {
			it->showData();
			std::cout << std::endl;
		}
	}

	std::cout << "Все продукты проданы." << std::endl;
}

void Supermarket::addProduct(Food* food) {
	_stock.push_back(food);
}

Food* Supermarket::searchByName(std::string name) {
	for (const auto& it : _stock) {
		if (it->getName() == name)
			return it;
	}
}

void Supermarket::buy(std::string name) {
	int index = 0;
	for (const auto& it : _stock) {
		if (it->getName() == name) {
			delete(it);
			_stock.erase(_stock.begin() + index);
		}
		index++;
	}
}