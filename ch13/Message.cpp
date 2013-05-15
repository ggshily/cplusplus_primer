#ifndef MESSAGE_CPP
#define MESSAGE_CPP

#include "Message.h"

using namespace std;

Message::Message(const Message &m):
	contents(m.contents), folders(m.folders)
{
	put_Msg_in_Folders(folders);
}

void Message::put_Msg_in_Folders(const set<Folder*> & rhs)
{
	for(std::set<Folder*>::const_iterator beg = rhs.begin();
			beg != rhs.end(); ++beg)
		(*beg)->addMsg(this);  // *beg points to  a Folder
}

Message& Message::operator=(const Message &rhs)
{
	if (&rhs != this) {
		remove_Msg_from_Folders();  // update existing Folders
		contents = rhs.contents;
		folders = rhs.folders;
		// add this Message to each Folder in rhs
		put_Msg_in_Folders(rhs.folders);
	}
	return *this;
}

void Message::remove_Msg_from_Folders()
{
	for(std::set<Folder*>::const_iterator beg = folders.begin();
			beg != folders.end(); ++beg)
		(*beg)->remMsg(this);
}

Message::~Message()
{
	remove_Msg_from_Folders();
}

void Message::remove(Folder& fldr)
{
	remFldr(&fldr);
	fldr.remMsg(this);
}

void Message::save(Folder& fldr)
{
	addFldr(&fldr);
	fldr.addMsg(this);
}

void Message::addFldr(Folder* fldr)
{
	folders.insert(fldr);
}

void Message::remFldr(Folder* fldr)
{
	folders.erase(fldr);
}
#endif
