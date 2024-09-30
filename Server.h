#ifndef DEF_SERVER
#define DEF_SERVER

#include <iostream>
#include "Sensor.h"

using namespace std;



class Server{
	
	public :	
	
		Server();
		Server(Server& server);
		Server& operator=(const Server& server);
		~Server();
		void description();	
		void receiveSensorData(Sensor& s);
		void consoleWrite();
		void fileWrite();
		friend ostream& operator<<(ostream& o, Server& s);
};



#endif