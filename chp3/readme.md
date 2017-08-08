**Exercise 3.1** Rewrite teh exercises from 1.4.1 with appropriate `using` declarations<br />


**Exercise 3.2**


**Exercise 3.3** Explain how whitespace characters are handled in the `string` input operator and in the `getline` function <br />
**Answer:** In `cin` the whitespace is considered as a end of string, and it is not recorded into the string. While in `getline` function, the whitespace is recorded, the string will end at newline operation.


**Exercise 3.4** 


**Exercise 3.5**


**Exercise 3.6**


**Exercise 3.7**


**Exercise 3.8**


**Exercise 3.9** What does the following program do? Is it valid? if not, why not?
```cpp
string s;
cout <<s[0]<<endl;
```
**Answer:** Invalid, because the s string is empty. every time we use a string and use a index to get a element from the string, we have to make sure the index is valid.


**Exercise 3.10**


**Exercise 3.11** Is the following range `for` legal? If so, what is the type of `c`?
```cpp
const string s = "Keep out!";
for (auto &c : s){ /*...*/}
```
**Answer:** legel, c is a `const char &` 


**Exercise 3.12** Which, if any, of the following `vector` definitions are in error? For those, that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.<br />
**(a)** `vector<vector<int>> ivec;` //legal default initialization<br />
**(b)** `vector<string> svec = ivec;` //illegal not the same type<br />
**(c)** `vector<string> svec(10,"null");` //legal


**Exercise 3.13** How many elements are there in each of the following vectors? What are the values of the elements?<br />
**(a)** vector<int> v1; (empty vector);<br />
**(b)** vector<int> v2(10); (10 elements with 0s)<br />
**(c)** vector<int> v3(10,42); (10 elements with 42s)<br />
**(d)** vector<int> v4{10}; (wrong: 10 elements with 0; right: one element 10)<br />
**(e)** vector<int> v5{10,42}; (two elements 10 and 42)<br />
**(f)** vector<string> v6{10}; (ten empty string)<br />
**(g)** vecotr<string> v7{10,"hi"}; (10 elements with "hi")



**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){

}**Exercise 3.18** is the following program legal? if not, how might you fix it?
```cpp
vector<int> ivec;
ivec[0] = 42;
```
**Answer:** illegal. the right way:
```cpp
vector<int> ivec;
ivec.push_back(0);
```


**Exercise 3.19** List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.<br />
**Answer:**
```cpp
/* way 1 */
vector<int> v1(10,42);
/* way 2 */
vecotr<int> v2{42,42,42,42,42,42,24,24,42,42};
/* way 3 */
vecotr<int> v3;
for (unsigned int i = 0; i<10; i++){
    v3.push_back(42);
}
```



