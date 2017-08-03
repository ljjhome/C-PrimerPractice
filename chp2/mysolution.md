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
<br />
**Answer:** <br />
32 <br />
4264967264 <br />
32 <br />
-32 <br />
0 <br />
0 <br /><br />
**Exercise 2.4** write a program to check your answer.

