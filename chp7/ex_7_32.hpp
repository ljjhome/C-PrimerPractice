#ifndef EX_7_32_HPP
#define EX_7_32_HPP

#include <vector>
#include <iostream>

class Screen;

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    inline void clear(ScreenIndex);
private:
    std::vector<Screen> screens;
};

class Screen{
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos = std::string::size_type;

    ...
};

inline void Window_mgr::clear(ScreenIndex i){
    
}


#endif //EX_7_32_HPP
