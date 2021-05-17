#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

#include "Room.h"

Room::Room(ReqRoomType r, int rn, float cost)
	: roomType(r), roomNum(rn), dailyRate(cost)
{
	//cout << "In room ctor" << endl;

}

ReqRoomType Room::getRoomType()
{
	return roomType;
}

int Room::getRoomNum()
{
	return roomNum;
}

float Room::getDailyRate()
{
	return dailyRate;
}

void Room::print()
{
	string s = getType();
	cout << " " << setw(4) << left <<roomNum << setfill(' ') << setw(3) << setw(7) << left << s << " room:  $ " << setw(4) << dailyRate << setfill(' ') << " per night" << endl;

}

void Room::computePoints(int& pts)
{
	if(roomType == C_SUITE)
	{
		pts = 0.2 * dailyRate;
		return;
	}
	else if(roomType == C_PREM)
	{
		pts = 0.15 * dailyRate;
		return;
	
	}
	else if(roomType == C_REG)
	{
		pts = 0.10 * dailyRate;
		return;
	}


}


string Room::getType()
{
	string x;
	if(roomType == C_SUITE)
	{ 
		x ="Suite";
		return x;
	}else if(roomType == C_PREM)
	{ 
		x= "Premium";
		return x;
	}else if(roomType == C_REG) 
	{
		x= "Regular";
		return x;
	}
	return x;

}

