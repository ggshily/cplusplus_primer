#ifndef FOLDER_H
#define FOLDER_H 

#include <set>

class Message;

class Folder {
	public:
		Folder(){}
		Folder(const Folder&);
		~Folder();
		void save(Message&);
		void remove(Message&);
		void addMsg(Message*);
		void remMsg(Message*);
		Folder& operator=(const Folder &rhs);
	private:
		std::set<Message*> messages;
		void put_Fldr_in_Messages(const std::set<Message*>&);
		void remove_Fldr_from_Messages();
};

#endif
