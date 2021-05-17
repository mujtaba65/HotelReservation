hotel:	main.o Date.o Guest.o Room.o Hotel.o ResManager.o RoomArray.o Reservation.o Recorder.o StayRecorder.o GuestRecorder.o UpgradeRecorder.o Control.o View.o
	g++ -o hotel main.o Date.o Guest.o Room.o Hotel.o ResManager.o RoomArray.o Reservation.o Recorder.o StayRecorder.o GuestRecorder.o UpgradeRecorder.o Control.o View.o

main.o:	main.cc Date.h Guest.h Room.h Hotel.h ResManager.h RoomArray.h Reservation.h Recorder.h StayRecorder.h GuestRecorder.h UpgradeRecorder.h Control.h View.h
	g++ -c main.cc 

Date.o:	Date.cc Date.h
	g++ -c Date.cc
	
Guest.o:	Guest.cc Guest.h
	g++ -c Guest.cc

Room.o:	Room.cc Room.h
	g++ -c Room.cc

Hotel.o:	Hotel.cc Hotel.h
	g++ -c Hotel.cc

ResManager.o:	ResManager.cc ResManager.h
	g++ -c ResManager.cc
	
RoomArray.o:	RoomArray.cc RoomArray.h
	g++ -c RoomArray.cc	
	
Reservation.o:	Reservation.cc Reservation.h
	g++ -c	Reservation.cc
	
Recorder.o:	Recorder.cc Recorder.h
	g++ -c Recorder.cc	

StayRecorder.o:	StayRecorder.cc StayRecorder.h
	g++ -c StayRecorder.cc

GuestRecorder.o:	GuestRecorder.cc GuestRecorder.h
	g++ -c GuestRecorder.cc

UpgradeRecorder.o:	UpgradeRecorder.cc UpgradeRecorder.h
	g++ -c UpgradeRecorder.cc
	
Control.o:	Control.cc Control.h
	g++ -c Control.cc
	
		
View.o:	View.cc View.h
	g++ -c View.cc	
	
clean:
	rm -f *.o hotel
