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



