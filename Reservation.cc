#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

#include "Reservation.h"

Reservation::Reservation(Guest* guest, Room* r, Date* d, int numDays)
	: resGuest(guest), assignedRoom(r), arrivalDate(d), stay(numDays)
{
	totalCharge = stay * assignedRoom->getDailyRate();
}

Reservation::~Reservation()
{
	delete arrivalDate;	
}

Guest* Reservation::getGuest()
{
	return resGuest;
}

Date* Reservation::getArrival()
{
	return arrivalDate;
}

int Reservation::getStay()
{
	return stay;
}


Room* Reservation::getRoomGuest()
{
	return assignedRoom;
}

float Reservation::getCharge()
{
	return totalCharge;
}

void Reservation::print()
{
	cout << " Guest: " << setfill(' ') << setw(8) << right <<resGuest->getGuestName() << "; Room: " << assignedRoom->getRoomNum() <<"; arrival: ";
	 arrivalDate->print();
	 cout << "; stay:" << setfill(' ') << setw(4) << right << stay << "; total:" << setfill(' ') << setw(3) << right << "$" << totalCharge << endl;
}

bool Reservation::lessThan(Reservation* rsvp)
{
	if(arrivalDate->lessThan(*(rsvp->arrivalDate)))
	{
		return true;
	}
	return false;
}










