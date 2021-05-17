#include <iostream>
using namespace std;
#include <string>
#include "Date.h"
#include "Guest.h"
#include "Room.h"
#include "Hotel.h"
#include "ResManager.h"
#include "RoomArray.h"
#include "Reservation.h"
#include "Recorder.h"
#include "StayRecorder.h"
#include "GuestRecorder.h"
#include "UpgradeRecorder.h"
#include "Control.h"
#include "View.h"

/*
The purpose of this program is to represent a hotel with a reservation manager, now the hotel has a bunch of rooms with specific details, such as room number and room type. Not only that it has premium guests and regular guests, The premium guests have loyalty points. The rooms are stored in room array collection class. There are recorders as well, the base class being abstract and 3 derived classes, which are inherited, and they implement the upgrade function.
*/

int main()
{
  Control x;
  x.launch();
  return 0;
}




