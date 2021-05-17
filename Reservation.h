#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
using namespace std;
#include "Guest.h"
#include "Room.h"
#include "Date.h"


/*
The purpose of this class is to make a reservation for each guest, the reservation constructor takes a guest,hotel and date pointer and lastly the integer which is a number of days. It compares the reservation date with other dates through the help of less than function, which takes the help of lessThan function in date, 1 date is less than the other one if its earlier than the other date. And lastly a print function.
*/

class Reservation
{
	public:
		Reservation(Guest* = NULL, Room* = NULL, Date* = NULL , int = 0);
		~Reservation();
		Guest* getGuest();
		Date* getArrival();
		int getStay();
		Room* getRoomGuest();
		float getCharge();
		void print();
		bool lessThan(Reservation*);
	
	private:
	
	 	Guest* resGuest;
	 	Date* arrivalDate;
	 	int stay;
	 	Room* assignedRoom;
	 	float totalCharge;
	
};
#endif

