#include "Food.h"
#include "Client.h"
#include "Supermarket.h"



int main() {
	setlocale(LC_ALL, "Russian");

	/*Client* client = new Client(5);
	client->showId();
	std::cout << std::endl;*/

	Supermarket* supermarket = new Supermarket();

	Bread* bread = new Bread("Хлеб", 25.0f, 1.25f, "Белый");
	Milk* milk = new Milk("Молоко", 70.6f, 1.0f, 10);
	
	std::cout << std::endl;
	
	supermarket->addProduct(bread);
	supermarket->addProduct(milk);

	std::cout << std::endl;

	supermarket->buy("Молоко");
	supermarket->showStock();

	return 0;
}