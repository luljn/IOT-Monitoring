#ifndef DEF_SENSOR
#define DEF_SENSOR

#include <iostream>

using namespace std;



class Sensor{
	
	protected :
		
		static int compteur;
		int id;              // Identifiant unique de chaque capteur.
	
	public :
		
		Sensor();
		Sensor(Sensor& Sensor);
		Sensor& operator=(const Sensor& Sensor);
		~Sensor();
		
		void description();	
		void consoleWrite();
		void fileWrite();
		
		int getId(){ return this->id; }
		
		friend ostream& operator<<(ostream& o, Sensor& s);
};



#endif