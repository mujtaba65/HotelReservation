#include <iostream>
using namespace std;
#include <string>

#include "ResManager.h"
#include "Hotel.h"


ResManager::ResManager(Hotel* h)
	: hot(h)
{
	numRes = 0;
}	

ResManager::~ResManager()
{
	for(int i = 0; i < numRes; i++){
		delete resArr[i];
	}
}

void ResManager::setHotel(Hotel* h)
{
	hot = h;
	return;
}

int ResManager::getNumRes()
{
	return numRes;

}

void ResManager::addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req)
{
	if(stay < 31)
	{
		Date* dt = new Date(yr, mth, day);
		Room* room = NULL;
		bool roomAvail = false;
		for(int x = 0; x < hot->getRoomArr().getSize(); x++)
		{
			roomAvail = false;
			room = NULL;
			if( req == hot->getRoomArr().get(x)->getRoomType())
			{
				if(numRes == 0)
				{
					room = hot->getRoomArr().get(x);
					
					roomAvail = true;
					break;
				}
				for (int l = 0; l < numRes ; l++)
				{
					Date* xy = resArr[l]->getArrival();
					Date by= *xy;
					by.add(resArr[l]->getStay());
					Date cs = *dt;
					cs.add(stay);

					if(req ==resArr[l]->getRoomGuest()->getRoomType() )
					{

						if(!(dt->lessThan(*xy)) && ((dt->lessThan(by))))
						{

								if(resArr[l]->getRoomGuest()->getRoomNum() != hot->getRoomArr().get(x)->getRoomNum())
								{	
										room = hot->getRoomArr().get(x);
										roomAvail = true;
										continue;
								}
								roomAvail = false;
								room = NULL;
								break;

						}

						if(!(dt->lessThan(*xy)) && (!(dt->lessThan(by))))
						{
								roomAvail = true;
								room = hot->getRoomArr().get(x);
								continue;
						}

						if(dt->lessThan(*xy))	
						{
							if(cs.lessThan(*xy))
							{
								room = hot->getRoomArr().get(x);
								roomAvail = true;
								break;
							}
							if(resArr[l]->getRoomGuest()->getRoomNum() != hot->getRoomArr().get(x)->getRoomNum())
							{	
								room = hot->getRoomArr().get(x);
								roomAvail = true;
								continue;
							}
							roomAvail = false;
							break;		
						}
					}else
					{
						roomAvail = true;
						continue;
					}	
				}
				if(roomAvail)
				{
					room = hot->getRoomArr().get(x);
					break; //room found
				}	
				else
				{
					continue; //searching for new room 
				}	
			}
		}
		
		if(roomAvail == false)
		{
			cout << "ERROR:   Registration request for " << name << ", ";
			dt->print();
			cout << ": No room of matching type available"<<endl;	
			delete dt;
			return;
		}
		
		Guest* g;
		bool guestFound = hot->findGuest(name, &g);
		if(!(guestFound))
		{
			cout << "ERROR:   Guest  " << name << " does not exist." << endl;
			delete dt;
			return;
		}
		Reservation* rsvp = new Reservation(g, room, dt, stay);
		add(rsvp);	
			
		int tempPts = 0;
		rsvp->getRoomGuest()->computePoints(tempPts); //points on daily basis
		tempPts *= stay;
		g->addPts(tempPts);

		notify(rsvp);
	}
	else{
		cout << "THE RESERVATION COULD NOT BE CREATED" << endl;
		return;
	}
}

void ResManager::subscribe(Recorder* r)
{
	recVec.push_back(r);
}

void ResManager::print()
{
	cout << "RESERVATIONS:" <<endl;
	for ( int i = 0 ; i < numRes ; i++)
	{
		resArr[i]->print();
	}
}

void ResManager::printRecords()
{
	for ( int i = 0 ; i < recVec.size(); i++)
	{
		recVec[i]->printRecords();
	}
}

void ResManager::notify(Reservation* res)
{
	for ( int i = 0 ; i < recVec.size(); i++)
	{
		recVec[i]->update(res);
	}


}

void ResManager::add(Reservation* res)
{
	if (numRes >= MAX_DRR)
	{
		cout << "Couldn't be added" << endl;
		return;
	}	
	if(numRes == 0)
	{
		resArr[numRes] = res;
		numRes++;
		return;
	}
	for(int i = 0; i < numRes; i++)
	{
		if (res->lessThan(resArr[i]))
		{			
			for(int x = numRes; x > i; x--)
			{
				resArr[x] = resArr[x-1];
			}

			resArr[i] = res;
			numRes++;
			return;	
		}	
	}
	resArr[numRes] = res;
	numRes++;
	return;	
}




