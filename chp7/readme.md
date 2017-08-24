**Exercise 7.8** Why does read define its `Sale_data` parameter as a plain referce and `print` define its parameter as reference to const?<br />
**Answer:** because we have to make change to the argument passed into read.We don't change the argument passed into print


**Exercise 7.10** What does the condition in the following `if` statement do? `if(read(read(cin,data1),data2))` <br />
**Answer:** `cin>>data1>>data2;`


**Exercise 7.14** Write a version of the default constructor that explicitly initializes the members to the values we have provided as in-class initializers.<br />
```cpp
Sale_data::Sale_data():bookNo(""),units_sold(0),revenue(0.0){}
```



