**Exercise 15.1** What is a virtual member?<br />
**Answer:** In c++, a base class must distinguish the functions it expects its derived classes to override from those that it expects its derived classes to inherit without change. The base class defines as virtual those functions it expects its derived classes to override. 


**Exercise 15.2** How does the `protected` access specifier differ from `private`?<br />
**Answer:** A derived class inherits the mumbers defined in its base class. However, the member functions in a derived class may not necessarily access the members that are inherited from the base class. Like any other code that uses the base class, a derived class may access the `public` members of its base class, but may not access the `private` members. However, sometimes a base class has members that it wants to let its drived classes use while still prohibiting access to those same members by other users. We specify such members after a `protected` access specifier.


**Exercise 15.4** Which of the following declarations, if any, are incorrect? Explain why.
```cpp
class Base {};
```
**(a)** `class Drived: public Drived {}; // wrong`<br />
**(b)** `class Derived : private Base{}; // ok ` <br />
**(c)** `class Drived : public Base; // wrong` <br />


**Exercise 15.8** Define static type and dynmamic type.<br />
**ANswer:** The static type of an expression is always known at compile time it is the type with which a variable is declared or that an expression yields. The dynamic type is the type of the object in memory thta the variable or expression represents. The dynamic type may not be known until run time.


**Exericse 15.9** When is it possible for an expressions static type to differ from its dynamic type? Given three examples in which the static and dynamic type differ.<br />
```cpp
Bulk_quote b1;
Quote q1(b1);
print_total(cout,b1,n);
```


**Exercise 15.10** Recalling the disscussion from p.311, explain how the program on page 317 that passed an `ifstream` to the `Sales_dta` `read` function works.<br />
**Answer:** The function needs a `istream` and `ifstream` is derived from `istream` so we can pass a `ifsteam`.


**Exercise 15.12** Is it ever useful to declare a member function as both `override` and `final`? Why or Why not?<br />
**ANswer:** it can be defined like that. When a function override another one in base class, and ew don't want other functions to override this one.


**Exercise 15.13** Given the following classes, explain each `print` function:<br />
```cpp
class base{
public:
    string name(){return basename;}
    virtual void print(ostream &os){os << basename;} // in base class
private:
    string basename;
};
class derived: public base{
public:
    void print(ostream& os){print(os); os<< " "<<i;}} //override, but will cause endless loop.
    // {base::print(os);os<<" "<<i;}
private:
     int i;
};
```


**Exercise 15.14** Given teh classes from the previous exercise and the following object, determine which function is called at runtime<br />
```cpp
base bobj; base *bp1 = &bobj; base &br1 = bobj;
derived dobj; base *bp2 = &dobj; base &br2 = dobj;
```
**(a)** `bobj.print(); // base` <br />
**(b)** `dobj.print(); //derived ` <br />
**(c)** `bp1->name(); // base` <br />
**(d)** `bp2->name(); // base` <br />
**(e)** `br1.print(); // base` <br />
**(f)** `br2.print(); // base` <br />


**Exercise 15.18** Given the classes from page 612 and page 613, and assuming each object has the type specified in the comments, determine which of these assignments are leagal. Explain why those that are illegal aren't allowed:
```cpp
Base *P = &d1; // d1 has type Pub_derv; legal
p = &d2; // d2 has type Priv_derv; illegal
p = &d3; // d3 has type Prot_derv; illegal
p = &dd1; // dd1 has type Derived_from_public legal
p = &dd2; // dd2 has type Derived_from_Private illegal
p = &dd3; // dd3 has type Derived_from_Protected illegal
```


**Exercise 15.19** Assume that each of the classes from page 612 and page 613 has a member function of the form:
```cpp
void memfcn(Base &b) { b = *this; }
class Pub_Derv; // legal
class Priv_derv; // illegal
class Prot_derv; // legal
class Derived_from_public; // legal
class Derived_from_private; // illegal
class Derived_from_protected; // legal
```


**Exercise 
