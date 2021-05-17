#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#include "UpgradeRecorder.h"

UpgradeRecorder::UpgradeRecorder(string s)
	: Recorder(s)
{
//	cout << "In UpgradeRecorder ctor " << endl;

}

void UpgradeRecorder::update(Reservation* r)
{
	if (!(r->getGuest()->getPremInd()))
	{
		if(r->getCharge() > 1500)
		{
			stringstream xx;
			xx << "Upgrade Recorder:   Guest" << setfill(' ') << setw(10) <<r->getGuest()->getGuestName() << "," << setfill(' ') << setw(4) << "$" << r->getCharge();
			
			string y = xx.str();
			recStrings.push_back(y);
		}
		
	}
}
