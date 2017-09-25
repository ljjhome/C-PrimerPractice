#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <string>
#include <iostream>
template<unsigned W, unsigned H> 
class Screen {
public:
	friend std::ostream& operator<< (std::ostream& os, const Screen<W,H>& sc);
	typedef std::string::size_type pos;	
	Screen():cursor(0),height(H),width(W){}
	Screen(pos ht, pos wd, char c):cursor(0), height(ht), width(wd), contents(ht*wd,c){}
	char get() const{
		return contents[cursor];
	}
	char get(pos ht, pos wd) const {
		return contents[(ht-1)*width+wd-1];
	}

private:
	pos cursor;
	pos height;
	pos width;
	std::string contents;
};

template<unsigned W, unsigned H>
std::ostream& operator<<(std::ostream& os, const Screen<W,H>& sc){
	os<<"the height of the screen: "<< sc.height<<"  "<<"the width of the screen: "<<sc.width;	
	return os;
}

#endif //SCREEN_HPP
