#ifndef UPGRADERECORDER_H
#define UPGRADERECORDER_H

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

#include "Recorder.h"

/*
The purpose of this class is to act as a derived class of recorder class. It implements the virtual update function. And it takes a string in the constructor. The update function checks if the guest is not premium and then checks if there reservations cost more than 1500 and if this happens it gets added into the recorder class and prints an informative string,it uses dynamic binding.
*/

class UpgradeRecorder : public Recorder
{
	public:
		UpgradeRecorder(string = "");
		virtual void update(Reservation *);

};

#endif

