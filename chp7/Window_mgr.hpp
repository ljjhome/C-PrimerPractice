#ifndef WINDOW_MGR
#define WINDOW_MGR
#include <vector>
#include "screen.hpp"
class Window_mgr {
class Screen;
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24,80,' ')};
};

#endif
