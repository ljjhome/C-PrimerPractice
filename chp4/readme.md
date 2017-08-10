**Exercise 4.1** What is the value returned by `5+10*20/2`?<br />
**Answer:** 105


**Exercise 4.2** Using the table 4.12, parenthesize the following expressions to indicate the order in which the operands are grouped: <br />
**(a)** `*vec.begin() // *(vec.begin());` <br />
**(b)** `*vec.begin()+1 // (*(vec.begin()))+1` 


**Exercise 4.3** Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presensts a trade off between efficienct code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off?<br />
**Answer** acceptable


**Exercise 4.4** Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression(without parenthesize) and printing its result.<br />
```cpp
12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
// ((12/3)*4)+(5*15)+((24%4)/2);
```


**Exercise 4.5** Determine the reslt of the following expressions.<br />
**(a)** `-30 * 3 + 21 /5` (-86)<br />
**(b)** `-30 + 3 * 21 /5` (-18)<br />
**(c)** `30/3 * 21 %5` (0)<br />
**(d)** `-30/3*21%4` (-2)



**Exercise 4.6** Write an expression to determin whether an `int` value is even or odd.<br />
**Answer** `a%2`


**Exercise 4.7** What does overflow mean? show three expressions that will overflow<br />
**Answer:**
```cpp
short a = 32766*2;
int b = 2147483648 * 10;
unsigned int = -1;
```


**Exercise 4.8** Explain when operands are evaluated in the logical AND, logical OR, and equality operators.<br />
**Answer:** in AND and OR, operands are evaluated from left to right. in equality operators it depens on compiler.


**Exercise 4.9** Explain the behavior of the condition in the following `if`:<br />
```cpp
const char *cp = "hellow world";
if(cp&& *cp) // always true;
```


**Exercise 4.10** Write the condition for a `while` loop that would read int from the standard input and stop when the value read is equal to 42.
```cpp
int tmp;
while (cin>>tmp && tmp!=42){}
```


**Exercise 4.11** Write an expression that tests four values `a,b,c,d` and ensures that a is greater than b which is greter than c which is greater than d.
```cpp
if (a>b && b>c && c>d){}
```


**Exercise 4.12** Assuming `i,j,k` are all int. explain what `i !=j <k ` means.<br />
**Answer:** `i!=(j<k), j<k is a bool, which equals to 0 or 1.`


**Exercise 4.13** What are the values fo `i` and `d` after each assignment?
```cpp
int i; double d;
```
**(a)** `d=i=3.5` (d=i=3)<br />
**(b)** `i=d=3.5` (i = 3, d=3.5)


**Exercise 4.14** Explain what happens in each of the `if` tests:
```cpp
if (42=i){} //illegal
if (i = 42) //always true i = 42 return 42 
```


**Exercise 4.15** The following assigment is illegal, why? How would you correct it ?
```cpp
double dval; int ival; int *p;
dval = ival = p = 0; // dval = ival = *p = 0;
```


**Exercise 4.16** Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.<br />
**(a)** `if (p = getPtr()!=0) // if((p=getPtr())!=0)`<br />
**(b)** `if(i = 1024) // if(i == 1024)`


**Exercise 4.17** Explain the difference between prefix and postfix increment.<br />
**Answer:** prefix increment: first add one, then use it; postfix increment:first use the number then add 1.


**Exercise 4.18** What would happen if the `while` loop on page 148 that prints the elements from a `vector` used the prefix increment operator?<br />
**Answer** it will not print the first element and it will try to access the element which is not belong to the vector.


**Exercise 4.19** Given that `ptr` points to an `int`, that `vec` is a `vector<int>`, an that `ival` is an `int`, explain the behavior of each of thse expressions. Which, if any, are likely to be incorrect? why? How might each be corrected? <br />
**(a)** `ptr!=0 && *ptr++` pointer is not null and the int it points to is not zero.<br />
**(b)** `ival++ && ival` ival add 1 and it doesn't equal to zero<br />
**(c)** `vec[ival++]<=vec[ival]` vec[ival+1] <= vec[ival]


**Exercise 4.20** Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of the following expressions are legal, Explain the behaviour of the legal expressions and why those that aren't legal are in error.<br />
**(a)** `*iter++` legal return the `*iter` and add one to iter<br />
**(b)** `(*iter)++` legal return `*iter` and add one to `*iter`<br />
**(c)** `*iter.empty()` illegal `(*iter).empty() or iter->empty()`<br />
**(d)** `iter->empty()` legal return the empty() value<br />
**(e)** `++*iter` legal first compute `++iter` then get then object <br />
**(f)** `iter++->empty()` wrong:!!first compute `iter->empty()` then add 1 to the reutrn of emtpy()  right::!! first compute the `iter->empty()` then add 1 to `iter`!!! note that iter is the operand, all the operator has to manipulate the operand.


**Exercise 4.23** The following expression fails to compile due to operator procedence. Using Table 4.12, explain wh it fails. How would you fix it?
```cpp
string s = "word";
string p1 = s + s[s.size()-1] == 's' ? " " : "s";
// string p1 = s + (s[s.size()-1]=='s'?" ":"s");
```


**Exercise 4.24** Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.<br />
**Answer:** if the operator is left associative, then the code becomes: `final = ((grade>90)?"high":(grade<60))?"fail":"pass"`. the result will be wrong.



**Exerciese 4.25** What is the value of ~'q'<<6 on a machine with 32-bit int and 8 bit char, that uses Latin-1 character set in which 'q' has the bit pattern `01110001`<br />
**Ansewr:** 0000-0000-0000-0000-0010-0011-1000-0000


**Exercise 4.26** In our grading example in this section, what would happenif we used unsigned int as the type for quiz1.<br />
**Answer:** wrong:!! may not enough for 30students?


**Exercise 4.27** What is the result of each of these expressions? `unsigned long ul1 = 3, ul2 = 7;`<br />
**(a)** ul1 & ul2 0000-0011<br />
**(b)** ul1 | ul2 0000-0111<br />
**(c)** ul1 && ul2 true<br />
**(d)** ul1 || ul2 true


**Exercise 4.29** Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expectd? if not, figure out why.<br />
```cpp
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x)<<endl; // 10
cout << sizeof(p)/sizeof(*p)<<endl; // 2
```


**Exercise 4.30** Using Table 4.12, parenthesize the follwoing expressions to match the default evaluation:<br />
**(a)** `sizeof x+y // sizeof(x+y)`<br />
**(b)** `sizeof p->mem[i] //sizeof(p->mem[i])`<br />
**(c)** `sizeof a < b // sizeof(a)<b`<br />
**(d)** `sizeof f() ` <br />


**Exercise 4.32** Explain the following loop.<br />
```cpp
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;ix!=size&&ptr!=ia+size;++ix, ++ptr)
```
**Answer** ptr and ix have the same function.


**Exercise 4.33** USing the table 4.12 explain what the following expression does:<br />
`someValue ? ++x,++y:--x,--y;`<br />
**Answer:** Wrong answer: according to `someValue` if it is true, then add 1 to both x and y, and return y after addition.<br />
Right answer: the expression is the same as `(someValue?++x,++y:--x),--y...`


**Exercise 4.34** Given the variable definitions in the section, explain what conversions take place in the following expression:<br />
**(a)** `if(fval) //float to int to bool`<br />
**(b)** `dval = fval+ival // int to float, float to double`<br />
**(C)** `dval + ival * cval // char to int to double`


**Exercise 4.45** Given the follwing definitions, identify the implicit type conversions, if any, taking place:
```cpp
char cval; int ival; unsigned int ui;
float fval; double dval;
```
**(a)** `cval = 'a' + 3; // char to int, int to char`<br />
**(b)** `fval = ui -ival*1.0 //int to double,ui to double, double  to float`<br />
**(c)** `dval = ui * fval // unsigned to float to double`<br />
**(d)** `cval = ival+fval+dval;//int to float to double to int to char`



**Exercise 4.36** Assuming `i` is an `int` and `d` is a `double` write the expression `i*=d` so that it does integral, rather than floating point, multiplication<br />
**Answer:** ` i*=static_cast<int>(d)`


**Exercise 4.37** Rewrite each of the following old-style casts to use a named cast:
```cpp
int i; double d; const string *ps; char *pc; void *pv;
```
**(a)** `pv=(void*)ps; //pv = static_cast<void*>(const_cast<string*>(ps))`<br />
**(b)** `i = int(*pc); //i=static_cast<int>(*pc)`<br />
**(c)** `pv = &d;//pv = static_cast<void*>(&d)`<br />
**(d)** `pc=(char*)pv;//pc = static_cast<char*>(pv)`<br />


**Exercise 4.38** Explain the following expression:<br />
```cpp
double slope = static_cast<double>(j/i);
```
**Answer** may not get what we want, j/i return a int, then convert it to double.
