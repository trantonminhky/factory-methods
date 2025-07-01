#pragma once
#include <iostream>

class Ticket {
public:
	int getPrice();
	std::string getComfortLevel();
	int getMaxBaggageWeight();
	std::string getServices();

	virtual void printDetails() = 0;

protected:
	int price;
	std::string comfortLevel;
	int maxBaggageWeight;
	std::string services;
};