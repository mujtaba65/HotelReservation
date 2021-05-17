
#include <iostream>
#include <string>
using namespace std;

#include "Hotel.h"
#include "ResManager.h"

Hotel::Hotel(string s, ResManager* r)
	: hotelName(s), manager(r)
{
	numGuests = 0;
}

Hotel::~Hotel()
{
	
	for(int i = 0; i < numGuests; i++){
		delete guestArr[i];
	}
}

string Hotel::getHotelName()
{
	return hotelName;
}

int Hotel::getNumGuests()
{
	return numGuests;
}

RoomArray& Hotel::getRoomArr(){
	return roomArr;
}

void Hotel::addGuest(Guest* guest)
{
	if(numGuests >= MAX_CRR)
	{
		cout<< "Error Guest could not be added.." << endl;
		return;
	}
	guestArr[numGuests] = guest;
	numGuests++;
}

void Hotel::addRoom(Room* room)
{
	roomArr.add(room);
}
void Hotel::printGuests()
{

	cout << "GUESTS: " << endl;
	for (int i = 0; i < numGuests; i++)
	{
		guestArr[i]->print();
	}
}
void Hotel::printRooms()
{
		cout << "ROOMS:" << endl;
		roomArr.print();
}

bool Hotel::findGuest(string name, Guest** guest)
{
	for( int i = 0; i < numGuests; i++)
	{
		if (guestArr[i]->getGuestName() == name)
		{
			*guest = guestArr[i];
			return true;
		}
	}
	return false;
}


