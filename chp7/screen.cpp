#include "screen.hpp"

Screen::Screen(pos w, pos h):width(w),height(h),contents(w*h,' '){}
Screen::Screen(pos w, pos h, char c):width(w), height(h), contents(w*h, c){}
Screen Screen::move(pos r, pos c){
    cursor = r*width+c;
    return *this;
}

inline char Screen::get(pos r, pos c) const{
    return contents[r*width+c];
    
}
