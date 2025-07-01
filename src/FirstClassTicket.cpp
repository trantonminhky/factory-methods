#include "FirstClassTicket.hpp"

FirstClassTicket::FirstClassTicket() {
	price = 100;
	comfortLevel = "Luxury";
	maxBaggageWeight = 40;
	services = "Gourmet meals";
}

void FirstClassTicket::printDetails() {
	printf("- First Class Ticket ($%d) -\n+ %s comfort\n+ %dkg baggage\n+ %s\n", price, comfortLevel.c_str(), maxBaggageWeight, services.c_str());
}