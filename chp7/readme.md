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



