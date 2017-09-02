**Exercise 10.4** Assuming v is a vector<double>, what if anything is wrong with calling accumulate(v.cbegin(),v.cend(), 0)?<br />
**Answer:** The sum will be integer.


**Exercise 10.5** In the call to equal on rosters, what would happen if both rosters held C-style strings, rather that library string<br />
**ANswer:** not so right: it will not work, because there is no "==" for C-style charaters.
the answer is it depends on compliers


**Exercise 10.7** Determine if there are any errors in the following programs and, if so, correct the error(s)<br />
**(a)**
```cpp
vecotr<int> vec; list<int> lst; int i;
while(cin>>i)
    lst.push_back(i);
//vector<int> vec(lst.size());
copy(lst.begin(),lst.end(),vec.begin());
```
**(b)**
```cpp
vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(),10,0);
// ok
```

**Exercise 10.8** We said that algorithms do not change the size of the containers over which they operate. Why doesn't the use of back-inserter invalidate this claim?<br />
**Answer:** Inserters like back-inserter is part of `<iterator>` rather than `<algorithm>`...


**Exercise 10.10** Why do you think the algorithms don't change the size of containers?<br />
**Answer:** to keep some kind of consistency?
because the library operate on iterators not containers. Thus, an algorithm connot add or remove elements.


**Exercise 10.23** How many arguments does `bind` take?<br />
**Answer:** n+1, where n is the number of argument the function we bind take in.



