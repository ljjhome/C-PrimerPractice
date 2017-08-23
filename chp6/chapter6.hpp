#ifndef CHAPTER6_HPP
#define CHAPTER6_HPP
#include <iostream>
#include <string>

inline bool isShorter(const std::string & str1, const std::string & str2){
    
   return (str1.size()<str2.size())? true:false; 

}



#endif // CHAPTER6_HPP
