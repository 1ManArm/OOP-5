#include "Client.h"

Client::Client(int id){
	_id = id;
}

void Client::showId() {
	std::cout << "ID: " << _id << std::endl;
}