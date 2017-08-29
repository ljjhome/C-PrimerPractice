**Exercise 12.1** How many elements do b1 and b2 have at the end of this code?<br />
```cpp
StrBlob b1;
{
    StrBlob b2 = {"a","an","the"};
    b1 = b2;
    b2.push_back("about");
}
// b2 will be destroyed. b1 has 4 elements.
```


**Exercise 12.3** Does this class need `const` versions of `push_back` and `pop_back`? If so, add them. If not, why aren't they needed?<br />
**Answer:** Wrong:: no, because the two function change the argument.<br />
Right:: yes we can because data is a pointer, it can be const because what we modify is the object it points to.


**Exercise 12.4** In our `check` function we didn't check whether `i` was greater than zero. Why is it okay to omit that check?<br />
**Answer:** because the size-type is always positive.


**Exercise 12.5** We did not make the constructor that takes an `initizalizer_list explicit` . Discuss the pros and cons of this choice.<br />
**Answer:** pros: the usage will be explict and clear to understand. cons: sometimes need more effort. 


**Exercise 12.8** Explain what if anything is wrong with the following function<br />
```cpp
bool b(){
    int *p = new int;
    //...
    return p;
}
```
**Answer:** the p should be deleted.


**Exercise 12.9** Explain what happens in the follwoing code<br />
```cpp
int *q = new int(42), *r = new int(100);
r = q; //r points to 42
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;// r2 points to 42 and 100 is freed.
```


**Exercise 12.10** Explain whether the following call to the process function defined on page is correct. If not, how would you correct the call<br />
```cpp
shared_ptr<int>p(new int(42));
process(shared_ptr<int>(p));
```
**ANswer:** right, we copy a new sharedptr from p



**Exercise 12.11** What would happen if we called `process` as follows?
```cpp
process(shared_ptr<int>(p.get()));
```
**ANswer:** the memory will be freed.


**Exercise 12.12** Using the declarations of `p`and `sp`explain each of the following calls to `process`. If the call is legal, explain what it does. If the call is illegal, explain why.
```cpp
auto p = new int();
auto sp = make_shared<int>();
```
**(a)** `process(sp); // legal`<br />
**(b)** `process(new int()); //illegal, explicit conversion`<br />
**(c)** `process(p);//illegal, explicit conversion`<br />
**(d)** `process(shared_ptr<int>(p));//legal`


**Exercise 12.13** What happens if we execute the following code?<br />
```cpp
auto sp = make_shared<int>();
auto p = sp.get();
delete p; //p cannot be deleted.
```


**Exercise 12.14** Write your own version of a function that uses a `shared_ptr` to manage a connection.<br />
```cpp
struct destination;
struct connection;
connection connect(destination* );
void disconnect(connection*);
void end_connection(connection *p){
    disconnect(*p);
}
void f(destination &d){
    connection c = connect(&d)
    shared_ptr<connection> p(&c, end_connection); 
}
```


**Exercise 12.16** Compilers don't always give easy-to-understand error messages if we attempt ot copy or assign a `unique_ptr`. Write a program that contains these errors to see how your compiler diagnose them.<br />
```cpp
unique_ptr<string> p1(new string("haha"));
unique_ptr<string> p2(p1);
unique_ptr<string> p3;
p3 = p1;
```


**Exercise 12.17** Which of the following `unique_ptr` declarations are illegal or likely to result in subsequent program error? Explain what the problem is with each one.
```cpp
int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_prt<int> IntP;
```
**(a)** `IntP p0(ix); //illegal`<br />
**(b)** `IntP p1(pi); //illegal`<br />
**(c)** `IntP p2(pi2);//illegal dangling pointer` <br />
**(d)** `IntP p3(&x); //illegal`<br />
**(e)** `IntP p4(new int(2014)); //legal`<br />
**(f)** `IntP p5(p2.get()); //illegal`


**Exercise 12.18** Why doesn't `shared_ptr` have a `release` member?<br />
**Answer:** because it doesn't own a object.


**Exercise 12.21** We could have written `StrBlobPtr` deref member as follows:
```cpp
std::string& deref() const
{
    return (*check(cur,"derefernece past end"))[curr];
}
```
Which version do you think is better?<br />
**Answer:** original one is better, this one looks complicated.


**Exercise 12.22** What changes would need to be made to `StrBlobPtr` to create a class that can be used with a `const StrBlob`? Define a class named `ConstStrBlobPtr` that can point to a `const StrBlob`


**Exercise 12.25** Given the following new expression, how would you delete pa?
```cpp
int *pa = new int[10];
delete [] pa;
```



