#include <iostream>
#include"Server.h"



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