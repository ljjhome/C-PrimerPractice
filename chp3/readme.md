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
    v3.push_back(0);
}
```



**Exercise 3.26** In the binary serach program on page 112, why did we write `mid = beg + (end - beg) /2;` instead of `mid = (beg + end) /2;`<br />
**Answer:** because it is not obvious.


**Exercise 3.27** Assuming `txt_size` is a function that takes no arguments and returns an `int` value, which of the following definitions are illegal? explain why?<br />
`unsigned buf_size = 1024;`
**(a)** `int ia[buf_size]` (illegal, buf_size not const)<br />
**(b)** `int ia[4*7-14]` (illegal,const)<br />
**(c)** `ina ia[txt_size()]` (illegal, not constexpr)<br />
**(d)** `char st[11] = "fundamental";` (illegal, no space for '\0\')


**Exercise 3.28** What are the values in the following arrays?
```cpp
string sa[10]; // empty string
int ia[10];   // 10 0s
int main(){
    string sa2[10]; //empty string
    int ia2[10]; //undefined;
}
```


**Exercise 3.29** List some of the drawbacks of using an array instead of a vector.<br />
**Answer:** cannot change size once defined. initialization method restricted.


**Exercise 3.30** Identify teh indexing errors in the following code:
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix<=array_size; ++ix){ ia[ix] = ix;}
```
**Answer:** wrong indexing. should use `for(size_t ix = 0; ix<array_size;++ix)`


**Exerice 3.33** What would happend if we did not initialize the scores array in the program on page 116?<br />
**Answer:** After the test, we found that, if we do not initilize scores with explicit numbers, they will get random numbers, so the result may not be true.


**Exercise 3.34** Given that `p1` and `p2` point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make the code illegal?
```cpp
p1 += p2 - p1;
```
**Answer** legal


**Exercise 3.35** 


**Exercise 3.37** What does the following program do?
```cpp
const char ca[] = {'h','e','l','l','o'};
const char *cp = ca;
while(*cp){
    cout<< *cp <<endl;
    ++cp;
}
```

**Answer:** print each charactor, `*cp` may not get zero.


**Exercise 3.38** In this section, we noted that it was not only illegal but meaningles to try to add two pointers. why would adding two pointers be meanless?<br />
**Answer:** because the pointers have address in it, adding two addresses is meaningless.





