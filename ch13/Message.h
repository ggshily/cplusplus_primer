#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <set>

class Folder;

class Message {
	public:
		// folders is initialized to the empty set automatically
		Message(const std::string &str = ""):
			contents (str) {}
		// copy constrol: we must manage pointers to this message
		// // from the Floders pinted to by floders
		Message(const Message&);
		Message& operator=(const Message&);
		~Message();
		// add/remove this Message from specified Floder's set of messages
		void save(Folder&);
		void remove(Folder&);
		void addFldr(Folder*);
		void remFldr(Folder*);
	private:
		std::string contents;    // actual message text
		std::set<Folder*> folders; // Folders that have this Message
		// Utility functions used by copy constructor, assignment, and destructor:
		// Add this Message to the Folders that point to the parameter
		void put_Msg_in_Folders(const std::set<Folder*>&);
		// remove this Message from every Folder in folders
		void remove_Msg_from_Folders();
};

#endif
