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
**(b)** `if(i = 1024) // if(i == 1024)



