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



