**Exercise 16.1** Define instantiation<br />
**ANswer:** The compiler uses the deduced template parameter to instantiate a specific version of the function for us. When the compiler instantiates a template, it creates a new "instance" of the template using the actual template arguments inplace of the corresponding template parameters.


**Exercise 16.8** In the "Key concept" box, we noted that as a matter of habit c++ programmers prefer using != to using <. Explain the rationale for this habit<br />
**Answer:** because many classes define != rather than <.


**Exercise 16.9** What is a function template? What is a class template?<br />
**Answer:** a function template is a blueprint for generating functions. A class template is a blueprint for generating classes.


**Exercise 16.10** What happens when a class template is instantiated?<br />
**Answer:** When we use a class template, we must supply extra information. We can now see that the extra information is a list of explicit template arguments that are bound to the template's paramters. The compiler uses these template arguments to instantiate a specific class from the template.


**Exercise 16.11** The following definition of List is incorrect. How would you fix it?
```cpp
template <typename elemType> class ListItem;
template <typename elemType> class List{
public:
	List<elemType>(); // List();
	List<elemType>(const List<elemType> &);// List(const List &)
	List<elemType>& operator=(const List<elemType> &); //List & operator=(const List &);
	~List();
	void insert(ListItem* ptr, elemType value); // void insert(ListItem<elemType> * ptr, elemType value)
private:
	ListItem *front, *end;// ListItem<elemType> *front, *end;
};
```
