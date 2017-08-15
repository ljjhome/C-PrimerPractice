**Exercise 5.1** What is a null statement? when might you use a null statement?<br />
**Answer:** A null statemment is useful where the language requires a statement but the program's logic does not.


**Exercise 5.2** What is a block? when might you use a block?<br />
**Answer:** A block is a sequence of statements and declarations surrounded by a pair of curly braces. it is used when the language requires a single statement but the logic of our program needs more than one.


**Exercise 5.4** Using comma operator to rewrite the `while` loop from 1.4.1 so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.
```cpp
while(val<=10)
    ++val,sum+=val;
/*.....*/
while(++val, val<=11)
    sum+=(val-1);
/*......*/
while(val<=10)
    sum+=val,++val;
```


**Exercise 5.4** Explain each of the following examples, and correct any problems you detect.<br />
**(a)** `while (string::iterator iter != s.end()){}`<br />
```cpp
string::iterator iter = s.begin();
while(iter!=s.end()){}
```
**(b)** `while (bool status = find(word)){} if(!status){}` status is a variable in while loop can not be used outside.


**Exercise 5.7** Correct the errors in each of the following code fragments:<br />
**(a)**
```cpp
if(ival1!=ival2)
    ival1=ival2;
else
    ival1=ival2=0;
```
**(b)**
```cpp
if (ival < minval){
    minval = ival;
    occurs = 1;
}
```
**(c)** 
```cpp
if(int ival = get_value()))
    cout<<"ival = " << ival << endl;
if(!ival)
    cout<<"ival = 0\n";
// ival should be define outside the first if statement
```
**(d)** 
```cpp
if (ival = 0) // should be ival==0
    ival = get_value();
```


**Exercise 5.8** What is "dangling else"? How are else clauses resolved in C++?<br />
**Answer:** In c++ the ambiguity is resolved by specifying that each else is matched with the closest preceding unmatched if.


**Exercise 5.13** Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error<br />
**(a)**
```cpp
unsigned aCnt = 0, eCnt =0, iouCnt = 0;
char ch = next_text();
switch(ch){
    case 'a': aCnt++; //add a "break here"
        break;
    case 'e': eCnt++; break;
    default: iouCnt++; break;
}
```
**(b)** wrong , control bypass a explicit initializer<br />
**(c)** wrong, `case 1: case 3: case 5: case 7:...`<br />
**(d)** shoulb be integral constant label.<br />
We also text the (b) problem with code ex_5_13.cpp


**Exercise 5.15** Explain each of the following loops. Correct any; problems you detect.<br />
**(a)** `ix` is defined inside for loop<br />
**(b)** missing a `;` in for loop<br />
**(c)** run forever with `++sz`


**Exercise 5.18** Explain each of the following loops. Correct any problems you detect.<br />
**(a)** need braket<br />
**(b)** ival should be defined outside<br />
**(c)** wrong, the ival should be define outsiede


**Exercise 5.22** The last example in this section that jumped back to `begin` could be better written using a loop. Rewrite the code to eliminate the `goto`.<br />
```cpp
int sz = get_size();
while(sz <=0){
    sz = get_size();
}
```
```cpp
for (int sz = get_size();sz<=0;sz = get_size())
```

