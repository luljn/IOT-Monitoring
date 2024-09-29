#include <iostream>
#include "Server.h"

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

void Server::consoleWrite(){
	
}

void Server::fileWrite(){
	
}

ostream& operator<<(ostream& o, Server& s){
	
}