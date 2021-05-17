#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define MAX_CRR 64

#include "ResManager.h"
#include "RoomArray.h"
#include "Guest.h"


/*
The purpose of this class is to make a hotel object with a set of rooms which are stored in a room array. Each hotel has a resManager, which takes care of room registrations. ResManager and Hotel have a bidirectional relation so it has resmanager forward reference. Hotel also has a collection of guests and obviously each hotel has a name. Hotel has 2 add functions for addRoom and addGuest. And 2 prints for guests and rooms. And lastly its like a getter function but not really, it finds a guest with a specific name.
*/


class ResManager;
class Hotel
{
	public:
		Hotel(string = "" , ResManager* = NULL);
		~Hotel();
		RoomArray& getRoomArr();
		string getHotelName();
		int getNumGuests();
		void addGuest(Guest*);
		void addRoom(Room*);
		void printGuests();
		void printRooms();
		bool findGuest(string, Guest**);
		
	
	
	
	private:
		string hotelName;
		Guest* guestArr[MAX_CRR];
		int numGuests;
		RoomArray roomArr;
		ResManager* manager;
		





};
#endif

