#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include "Guest.h"


Guest::Guest(string s, bool prem)
	: guestName(s), premGuest(prem)
{
	loyalpts = 0;
}

string Guest::getGuestName()
{
	return guestName;
}

bool Guest::getPremInd()
{
	return premGuest;
}


void Guest::print()
{
	
	if(premGuest){
		cout << " " << setfill(' ') << setw(10) << left << guestName << "Premium guest:" << setfill(' ') << setw(8) << right << loyalpts << " pts" << endl;
		return;
	}
	cout << " " << setfill(' ') << setw(10) << left << guestName << "Regular guest:" << setfill(' ') << setw(8) << right <<loyalpts << " pts" << endl;


}

void Guest::addPts(int p)
{
	loyalpts += p;
}
