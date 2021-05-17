#ifndef GUESTRECORDER_H
#define GUESTRECORDER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Recorder.h"


/*
The purpose of this class is to act as a derived class of recorder class. It implements the virtual update function. And it takes a string in the constructor. The update function checks if the guest is not premium and then checks there reservation for room type, if it is premium or suite. They get a premium offer,it uses dynamic binding.
*/

class GuestRecorder : public Recorder
{
	public:
		GuestRecorder(string = "");
		virtual void update(Reservation *);
};

#endif

