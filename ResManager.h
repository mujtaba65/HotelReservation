#ifndef RESMANAGER_H
#define RESMANAGER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Hotel.h"
#include "Recorder.h"
#define MAX_DRR 64


/*
The purpose of this class is to make a ResManager object, which takes a Hotel pointer in constructor, so that resManager is related to that hotel. resManager has bidirectional relation with manager. ResManager has a collection reservations stored in reservation array, and a counter to go with it. Also has vector of reservation pointer type to help with dynamic binding. andReservation function which checks for availability of room. if not available it checks for other rooms available of same type. It doesn't give room of other type other than requirement. It has a notify function to call update functions for each recorder type. The add function adds the newly created reservation into sorted order inside the array, its a helper function.
*/

class Hotel;
class ResManager
{
	public:
		ResManager(Hotel* = NULL);
		~ResManager();
		void setHotel(Hotel*);
		void addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req);
		void print();
		int getNumRes();
		void printRecords();
		void subscribe(Recorder*);
	
	
	private:
		Hotel* hot;
		Reservation* resArr[MAX_DRR];
		int numRes;
		vector<Recorder*> recVec;
		void add(Reservation*);
		void notify(Reservation* );




};
#endif
