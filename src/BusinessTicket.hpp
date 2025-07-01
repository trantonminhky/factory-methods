#pragma once
#include "Ticket.hpp"

class BusinessTicket : public Ticket {
public:
	BusinessTicket();

	void printDetails() override;
};