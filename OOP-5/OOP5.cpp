#include "Food.h"
#include "Client.h"
#include "Supermarket.h"



int main() {
	setlocale(LC_ALL, "Russian");

	/*Client* client = new Client(5);
	client->showId();
	std::cout << std::endl;*/

	Supermarket* supermarket = new Supermarket();

	Bread* bread = new Bread("����", 25.0f, 1.25f, "�����");
	Milk* milk = new Milk("������", 70.6f, 1.0f, 10);
	
	std::cout << std::endl;
	
	supermarket->addProduct(bread);
	supermarket->addProduct(milk);

	std::cout << std::endl;

	supermarket->buy("������");
	supermarket->showStock();

	return 0;
}