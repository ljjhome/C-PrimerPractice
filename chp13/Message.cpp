#include "Message.hpp"

Message::Message(const Message& m):contents(m.contents),folders(m.folders){ 
    add_to_Folders(m);
}
Message & Message::operator=(const Message& m){
    remove_from_Folders();
    contents = m.contents;
    folders = m.folders;
    add_to_Folders(m);
    return *this;
}
void Message::save(Folder& f){
    folders.insert(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f){
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message& m){
    for(auto f: m.folders){
        f->addMsg(this); 
    }
}

void Message::remove_from_Folders(){
    for(auto f: this->folders){
        f->remMsg(this); 
    }
}

Message::~Message(){
    remove_from_Folders();
}
