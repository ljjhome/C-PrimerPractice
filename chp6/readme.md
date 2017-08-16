**Exercise 6.1** What is the difference between a parameter and an argument?<br />
**Answer:** Arguments are the initializers for a function's parameter


**Exercise 6.2** Indicate which of the following functions are in error and why. Suggest how you might correct the problems.<br />
**(a)** 
```cpp
int f(){ // should be string f() because we return s..
    string s;
    //...
    return s;
}
```
**(b)** `f2(int i){/* .. */ }` return type missing<br />
**(c)** `int calc(int v1, int v1){}` should have different names<br />
**(d)** `double square(double x) return x*x` function body need braces


**Exercise 6.13** Assuming `T` is the name of a type, explain the difference between a function declared as `void f(T)` and `void f(T&)`<br />
**Answer:** `void f(T&)` get a reference of T, which can modify the argument passed in.


**Exercise 6.14** Given an example of when a parameter should be a reference type. Given an example when a parameter should not be a reference.<br />
**Answer:** When we want to modify the parameter passed in we should use a reference, otherwise we don't.


**Exercise 6.15** Explain the rationale for the type of each of `find_char`'s parameters in particular, why is `s` a reference to const bu occurs is a plain reference? Why are these parameters references, but the char parameter `c` is not? What would happend if we made `s` a plain reference? What if we made occurs a reference to `const`?<br />
**Answer:** we use a const reference for `s` because we don't want to change it in the function. if we don't use const, we may face the risk of changing it. A plain reference for `occurs` because we would like to change it in the function. If we use a const, then it cannot be changed. a char c will not be changed, so we don't need a const and it is easy to copy, so we don't use a reference to it. 


**Exercise 6.16** The following function, although legal, is less useful than it might be. Identify and correct the limitation on this function:
```cpp
bool is_empty(string& s){ //use const string &s
    return s.empty();
}
```


**Exercise 6.18** Write declarations for each of the following functions. When you write these declarations, use the name of the function to indicate what the function does.<br />
**(a)** A function named `compare` that returns a `bool` and has two parameters that are references to a class named `matrix`.
```cpp
bool compare(matrix &m_a, matrix &m_b);
```
**(b)** A function named `change_val` taht returns a `vector<int>` iterator and takes two parameters: One is an `int` and the other is an iterator for a vector<int>
```cpp
vector<int>::iterator change_val(int ival, vector<int>::iterator it);
```


**Exercise 6.19** Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.
```cpp
double calc(double);
int count(const string&, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
```
**(a)** `calc(23.4, 55.1)` illegal, one parameter only<br />
**(b)** `count("abcda",'a')` legal<br />
**(c)** `calc(66)` legal int to double<br />
**(d)** `sum(vec.begin(), vec.end(),3.8)` legal double to int


**Exercise 6.20** When should reference parameters be references to `const`?What happend if we make a parameter a plain reference when it could be a reference to `const`?<br />
**Answer:** we don't want to change it in function. we can not pass a const parameter to the funciton.
