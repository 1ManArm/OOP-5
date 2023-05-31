#include "Food.h"

Food::Food(std::string name, float price, float weight) {
	_name = name;
	_price = price;
	_weight = weight;
	_condition = 100.0f;
}

Bread::Bread(std::string name, float price, float weight, std::string type) : Food(name, price, weight) {
	_typeOfBread = type;
}

Milk::Milk(std::string name, float price, float weight, int fat) : Food(name, price, weight) {
	_fatPercent = fat;
}

void Food::showData() {
	std::cout << "������������:  |" << _name << std::endl;
	std::cout << "���������:     |" << _condition << std::endl;
	std::cout << "����:          |" << _price << std::endl;
	std::cout << "���:           |" << _weight << std::endl;
}

void Bread::showData() {
	Food::showData();
	std::cout << "��� �����:     |" << _typeOfBread << std::endl;
}

void Milk::showData() {
	Food::showData();
	std::cout << "������-� ����: |" << _fatPercent << std::endl;
}