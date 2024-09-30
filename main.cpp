#include <iostream>
#include <cstdlib>
#include "Server.h"
#include "Sensor.h"
#include "Scheduler.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	
	system("title IOT - Monitoring");
	
	printf("Project initialization !\n");
	
	Server server;
	server.description();
	
	Sensor sensor;
	sensor.description();
	cout << sensor.getId() << endl;
	
	Scheduler scheduler;
	scheduler.description();
	
	return 0;
}