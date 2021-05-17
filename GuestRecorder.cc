#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

#include "GuestRecorder.h"

GuestRecorder::GuestRecorder(string s)
	: Recorder(s)
{
//	cout << "In GuestRecorder ctor " << endl;

}

void GuestRecorder::update(Reservation* r)
{
	if (!(r->getGuest()->getPremInd()))
	{
		if( r->getRoomGuest()->getRoomType() == C_PREM || r->getRoomGuest()->getRoomType() == C_SUITE)
		{
			stringstream xx;
			xx << "Guest Recorder:   premium guest offer for " << r->getGuest()->getGuestName();
			string y = xx.str();
			recStrings.push_back(y);
		}
	}
}
