#ifndef STAYRECORDER_H
#define STAYRECORDER_H

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <sstream>

using namespace std;

#include "Recorder.h"

/*
The purpose of this class is to act as a derived class of recorder class. It implements the virtual update function. And it takes a string in the constructor. The update function checks if the guest stays more than 3 day, if this is the case the resevration gets added into the recorder class using the update function and it also prints an informative string,it uses dynamic binding.
*/


class StayRecorder : public Recorder
{
	public:
		StayRecorder(string = "");
		virtual void update(Reservation*);
};

#endif

