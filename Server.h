#ifndef DEF_SERVER
#define DEF_SERVER



class Server{
	
	public :
		
		Server();
		Server(Server& server);
		Server& operator=(const Server& server);
		~Server();
		void description();	
};



#endif