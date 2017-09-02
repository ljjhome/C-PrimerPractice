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



