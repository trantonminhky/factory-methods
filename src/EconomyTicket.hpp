#pragma once
#include "Ticket.hpp"

class EconomyTicket : public Ticket {
public:
	EconomyTicket();

	void printDetails() override;
};