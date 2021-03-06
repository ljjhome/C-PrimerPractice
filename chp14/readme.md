**Exercise 14.1** In what ways does an overloaded operator differ from a build-in opertor? In what ways are overloaded operators the same as build-in operators?<br />
**ANswer:** When they are designed for classobject. When they are designed for build-in types.


**Exercise 14.3** BOth `string` and `vector` define an overloaded `==` that can be used to compare objects of those types. Assuming `svec1` and `svec2` are vectors that hold strings, identify which version of `==` is applied in each of the following expression<br />
**(a)** `"combine" == "stone"; // string version` <br />
**(b)** `svec1[0] == svec2[0]; // string version` <br />
**(c)** `svec1 == svec2; //vector version` <br />
**(d)** `svec1[0] == "stone"; // string version`


**Exercise 14.4** Explain how to decide whether the following should be class members<br />
**(a)** `%` not class member<br />
**(b)** `%=` class member <br />
**(c)** `++` class member <br />
**(d)** `->` class member<br />
**(e)** `<<` depends <br />
**(f)** `&&` not class member <br />
**(g)** `==` not class member<br />
**(h)** `()` class member


**Exercise 14.5** In exercise 7.40 you wrote a sketch of one of the following classes. Decide waht, if any, overloaded operators your class should provide<br />
**(a)** Book. +,-,+=,-=<br />
**(b)** Date. +,-,+=,-=<br />
**(c)** Employee. <br />
**(d)** Vehicle. +,-,+=,-=<br />
**(e)** Object. +,-,+=,-=<br />
**(f)** Tree. +,-,+=,-=<br />


**Exercise 14.10** Dscribe the behavior of the `Sales_data` input operator if given the following input <br />
**(a)** 0-201-99999-9 12 23.4 ok<br />
**(a)** 12 23.4 0-201-99999-9 not ok the revenue is 0


**Exercise 14.11** Waht, if anything, is wrong with the following `Sales_data` input operator? What would hapend if we gave this operator the data in the previous exercise?
```cpp
istream & operator>>(istream in, Sales_data &s){
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    s.revenue = s.units_sold * price;
    return in;
}
/* it doesn't handle the illegal input which may cause wrong value.
```


**Exercise 14.13** Which other arithmetic operators do you think `Sales_data` ought to support? Define any you think the class should include.<br />
```cpp
/* - -= * / > < */
void operator-=(const Sales_data &sd){
    units_sold -= sd.units_sold;
    revenue -= sd.revenue;
}

Sales_data operator-(const Sales_data &sd1, const Sales_data &sd2){
    Sales_data st = sd1;
    st-=sd2;
    return st;
}

Sales_data operator*(const Sales_data &s, double rate){
    
    Sales_data st = s;
    st.units_sold *= rate;
    st.revenue *= rate;
    return st;
}
```


**Exercise 14.14** Why do you think it is more efficient to define operator+ to call operator+= rather than other way around?<br />
**ANswer:** because it is more concise.


**Exercise 14.33** How many operands may an overloaded function-call operator take?<br />
**Answer:** any



    
**Exercise 14.41** Why do you suppose the new standard added lambdas? Explain when you would use a lambda and when you would write a class instead.<br />
**ANswer:** The lambda function is more easy to write if it is not too complex. if we want to use the function many times, we'd better use a class.


**Exercise 14.46** Explain whether defining these `Sales_data` conversion operators is a good idea and whether they should be `explicit` <br />
**Answer:** not intuitive. If we have to we should define it as `explicit`.


**Exercise 14.47** Explain teh difference between these two conversion operators:
```cpp
struct Integral{
    operator const int(); //turn an object into const int
    operator int() const; //the function is a const member function
}
```


**Exercise 14.50** Show the possible class-type conversion sequences for teh initializations of `ex1` and `ex2`. Explain whetehr the intiazliation are legal or not.
```cpp
struct LongDouble{
    LongDouble(double = 0.0);
    operator double();
    operator float();
};
LongDouble ldObj;
int ex1 = ldObj; // double to int, float to int
float ex2 = ldObj; // float to int.
```


**Exercise 14.51** Show the conversion sequences (if any) needed to call each version of `calc` and explain why the best viable function is selected.
```cpp
void calc(int);
void calc(LongDouble);
double dval;
calc(dval); // best:calc(int)
```
**ANswer:** because the class-type conversion has lowest rank<br />
1.exact match<br />
2.const conversion<br />
3.promotion<br />
4.arithmetic or pointer conversion<br />
5.class-type conversion.


**Exercise 14.52** Which operator+ if any, is selected for each of the addition expressions? List the candidate functions, teh viable functions, and teh type conversions on the arguments for each viable function:
```cpp
struct LongDouble{
    LongDouble operator+(const SmallInt&);
};
LongDouble operator+(LongDouble&, double);
SmallInt si;
LongDouble ld;
ld = si + ld; // no operator+
ld = ld + si; //member operator+
```


**Exercise 14.53** Given the definition of `SmallInt` on page 588, determine whether the following addition expression is legal. If so, what addition operator is used? If not, how might you change the code to make it legal?
```cpp
SmallInt s1;
double d = sl + 3.14;//wrong!!!: legal 3.14to smallint then int to double
```
**Answer:** ambiguous:
```cpp
SmallInt s1;
double d = s1 + SmallInt(3.14);
```
