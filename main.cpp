#include <iostream>
#include <cstdlib>
#include "Server.h"
#include "Sensor.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	
	printf("Project initialization !\n");
	
	Server server;
	server.description();
	
	Sensor sensor;
	sensor.description();
	
	return 0;
}