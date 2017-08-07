**Exercise 2.1** What are the differences between `int, long, long long` and `short` ? Between a `float` and a `double` ? Between an `unsigned` and a signed type?<br/>
**Answer:** int, long, long long have different bits. unsigned can not be used for negative number. double is more accurate than float.


**Exercise 2.2** To calculate a mortgage payment, what types would you use for the rate, pricipal and payment?<br />
**Answer:** use `double` for all of them.


**Exercise 2.3** What output will the following code produce <br />
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;

std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```
**Answer:** <br />
32 <br />
4264967264 <br />
32 <br />
-32 <br />
0 <br />
0 <br /><br />
**Exercise 2.4** write a program to check your answer.


**Exercise 2.5** Determine the type of each of the following literals. Explain the differences among the literals in each of the for examples: <br />
**(a)** `'a', L'a', "a", L"a"` <br />
**(b)** `10, 10u, 10L, 10uL, 012, 0xC` <br />
**(c)** `3.14, 3.14f, 3.14L` <br />
**(d)** `10, 10u, 10., 10e-2`  <br />

**Answer:** <br />
**(a)** 'a' is a char, L'a' is a wide char,"a" is a string, L"a" is a string with each charactor store as wide char.<br />
**(b)** 10 is an int, 10u is an unsigned int, 10L is a Long int, 10uL is a unsigned long int, 012 is a octal, 0xC is a hexadecimal.<br />
**(c)** 3.14 is a double, 3.14f is a float, 3.14L is a long a double. <br />
**(d)** 10 is a int, 10u is a unsigned int, 10. is a double, 10e-2 is a double.


**Exercise 2.6** What, if any, are the differences between the following definitions:<br />
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```
**Answer:** First line is decimal, second line is octal.


**Exercise 2.7** What values do these literals represent? What type does each have <br />
**(a)** "Who goes with F\145rgus?\012"<br />
**(b)** 3.14e1L <br />
**(c)** 1024f <br />
**(d)** 3.14L <br />

**Answer:** <br />
**(a)** "Who goes with Fergus? newline" <br />
**(b)** 31.4 long double <br />
**(c)** 1024.0 float <br />
**(d)** 3.14 long double


**Exercise 2.8** Using escape sequences, write a program to print `2M` followed by a new line. Modify teh program to print `2`, then a tab, then a `M`, followed by a newline.



**Exercise 2.9** Explain the following definitions. For those that are illegal explain what's wrong and how to correct it <br />
**(a)** `std::cin >> int input_value;`<br />
**(b)** `int i = {3.14};`<br />
**(c)** `double salary = wage = 9999.99;`<br />
**(d)** `int i = 3.14;`<br />
**Answer:** <br />
**(a)** undefine variable <br />
**(b)** wrong, can't initialize `int` with `double`<br />
**(c)** wrong `wage` is undefined  <br />
**(d)** good


**Exercise 2.10** What are the initial values, if any, of each of the following variables?<br />
```cpp
std::string global_str;
int global_int;
int main(){
    int local_int;
    std::string local_str;
}
```
<br />
**Answer:** global_str is `empty`<br />
global_int is `0`<br />
local_int is undefined. Note that local_str is initialized by the string class.


**Exercise 2.11** Explain whether each of the following is a declaration or a definition:<br />
**(a)** `extern int ix = 1024;`<br />
**(b)** `int iy;`<br />
**(c)** `extern int iz;`<br />
**Answer:** <br />
**(a)** definiton <br />
**(b)** definition<br />
**(c)** declaration


**Exercise 2.12** Which, if any, of the following names are invalid?<br />
**(a)** `int double = 3.14` (invalid)<br />
**(b)** `int _;` (valid)<br />
**(c)** `int catch-22;` (invalid)<br />
**(d)** `int 1_or_2 = 1;` (invalid) <br />
**(e)** `double Double = 3.14;` (valid)


**Exercise 2.13** What is the value of `j` in the following program?<br />
```cpp
int i = 42;
int main(){
    int i = 100;
    int j = i;
}
```
**Answer:** `j=100`


**Exercise 2.14** Is the following program legal? if so, what values are printed?<br />
```cpp
int i = 100, sum = 0;
for (int i = 0; i!=10; i++){
    sum += i
}
std::cout << i <<" "<<sum<<std::endl;
```
**Answer:**<br />
100 45


**Exercise 2.15** Which of the following definitions, if any, are invalid? why?<br />
**(a)** `int ival = 1.01;` (valid)<br />
**(b)** `int &rval1 = 1.01;` (invalid)<br />
**(c)** `int &rval2 = ival;` (valid)<br />
**(d)** `int &rval3;` (invalid)


**Exercise 2.16** Which, if any, of the folling assignments are invalid? if they are valid, explain what they do.<br />
`int i =0, &r1 = i; double d = 0, &r2 = d;`
**(a)** r2 = 3.14159 (d = 3.14159)<br />
**(b)** r2 = r1 ( d = 0.00) <br />
**(c)** i = r2 (i = 0) <br />
**(d)** r1 = d (i = 0)


**Exercise 2.17** What does the following code print?<br />
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
**Answer:** 10 10


**Exercise 2.18** Write code to change the value of a pointer. Write code to change the value to which the pointer points.<br />
**Answer:** <br />
```cpp
int val1 = 10, val2 = 20, *rval1 = &val1, *rval2 = &val2;
rval1 = &val2; // change the value of a pointer
*rval2 = 22; //Change the value to which a pointer points
```


**Exercise 2.19** Explain the key differences between pointers and references.<br />
**Answer:** pointer can be modified to point to other object which reference, once initialized, cannot be changed to refer to other object.


**Exercise 2.20** What does the following program do?<br />
```cpp
int i = 42; // initialize a int i to be 42
int *p1 = &i; // define a pointer p1 pointed to int i
*p1 = *p1 * *p1; //change the value to which the pointer p1 points to.
```


**Exercise 2.21** Explain each of the following definitions. Indicate whether any are illegal and, if so, why.<br />
`int i = 0` 
**(a)** `double *dp = &i;` (illegal, the types are different)<br />
**(b)** `int *ip = i;` (illegal, can not assign int 0 to pointer)
**(c)** `int *p =&i;` (legal)


**Exercise 2.22** Assuming `p` is a pointer to `int`, explain the following code:
```cpp
if (p) //if pointer p is not nullptr
if (*p) //if the value to which p points to is non-zero
```


**Exercise 2.23** Given a pointer p, can you determine whether p points to a valid object? if so, how? if not why?<br />
**Answer:** we can not determine if a pointer is valid given no other information.


**Exercise 2.24** Why is the initialization of p legal but that of lp illegal?
`int i = 42; void *p = &i; long *lp = &i;`
**Answer:** because long and int are different types.


**Exercise 2.25** Determine the types and values of each of the following variables. <br />
**(a)** `int *ip, i, &r = i;` (ip is a pointer which points to int; i is an int; r is a reference to i)<br />
**(b)** `int i, *p = 0;` (i is an int; p is a nullptr points to int)<br />
**(c)** `int *ip, ip2;` (ip is a pointer with NULL; ip2 is an int)


**Exercise 2.26** Which of the following are legal? For those that are illegal, explain why.<br />
**(a)** `const int buf;` (illegal; not initialized)<br />
**(b)** `int cnt = 0;` (legal)<br />
**(c)** `const int sz = cnt;` (legal)<br />
**(d)** `++cnt; ++sz;` (++cnt is legal cause it is a variable; ++sz is illegal because it's a const variable)


**Exercise 2.27** Which of the following initializations are legal? Explain why.<br />
**(a)** `int i = -1, &r = 0;` (r is wrong, not const)<br />
**(b)** `int *const p2 = &i2;` (legal)<br />
**(c)** `const int i=-1, &r =0;` (legal)<br />
**(d)** `const int *const p3 = &i2` (legal)<br />
**(e)** `const int *p1 = &i2;` (legal)<br />
**(f)** `const int &const r2` (illegal;not initialized)<br />
**(g)** `const int i2=i, &r = i;` (legal)


**Exercise 2.28** Explain the following definitions. Identify any that are illegal.<br />
**(a)** `int i, *const cp;` (illegal, not initialized cp)<br />
**(b)** `int *p1, *const p2;` (illegal, not initialized p2) <br />
**(c)** `const int ic, &r=ic;` (illegal, not initialized ic) <br />
**(d)** `const int *const p3;` (illegal, not initialized p3) <br />
**(e)** `const int *p;` (legal)


**Exercise 2.29** Using the variables in the previous exercise, which of the following assignments are legal? explain why.<br />
**(a)** `i = ic` (legal)<br />
**(b)** `p1 = p3` (illegal,because p1 is not a pointer pointing to const)<br />
**(c)** `p1 = &ic;` (illegal,same reason as (b)) <br />
**(d)** `p3 = &ic'` (legal)<br />
**(e)** `p2 = p1` (illegal, p2 is const pointer)<br />
**(f)** `ic = *p3` (illegal, ic is const int)


**Exercise 2.30** For each of teh following declarateions indicate whetehr the object being declared has top-level or low-level `const`.<br />
```cpp
const int v2 = 0; //top-level
int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;// all has low-level. p3 has top-level.
```


**Exercise 2.31** Given the declarations in the previous exercise determine wheter the follwoing assignments are legal. Explain how the top-level or low-level const applies in each case.<br />
```cpp
r1 = v2; // illegal
p1 = p2; // illegal
p2 = p1; // legal
p1 = p3; // illegal
p2 = p3; // legal
```


**Exercise 2.32** Is the following code legal or not? if not, how might you make it legal?<br />
`int null = 0,*p = null; //*p = nullptr;`


**Exercise 2.33** Using the variable definitions from this section, determine what happens in each of these assignments:<br />
```cpp
a = 42; // a is an int
b = 42; // b is an int
c = 42; // c is an int
d = 42; // d is a pointer point to int so that it can not be assigned to 42 directly, the only literal number it accept is 0
e = 42; // e is a pointer point to const int same as d
g = 42; // g is const int reference, which means can not be assigned to antoher number!!!
```


**Exercise 2.34** Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in teh previous exercise were correct. If not, study the example until you can convince yourself you know what led you to the wrong conclusion.


**Exercise 2.35** Dtermine the types deduced in each of the following definitions. Once you've figured out the types, write a program to see whether you were correct.<br />
```cpp
const int i = 42;
auto j = i; // j i an int
const auto &k = i; // k is a reference to const int
auto *p = &i; //p is a pointer points to const int
const auto j2 = i; // j2 is a const int
const auto &k2 = i; // k2 is a reference to const int
```


**Exercise 2.36** In the following code, determine the type of each variable and the value each variable has when code finishes:<br />
```cpp
int a = 3, b = 4;
decltype(a) c = a; // c is an int =3
decltype((b)) d = a; //d is a reference to int
++c; // c = 4
++d; // d = 4
```


**Exercise 2.37** Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if `i` is an `int`, then the type of the expression `i=x` is int&. Using that knowledge, determine the type and value of each variable in this code: <br />
```cpp
int a = 3, b = 4;
decltype(a) c = a; // c is an int
decltype(a = b) d = a; //d is a reference to a
```


**Exercise 2.38** Dscribe the differences in type deduction between `decltype` and `auto`. Given an example of an expression where `auto` and `decltype` will deduce the same type and an example where they will deduce differing types. <br />
**Answer:** <br />
(1) how they handle toplevel const<br />
(2) how they handle expression and paranthes
```cpp
int i = 0;const int ci = 0;
decltype(ci) a = ci;
auto a = ci;

decltype(i) a = i;
auto a = i;
```


**Exercise 2.39** Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.<br />
```cpp
struct Foo {/* empty */}
int main(){
    return 0;
}
```


**Exercise 2.40** Write your own version of the `Sales_data` class.<br />
```cpp
struct my_Sales_data{
    std::string series_no;
    double price;
    unsigned int quantity;
}
struct my_Sales_data{
    std::string series_no;
    double price;
    unsigned int units_sold;
}
```


**Exercise 2.41** Use your Sales_data class to rewrite the exercise in 1.5.1 1.5.2 and 1.6. For now, you should define your Sales_data class in the same file as your main function.


**Exercise 2.42** Write your own version of the Sales_data.h header and use it to rewrite the exercise from 2.41.
