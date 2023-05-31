#pragma once
#include <iostream>
#include <string>
#include <vector>

class Food {
private:
	std::string _name;
	float _condition;
	float _price;
	float _weight;
public:
	Food(std::string name, float price, float weight);

	//void showData();
	//virtual void showData() = 0;
	virtual void showData();

	std::string getName() const { 
		return _name; 
	}
};

class Bread : public Food {
private:
	std::string _typeOfBread;
public:
	/*Bread(std::string name, float price, float weight, std::string type) : Food(name, price, weight) {
		_typeOfBread = type;
	}*/
	Bread(std::string name, float price, float weight, std::string type);
	void showData() override;
};

class Milk : public Food {
private:
	int _fatPercent;
public:
	/*Milk(std::string name, float price, float weight, int fat) : Food(name, price, weight) { }*/
	Milk(std::string name, float price, float weight, int fat);
	void showData() override;
};
