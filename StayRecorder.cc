#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#include "StayRecorder.h"

StayRecorder::StayRecorder(string s)
	: Recorder(s)
{
//	cout << "In StayRecorder ctor " << endl;

}

void StayRecorder::update(Reservation* r)
{
	if (r->getStay() > 3)
	{
		stringstream xx;
		
		xx << "Stay Recorder:   Guest" << setfill(' ') << setw(10) <<r->getGuest()->getGuestName() << "," << setfill(' ') << setw(4) << r->getStay() << " nights"; ;
		
			
		string y = xx.str();
		recStrings.push_back(y);
	}
}
