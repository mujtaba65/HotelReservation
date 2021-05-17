#ifndef GUEST_H
#define GUEST_H

#include <string>
using namespace std;


/*
The purpose of this class is to make a guest object with specific details, 1) guest name, 2) premium or not, 3) loyalpts, this class stores the number of points for each guest which are accrued depending on room type and daily rate and the number of days. Lastly it has a print function.
*/

class Guest
{
	public:
		Guest(string = "", bool = false);
		string getGuestName();
		bool getPremInd();
		void print();
		void addPts(int);
	
	
	private:
		string guestName;
		bool premGuest;
		int loyalpts;



};
#endif
