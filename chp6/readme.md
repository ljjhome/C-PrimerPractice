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


**Exercise 6.24** Explain the behavior of the following function. if there are problems in the code. explain what they are and how you might fix them.<br />
```cpp
void print(const int ia[10]){
    for (size_t i =0;i!=10;++i){
        cout <<ia[i] <<endl; 
    }
}
```
note that there is problem. `const int ia[10]` has nothing to do with ten. we can pass 244,12 and what ever we want. So we can use `const int (&a)[10]`instead



**Exercise 6.28** In the second version of `error_msg` that has an `errorCode` parameter, what is the type of `elem` in for loop?<br />
**Answer:** it is a reference to const string


**Exercise 6.29** When you use an `initializer_list` in a range `for` whould you ever use a reference as the loop control variable? if so ,why? if not, why not'<br />
**Answer:** The argument pass in are literal value, so we have to use a const reference or don't use a reference. 


**Exercise 6.31** When is it valid to return a reference? A reference to `const`?<br />
**Answer:** not a local parameter


**Exercise 6.32** Indicate whether the following function is legal. If so, explain what it does; if not, correct any errors and then explain it
```cpp
int &get(int *array, int index){
    return array[index];
}
int main(){
    int ia[10];
    for (int i = 0;i!=10;++i){
        get(ia,i) = i; //should use reference 
    }
}
```


**Exercise 6.34** What would happen if the stopping condition in `factorial`were `if(val!=0)`<br />
**Answer:** can not deal with non-positive number.


**Exercise 6.35** In the call to `fact`, why did we pass `val-1` rather than `val--`?<br />
**Answer:** `val--` will case unstopable loop.


**Exercise 6.36** Write the declaration for a function that returns a reference to an array of ten stringS, without using either a trailing return, `decltype` or a type alias<br />
**Answer:** 
```cpp
string (&func(string (&a)[10]))[10]
```


**Exercise 6.37** Write three additional declarations for the function in the previous exercise. One should use a type alias, one should use a trailing rturn, and the third should use decltype. which form do you prefer?<br />
**Answer:**
```cpp
typedef string aref[10];
aref& func(string (&aa)[10]);

auto funct(string (&aa)[10])-> string (&)[10];

string (&aa)[10];
decltype(aa) function(string (&ahah)10);
```


**Exercise 6.38** Revise the `arrPtr` function on to return a reference to the array.
```cpp
decltype(odd) & arrPtr(int i){
    return (i%2)?odd:even;
}
```


**Exercise 6.39** Explain the effect of the second declaration in each one of the following sets of declarations. Indicate which, if any, are illegal.<br />
**(a)** 
```cpp
int calc(int, int);
int calc(const int, const int); //illegal
```
**(b)** 
```cpp
int get();
double get(); //illegal
```
**(c)**
```cpp
int *reset(int*);
double * resect(double *); //legal
```


**Exercise 6.40** Which, if either, of the following declarations are errors? Why?<br />
**(a)** 
```cpp
int ff(int a, int b = 0, int c = 0); // legal
```
**(b)**
```cpp
char * init(int ht = 24, int wd, char backgrnd); // illegal 
```


**Exercise 6.41** Which if any, of the following calls are illegal? why?
which, if any, are legal but unlikely to match the programmer's intent? why?<br />
```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```
**(a)** `init(); //illegal`<br />
**(b)** `init(24,10); //legal`<br />
**(c)** `init(14,'*'); //legal but not match the intend`


**Exercise 6.42** Give the second parameter of `make_plural` a default argument of `'s'`. Test your program by printing singular and plural versions of the words success and failure<br />
**Answer:**
```cpp
string make_plural(size_t ctr, const string &word, const string &ending = "s")
make_plural(ctr, "success","es");
make_plural(ctr, "failure");
```


**Exercise 6.43** Which one of the following declarations and definitions would you put in a headere? In a source file? Explain why.<br />
**(a)** 
```cpp
inline bool eq(const BigInt&, const BigInt&){...} // header file
```
**(b)**
```cpp
void putValues(int *arr, int size); // source file
```



**Exercise 6.46** Would it be possible to define `isShorter` as a `constexpr`?if so, do so. If not, explain why not.<br />
**Answer:** no, the compilier can not descide the constexpr.


**Exercise 4.48** Explain what this loop does and whether it is a good use of `assert`
```cpp
string s;
while(cin>>s && s != sought){};
assert(cin);
```
**Answer:** input a string untill it is equal to sought. assert is meaningless here.


**Exercise 6.49** What is a candidate function? What is a viable function<br />
**Answer:** a set of functions that can be considered for the call are candidate functions. the set of functions that can be called with arguments in the given call are viable functions.


**Exercise 6.50** Given the declarations for `f` from page 242, list the viable functions, if any for each of the following calls. Indicate which function is the best match, or if the call is illegal whether there is no match or why the call is ambiguous.<br />
**(a)** f(2.56,42) none <br />
**(b)** f(43) f(int) <br />
**(c)** f(42,0) f(int, int) <br />
**(d)** f(2.56,3.14) f(double,double) <br />


**Exercise 6.52** Given the following declarations
```cpp
void manip(int, int);
double dobj;
```
What is the rank of each conversion in teh following calls?<br />
**(a)** manip('a','z') promotion<br />
**(b)** manip(2.31, dobj) converstion


**Exercise 6.53** Explain the effect of the second declaration in each one fo the following sets of declarations. Indicate which, if any, are illegal<br />
**(a)**
```cpp
int calc(int&, int&); // for none const value
int calc(const int&, const int&); //for const value
```
**(b)**
```cpp
int calc(char *, char*); //for none const
int calc(const char*, const char*); //for const
```
**(c)** 
```cpp
int calc(char*, char*);
int calc(char *const, char *const); //They are the same
```


**Exercise 6.54** Write a declaration for a function that takes two `int` parameters and returns an `int` and declare a `vector` whose elements have this function pointer type<br />
```cpp
int myfunc(int, int);
vector<int (*)(int,int)> funcvec;
```
