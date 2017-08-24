#include "screen.hpp"

Screen::Screen(pos w, pos h):width(w),height(h),contents(w*h,' '){}
Screen::Screen(pos w, pos h, char c):width(w), height(h), contents(w*h, c){}

