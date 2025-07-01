#include <iostream>
#include "BusinessTicket.hpp"
#include "EconomyTicket.hpp"
#include "FirstClassTicket.hpp"

Ticket* createTicket(int type) {
	if (type == 1) return new EconomyTicket();
	if (type == 2) return new BusinessTicket();
	if (type == 3) return new FirstClassTicket();
	return nullptr;
}

int main() {
	int option;
	std::cout << "Choose ticket type (1 - Economy, 2 - Business, 3 - First Class): ";
	std::cin >> option;

	Ticket* ticket = createTicket(option);
	ticket->printDetails();
	delete ticket;

	return 0;
}