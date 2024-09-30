#ifndef DEF_SCHEDULER
#define DEF_SCHEDULER

#include <iostream>
#include <list>
#include "Sensor.h"

using namespace std;



class Scheduler{
	
	private :
		
		list<Sensor*> listOfSensors;	
	
	public :
		
		Scheduler();
		Scheduler(Scheduler& Scheduler);
		Scheduler& operator=(const Scheduler& Scheduler);
		~Scheduler();
		
		void description();	
		void consoleWrite();
		void fileWrite();
//		void addSensor(Sensor& s){ listOfSensors.push_back(s); }  // Ajouter un capteur existant à la liste.
		
		void simulation();
		
		friend ostream& operator<<(ostream& o, Scheduler& s);
};



#endif