#pragma once
#include "Ticket.hpp"

class FirstClassTicket : public Ticket {
public:
	FirstClassTicket();

	void printDetails() override;
};