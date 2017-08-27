**Exercise 7.8** Why does read define its `Sale_data` parameter as a plain referce and `print` define its parameter as reference to const?<br />
**Answer:** because we have to make change to the argument passed into read.We don't change the argument passed into print


**Exercise 7.10** What does the condition in the following `if` statement do? `if(read(read(cin,data1),data2))` <br />
**Answer:** `cin>>data1>>data2;`


**Exercise 7.14** Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.<br />
```cpp
Sale_data::Sale_data():bookNo(""),units_sold(0),revenue(0.0){}
```


**Exercise 7.16** What, if any, are the constraints on where and how often an access specifier may appear inside a class definition? What kinds of members should be defined after a `public` specifier? What kinds should be `private`?<br />
**Answer:** no contraints on where and how often the access specifier appear inside a class. `public` members define the interface to the class. `private` members encapsulate the implemetations.


**Exercise 7.17** What, if any, are the differences between using `class` and `struct`?<br />
**Answer:** the default member in `class` are private while the default member in `struct` are public.


**Exerise 7.18** What is encapsulation? Why is it useful?<br />
**Answer:** define as a private member. User will not worry about the implementation.


**Exercise 7.19** Indicate which members of your `Person` class you would declare as `public` and which you would declare as `private`. Explain your choice.<br />
**Answer:** 
```cpp
string name; //private
string address; //private
string getName(); //public
string getAddress(); //public
```


**Exercise 7.20** When are friends useful? Discuss the pros and cons of using friends.<br />
**Answer:** A class can allow another class or function to access its non `pblic` members by making that class or function a friend.<br />
**Pros** functions will have access to private members.<br />
**Cons** The encapsulation is not as good.


**Exercise 7.25** Can `screen` safely rely on teh default versions of copy and assignment? if so, why? if not, why not?<br />
**Answer:** yes.


**Exercise 7.30** It is legal but redundant to refer to members through the `this` pointer. Discuss the pros and cons of explicitly using the `this` pointer to access members<br />
**Answer:** It will be more clear to read, but words to write. The variable with same name of the member variable can be used.


**Exercise 7.33** What would happend if we gave `Screen` a `size` member defined as follows? fix any problems you identify.<br />
```cpp
pos Screen::size() const //Screen::pos
{
    return height * width;
}
```


**Exercise 7.34** What would happend if we put the `typedef` of `pos` inthe `Screen` cass on Page 285 as the last line in the class?<br />
**Answer:** the class cannot be compiled, because the compiler will look for the type before the declaration of the function.


**Exercise 7.35** Explain the following code, indicating which definition of `Type` or `initval` is used for each use of those names. Say how you would fix any errors<br />
```cpp
typedef string Type; 
Type initVal(); // string
class Exercise{
public:
    typedef double Type;
    Type setVal(Type); //double double
    Type initVal(); //double
private:
    int val;
};
Type Exercise::setVal(Type param){ //string double 
    val = param +initVal();
    return val;
}
```


**Exercise 7.36** The following initializer is in error. Identify and fix the problem.<br />
```cpp
struct X{
    X(int i, int j):base(i),rem(base %j){}
    int rem, base;
}; //initilize rem fisrt with undefine base
```


**Exercise 7.37** Using the version of `Sale_data` from this section, determine which constructor is used to initialize each of the following variables and list the values of the data member in each object:<br />
```cpp
Sale_data first_item(cin);//Sales_data(std::istream &is)
int main(){
    Sale_data next;//Sale_data(std::string s = "")
    Sale_data last("8-888-888888-88");//Sale_data(std::string s = "")
}
```


**Exercise 7.38** We might want to supply `cin` as a default argument to the constructor that takes an `istream&`. Write the constructor declaration that use `cin` as a default argument<br />
```cpp
Sale_data(std::istream& is = std::cin);
```


**Exercise 7.39** Would it be legal for both the constructor that takes a `string` and the one that takes an `istream&` to have default argument?<br />
**Answer:** no, we don't know which one is the default initiazlier.


**Exercise 7.40** Choose one of the following abstractions (or an abstraction of your own choosing). Determine waht data are needed in teh class. Provide an appropriate set of constructors. Explain your decisions.<br />
**(a)** `Book`
```cpp
class Book{
public:
    Book(string name, string author, string publisher, unsigned year):name_(name),author_(author), publisher_(publisher), year_(year){}
    Book(string name = ""):Book(name,"","",0){}
    Book(string name, string publisher):Book(name, publisher, "",0){}
    Book(string name, string publisher, string author):Book(name, publisher, author, 0):{}
private:
    string name_;
    string author_;
    string publisher_;
    unsigned year_;
};
```
**(b)** `Date`
```cpp
class Date{
    Date(string MM_DD_YY = "");
    Date(int mm, int dd, int yy);
};
```
**(c)** `Employee`
```cpp
class Employee{
    Employee(const string name = "");
    Employee(const string name, double salary);
};
```


**Exercise 7.44** Is the following declaration legal? if not, why not?<br />
```cpp
vector<NoDefault> vec(10);//illegal, because there is no default initilization.
```

**Exercise 7.45** What if we defined the vector in the previous exercise to hold object of type `c`?<br />
**Answer:** ok, because there is a default initializer for c.


**Exercise 7.46** Which, if any, of the following statements are untrue? Why?<br />
**(a)** A class must provide at least one constructor. no, we can have default one<br />
**(b)** A default constructor is a constructor with an empty parameter list. Maybe, we can have a non-empty list with default values in it.<br />
**(c)** If there are no meaningful default values for a class, the class should not provide a default constructor. no, it will have a default one.<br />
**(d)** If a class does not define a default constructor, the compiler generates one that initializes each data member to the default value of its associated type. no. if the user explicitly define a constructor then the complier will not generate one.


**Exercise 7.47** Explain whether the `Sales_data` constructor that takes a `string` should be `explicit`. What are the benefits of making the constructor `explicit`? What are the drawbacks?<br />
**Answer:** Better not be explicit. Sale-data should be define directly from the name of the item. So the convertion is intuitive.


**Exercise 7.48** Assuming the `Sale_data` constructors are not `explicit`, what operations happen during the definitions<br />
```cpp
string null_isbn("9-99999-99-999");
Sales_data item(null_isbn); //ok
Sales_data item2("999-999-999-99"); //ok
// if the constructor are explicit, then the item2 will not be constructed, because there is no convertion.
```


**Exercise 7.49** For each of teh three following declarations of `combine`, explain what happens if we call i.combines(s), where i is a`Sale_data` oject an s is a string.<br />
**(a)** `Sales_data &combine(Sales_data);` ok<br />
**(b)** `Sales_data &combine(Sales_data&);` not ok, we need const here<br />
**(c)** `Sales_data &combine(const Sales_data&) const` ok.


**Exercise 7.50** Determine whether any of your `Person` class constructors should be `explicit`.<br />
**Answer:** we don't need a `explicit`.


**Exercise 7.51** Why do you think `vector` defines its single-argument constructor as `explicit`, but `string` does not?<br />
**Answer:** because it may be confusing to use a vector without an explicitly conversion. On the other hand, string is more intuitive.


**Exercise 7.52** Using our first version of `Sale_data` from page 61 explain the following initalization. Identify and fix any problems.<br />
```cpp
Sale_data item = {"000-000-00",24,14.22};
// item.bookNo = "000-000-00";
// item.units_sold = 24;
// item.revenue = 14.22;
```


**Exercise 7.53** Define your own version of `Debug`<br />
```cpp
class Debug{
public:
    constexpr Debug(bool b = true):hw(b), io(b), other(b){}
    constexpr Debug(bool h, bool i, bool o):hw(h), io(i), other(o){}
    constexpr bool any(){
        return hw||io||other;
    }
    void set_io(bool b){io = b;}
    void set_hw(bool b){hw = b;}
    void set_other(bool b){other = b;}
private:
    bool hw;
    bool io;
    bool other;
}
```


**Exercise 7.54** Should the members of `Debug` that begin with `set_` be declared as `constepxr`? if not, why not?<br />
**Answer:** no. because the only executable statement a constexpr function can have is return function.


**Exercise 7.55** Is the `Data` class from page 266 a literal class? If not, why not?<br />
**Answer:** no, because it doesn't have a constexpr constructor.


**Exercise 7.56** What is a `static` class member? what are the advantages of `static` members? How do they differ from ordinary members?<br />
**Answer:** a static member is shared by all objects and not bound to any object. We must define and initialize the static members outside the class. However, we can initizalie a static member inside class with a const or constepxr. A static member can have incomplete type.


**Exercise 7.57** write your own version of the Account class.<br />
```cpp
class Account{
    
public:
    void calculate(){
        amount += amount * interestRate;
    }
    static double rate(){return interestRate;}
private:
    string user_name;
    string user_address;
    double money;
    static interestRate;
    static double initRate();
}
```


**Exercise 7.58** Which, if any, o the follwoing `static` data member declarations and definitions are errors? explain why.<br />
```cpp
//example.h
class Example{
public:
    static double rate = 5.6; //error
    static const int vecSize = 20;//ok
    static vector<double> vec(vecSize);//error
};

//example.c
#include "example.h"
double Example::rate;
vector<double> Example::vec;
