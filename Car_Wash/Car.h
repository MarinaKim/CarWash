#pragma once
#include"Library.h"

class Car {
private:
	string name;
	size_t time;
public:
	Car() {
		name = "";
		time = 0;
	}
	Car(string name, size_t time) {
		this->name = name;
		this->time = time;
	}
};
