#include <iostream>
#include "Scheduler.h"

using namespace std;



Scheduler::Scheduler(){
	
}

Scheduler::Scheduler(Scheduler &Scheduler){
	
	*this = Scheduler;
}

Scheduler::~Scheduler(){
	
	
}

Scheduler& Scheduler::operator=(const Scheduler& Scheduler){
	
	
}

void Scheduler::description(){
	
	printf("Je suis un Plannifieur(pour l'ordonnancement des executions) !\n");
}

void Scheduler::consoleWrite(){
	
}

void Scheduler::fileWrite(){
	
}

ostream& operator<<(ostream& o, Scheduler& s){
	
}