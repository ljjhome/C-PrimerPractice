**Exercise 11.1** Describe the difference between a map and vector.<br />
**Answer:** a map is used to store key-value pair. We will find a value by its key. In a vector, we find a value by its index.


**Exercise 11.2** Given an example of when each of `list`,`vector`, `deque`, `map` and `set` might be most useful.<br />
**Answer:** When we have a list of names such as black list, we will use `set` to store. If we have a name with address, we will store them in a map.


**Exercise 11.5** Explain the difference between a `map` and a `set`. When might you use one or the other?<br />
**Answer:** map stores key-value pair while a set stores the value.


**Exercise 11.6** Explain the difference between a `set` and a `list`. When might you use one or the other?<br />
**Answre:** a set is sorted by default. a list is not. The insertion and search speed is also different.




**Exercise 11.9** Define a map that associates words with a list of the line numbers on which the word might occur.<br />
```cpp
std::map<string, std::list<int>> word_num;
```


**Exercise 11.10** Could we define a map from vector<int>::iterator to int? What about from list<int>::iterator to int? In each case, if not, why not?<br />
**Answer:** for vector<int>::iterator to int, we can, because there is a < defined. there is no < defined for list<int>::iterator.


**Exercise 11.11** Redefine bookstore without using decltype<br />
```cpp
multiset<Sales_data, bool (*)(const Sales_data&, const Sales_data&)> bookstore(compareIsbn);
```
