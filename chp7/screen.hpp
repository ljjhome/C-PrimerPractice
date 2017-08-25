#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <string>
#include "Window_mgr.hpp"
class Screen {

public:
    typedef std::string::size_type pos;
    using ScreenIndex = std::vector<Screen>::size_type;

    friend void Window_mgr::clear(ScreenIndex);
    Screen() = default;
    Screen(pos w, pos h);
    Screen(pos w, pos h, char c);
    char get() const{
        return contents[cursor]; 
    }
    inline char get(pos ht, pos wd) const;
    Screen move(pos r, pos c);
    Screen set(const char c){
        contents[cursor] = c; 
        return *this;
    }
    const Screen  display(std::ostream & os) const{
        do_display(os);
        return *this;
    }
    Screen display(std::ostream &os){
        do_display(os);
        return *this;
    }
private:
    pos cursor = 0;
    pos width = 0,height = 0 ;
    std::string contents;
    void do_display(std::ostream &os) const{
        os<<contents; 
    };
};


#endif //SCREEN_HPP
