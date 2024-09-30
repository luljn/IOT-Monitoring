#ifndef DEF_SENSOR
#define DEF_SENSOR

#include <iostream>

using namespace std;



class Sensor{
	
	protected :
		
		static int compteur;
		int id;              // Identifiant unique de chaque capteur.
		float value;         // Valeur de mesure du capteur.
//		Server* server;      // Server dédié aux capteurs.
	
	public :
		
		Sensor();
		Sensor(Sensor& Sensor);
		Sensor& operator=(const Sensor& Sensor);
		~Sensor();
		
		void description();	
		void consoleWrite();
		void fileWrite();
		
		int getId(){ return this->id; }
		float getValue(){ return this->value; }
		
		void update();     // Pour spécifier le comportement de chaque capteur.
		void execute();   // Pour générer les données.
		
		friend ostream& operator<<(ostream& o, Sensor& s);
};



#endif