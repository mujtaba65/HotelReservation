#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;
#include "defs.h"


/*
The purpose of this class is to make a room object with specific details, initializing the roomType with the help of defs.h and each room has its own room number as well with its daily rate. These rooms are then stored in RoomArray collection class. These rooms give points to guests, the more high class the room, the more points. 
*/

class Room
{
	public:
		Room(ReqRoomType = C_REG, int = 0, float = 0.0f);
		ReqRoomType getRoomType();
		int getRoomNum();
		float getDailyRate();
		void print();
		void computePoints(int&);
		string getType();
	
	
	
	private:
		ReqRoomType roomType;
		int roomNum;
		float dailyRate;


};
#endif
