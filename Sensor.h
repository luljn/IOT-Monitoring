#ifndef DEF_SENSOR
#define DEF_SENSOR

#include <iostream>

using namespace std;



class Sensor{
	
	public :
		
		Sensor();
		Sensor(Sensor& Sensor);
		Sensor& operator=(const Sensor& Sensor);
		~Sensor();
		void description();	
		void consoleWrite();
		void fileWrite();
		friend ostream& operator<<(ostream& o, Sensor& s);
};



#endif