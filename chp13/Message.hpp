#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <string>
#include <iostream>
#include <set>
class Folder;
class Message{
public:
    explicit Message(const std::string &str = ""):contents(str){}
    Message(const Message&);
    Message & operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);

    void add_folder(Folder* f){
        folders.insert(f); 
    }
    void remove_folder(Folder* f){
        folders.erase(f); 
    }
private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

class Folder{
public:
    Folder();
    Folder(const Folder& f):msgs(f.msgs){
        for(auto msg : f.msgs){
            msg->add_folder(this);
        } 
    }
    Folder& operator=(const Folder& f){
        for(auto m:msgs){
            m->remove_folder(this); 
        }  
        msgs = f.msgs;
        return *this;
    }
    void addMsg(Message* m){
        msgs.insert(m);  
    }
    void remMsg(Message* m){
        msgs.erase(m); 
    }
private:
    std::set<Message*> msgs;
};
#endif // MESSAGE_HPP
