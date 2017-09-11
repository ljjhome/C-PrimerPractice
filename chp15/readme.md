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



