#ifndef RECORDER_H
#define RECORDER_H

#include <iostream>
#include <string>
#include <vector>
#include "Reservation.h"

using namespace std;


/*
The purpose of this class is to be AN ABSTRACT CLASS, it is a base class and implements inheritance. The update function is pure virtual making this class abstract. It has vector of string type. And lastly it uses printRecords() with the help of dynamic binding.
*/

class Recorder
{
	public:
		Recorder(string = "");
		void printRecords();
		virtual void update(Reservation *) = 0;
		
	
	protected:
		string recName;
		vector<string> recStrings;
		
		


};

#endif


