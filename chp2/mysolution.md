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

