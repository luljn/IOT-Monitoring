#ifndef DEF_SCHEDULER
#define DEF_SCHEDULER

#include <iostream>

using namespace std;



class Scheduler{
	
	public :
		
		Scheduler();
		Scheduler(Scheduler& Scheduler);
		Scheduler& operator=(const Scheduler& Scheduler);
		~Scheduler();
		void description();	
		void consoleWrite();
		void fileWrite();
		friend ostream& operator<<(ostream& o, Scheduler& s);
};



#endif