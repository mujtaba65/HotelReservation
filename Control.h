#ifndef CONTROL_H
#define CONTROL_H


#include "View.h"
#include "ResManager.h"
#include "Hotel.h"
#include "StayRecorder.h"
#include "UpgradeRecorder.h"
#include "GuestRecorder.h"

class Control
{
	public:
	  	void launch();
	  	Control();
  		~Control();
	private:
  		void initHotel();

		ResManager* resMgr;
		Hotel* hotel;	
		StayRecorder* sr;
		GuestRecorder* gr;
		UpgradeRecorder* ug;
		View v;
			

};

#endif
