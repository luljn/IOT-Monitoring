#include <iostream>
#include "Server.h"
#include "Sensor.h"

using namespace std;



Server::Server(){
	
}

Server::Server(Server &server){
	
	*this = server;
}

Server::~Server(){
	
	
}

Server& Server::operator=(const Server& server){
	
	
}

void Server::description(){
	
	printf("Je suis un Serveur !\n");
}

void Server::receiveSensorData(Sensor& s){
	
}

void Server::consoleWrite(){
	
	cout << "" << endl; 
}

void Server::fileWrite(){
	
}

ostream& operator<<(ostream& o, Server& s){
	
}