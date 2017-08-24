#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <string>

class Screen {
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos w, pos h);
    Screen(pos w, pos h, char c);
    char get() const{
        return contents[cursor]; 
    }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos width = 0,height = 0 ;
    std::string contents;
};


#endif //SCREEN_HPP
