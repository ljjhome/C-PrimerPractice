**Exercise 13.1** What is a copy constructor? When is it used?<br />

**Answer:** A constructor is the copy constructor if its first parameter is a reference to the class type and any additional parameters have default values. It is used in copy initialization, parameters and return values.


**Exercise 13.2** Explain why the following declaration is illegal:
```cpp
Sales_data::Sales_data(Sales_data rhs);
```
**Answer:** because we need a reference in the copy constructor.


**Exercise 13.3** What happens when we copy a `StrBlob`? What about `StrBlobPtr`?<br />
**ANswer:** When we copy a `StrBlob` the number of reference will be increased by one. When we copy a `StrBlob` it will not incresed by one.


**Exercise 13.3** Assuming `Point` is a class type with a `public` copy constructor, identify each use of the copy constructor in this program fragment:
```cpp
Point global;
Point foo_bar(Point arg){ // copy constructor for argument
    Point local = arg; // copy constructor
    Point *heap = new Point(global); // copy constructor
    *heap = local;  // simply a copy
    Point pa[4] = {local, *heap}; // copy constructor for array
    return *heap; //copy constructor for non reference return 
}
```


**Exercise 13.5** Given the following sketch of a class, write a copy constructor that copies all the members. Your constructor should dynamically allocate a new `string` and copy teh object to which `ps` points, rather than copying `ps` itself.
```cpp
class HasPtr{
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0) {}
    //HasPtr(const HasPtr& hp):(*ps)(*hp.ps),i(hp.i){}
    HasPtr(const HasPtr& hp):ps(new std::string(*hp.ps)),i(hp.i){}
private:
    std::string *ps;
    int i;
}
```


**Exercise 13.6** What is a copy-assignment operator? When is this operator used? What does the synthesized copy-assignment operator do? When is it synthesized?<br />
**Answer:** a operator controls how object of that class are assigned. It is used when we want to assign a class object to a new one. When we don't define a specific copy-assignment operator the compiler will generate one for us. For some class the synthetic copy-assignment operator disallow assignement. Otherwise, it assigns each non `static` member of the right-hand object to the corresponding member of the left-hand object.


**Exercise 13.7** What happen when we assign one `StrBlob` to another? What about StrBlobPtr?<br />
**Answer:** The usecount for `StrBlob` will add one, while the usecount for `StrBlobPtr` will not.


**Exercise 13.8** Write the assignment operator for the`HasPtr` class. As with the copy constructor, your assignment operator should copy the object to which `ps` points<br />
```cpp
class HasPtr{
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0) {}
    //HasPtr(const HasPtr& hp):(*ps)(*hp.ps),i(hp.i){}
    HasPtr(const HasPtr& hp):ps(new std::string(*hp.ps)),i(hp.i){}
    HasPtr& operator=(const HasPtr &hp){
        *ps = *hp.ps; // should be ok to use
        i = hp.i;
    }
private:
    std::string *ps;
    int i;
}
```


**Exercise 13.9** What is a destructor? What does the synthesized destructor do? When is a destructor synthesized?<br />
**Answer:** The destructor operates inversely to the constructors: Constructors initialize the non`static` data members of an object and may do other work; Destructors do whatever work is needed to free the resources used by an object and destroy the non`static` data members of the object.<br />
In a destructor, the function body is executed first and then the members are destroied. Members are destroyed in reverse order from teh order in which they were initialized.<br />
The compiler defines a synthesized destructor for any class that does not define its own destructor. As with the copy constructor and the copy-assignment operator, for some class, the synthesized destructor is defined to disallow objects of the type from being destroyed. Otherwise, the synthesized destructor has an empty function body.


**Exercise 13.10** What happens when a `StrBlob` object is destroyed? What about a `StrBlobPtr`?<br />
**Answer:** When `StrBlob` is destroyed the usecount minus one. When `StrBlobPtr` is destroyed, nothing happens.



**Exercise 13.11** Add a destructor to your `HasPtr` class from the previous exercise.
```cpp
class HasPtr{
public:
    HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0) {}
    //HasPtr(const HasPtr& hp):(*ps)(*hp.ps),i(hp.i){}
    HasPtr(const HasPtr& hp):ps(new std::string(*hp.ps)),i(hp.i){}
    ~HasPtr(){}
    HasPtr& operator=(const HasPtr &hp){
        *ps = *hp.ps; // should be ok to use
        i = hp.i;
    }
private:
    std::string *ps;
    int i;
}
```


**Exercise 13.12** How many destructor calls occur in the following code fragment?
```cpp
bool fcn(const Sales_data *trans, Sales_data accum){
    Sales_data item1(*trans), item2(accum);
    return item.isbn != item2.isbn();
}// accum, item1 and item2 are destroyed.
```


**Exercise 13.14** Assume that `numbered` is a class with a default constructor that generates a unique serial number for each object, which is stored in a data member named `mysn`. Assuming `numbered` uses the synthesized copy control members and given the following functions, What output does the following code produce?
```cpp
void f(numbered s ){cout << s.mysn<<endl;}

numbered a, b = a, c = b;
f(a);//cout << a.mysn
f(b);//cout << a.mysn
f(c);//cout << a.mysn
```


**Exercise 13.15** Assume `numbered` has a copy contructor that generate a new serial number. Does that change the output of the calls in the previous exercise? If so, why? What output gets generated?
```cpp
numbered a;//default constructor
numbered b = a; // copy constructor, a new mysn
numbered c = b; // copy constructor.
f(a); // copy constructor cout<<new.mysn
f(b); // copy constructor cout << new.mysn
f(c); // copy constructor cout << new.mysn
```


**Exercise 13.16** what if the parameter in `f` were `const numbered &`? Does that change the output? If so, why? What output gets generated?
```cpp
f(a); // cout << a.mysn;
f(b); // cout << b.mysn;
f(c); // cout << c.mysn;
```


**Exercise 13.23** Compare the copy-control members that you wrote for the solutions to the previous section's exercise to the code presented here. Be sure you understand teh differences, if any, between your code and ours.<br />
**Answer:** There are actually some differences between my solution and the given example. I used `*ps = *p.ps;`. and this implementation can successfully compiled and run. I think it is ok to implement that way. 


**Exercise 13.24** What would happend if the version of `HasPtr` in this section didn't define a destructor? What if `HasPtr` didn't define the copy constructor?<br />
**Answer:** if we didn't define the destructor, the resources allocated by `new` will not be correctly collected. If we didn't define the copy constructor, they will point to the same memory.


**Exercise 13.29** Explain why the calls to `swap` inside `swap(HasPtr &, HasPtr&)` do not cause a recursion loop.<br />
**Answer:** beause the program first decide which swap to use, it will find a best fit `swap` to avoid the loop.


**Exercise 13.32** Would the pointerlike version of `HasPtr` benefit from defineing a swap function? if so, what is the benefit? if not, why? <br />
**ANswer:** there is no explict memory allocation in pointerlike version, so the improvement is not obvious.


**Exercise 13.33** Why is the paramter to the `save` and `remove` members of `Message` a `Folder&`? Why didn't we define that parameter as `Folder`? Or `const Folder&`? <br />
**ANswer:** Because we want to add members to the Folder object, we have to use a reference rather than a const or `Folder`.


**Exercise 13.35** What would happen if `message` used the synthesized versions of the copy-control members?<br />
**Answer:** the new message will not be added to the corresponding folders.


**Exercise 13.41** Why did we use postfix increment in the call to construct inside `push_back`? What would happend if it used the prefix increment?<br />
**Answer:** The first element will be null.


**Exercise 13.45** Distinguish between an rvalue reference and an lvalue reference.<br />
**ANswer:** Like any reference, an rvalue reference is just another name for an object. As we know, We cannot bind regular references-which we'll refer to as lvalue refereenceswhen we need to distinguish them from rvalue references- to expressions that require a conversion, to literals, or to expressions that return an rvalue. Rvalue references have the opposite binding properties: We can bind an rvalue reference to these kinds of expressions, but we cannot directly bind an rvalue reference to an lvalue.


**Exercise 13.46** Which kind of reference can be bound to the following initializer?
```cpp
int f();
vector<int> vi(100);
int &&ri = f();
int &r2 = vi[0];
int &r3 = ri; // ri is an variable;
int && r4 = vi[0] * f();
```

**Exercise 13.52** Explain in detail waht happends in the assignments of the `HasPtr` objects on page 541. In particular, describe step by step waht happens to value of `hp`, `hp2` and of the `rhs` parameter in the `HasPtr` assignment operator.<br />
**ANswer:** In the first assignment, the right-hand operand is an lvalue, so the move constructor is not viable. The copy constructor will be used to initialize `rhs`. The copy constructor will allocate a new `string` and copy the `string` to which `hp2` points.<br />
In the second assignment, we invoke `std::move` to bind an rvalue reference to hp2. In this case, both the copy consructor and the move constructor are viable. However, because the argument is an rvalue reference, it is an exact match for the move constructor. The move constructor copies the pointer from `hp2`. It does not allocate any memory.


**Exercise 13.56** What would happen if we defined `sorted` as :
```cpp
Foo Foo::sorted() const &{
    Foo ret(*this);
    return ret.sorted();
}// This will cause a forever loop
```


**Exercise 13.57** What if we defined `sorted` as:
```cpp
Foo Foo::sorted() const &{
    return Foo(*this).sorted();
}// This one is ok, because it will call rvalue sorted
```



