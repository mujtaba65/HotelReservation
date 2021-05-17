#include <iostream>
#include <string>

using namespace std;

#include "Recorder.h"

Recorder::Recorder(string s)
	: recName(s)
{
//	cout << "In Recorder's ctor " << endl;

}

void Recorder::printRecords()
{
	cout << "RECORDER NAME : " << recName << endl; 
	for (int i = 0; i < recStrings.size(); i++)
	{
		cout << recStrings[i] << endl;
	}
	cout << endl;
}



