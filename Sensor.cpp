#include <iostream>
#include "Sensor.h"

using namespace std;



Sensor::Sensor(){
	
}

Sensor::Sensor(Sensor &Sensor){
	
	*this = Sensor;
}

Sensor::~Sensor(){
	
	
}

Sensor& Sensor::operator=(const Sensor& Sensor){
	
	
}

void Sensor::description(){
	
	printf("Je suis un Capteur !\n");
}

void Sensor::consoleWrite(){
	
}

void Sensor::fileWrite(){
	
}

ostream& operator<<(ostream& o, Sensor& s){
	
}