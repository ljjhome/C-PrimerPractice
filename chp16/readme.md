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


**Exercise 16.13** Explain which kind of friendship you chose for the equality and relational operators for BlobPtr.<br />
**Answer:** We chose the one-to-one friendship.


**Exercise 16.17** What, if any, are the differences between a type parameter that is declared as a typename and one that is declared as class? When must typename be used?<br />
**Answer:** When we use them in declaration, they are the same, when we want to use class members that are types, we have to use `typename`.


**Exercise 16.18** Explain each of the following function template declarations and identify whether any are illegal. Correct each error that you find.
```cpp
template<typename T,U,typename V> void f1(T,U,V); // template<typename T, typename U, typename V>
template<typnname T> T f2(int &T); // T f2(int &a)
inline template<typename T> T foo(T, unsigned int*); // template<typename T> inline T foo(T, unsigned int *);
template< typename T> f4(T,T); // correct

typedef char Ctype;
template<typename Ctype> Ctype f5(Ctype a); // correct
```


**Exercise 16.25** Explain the meaning of these declaration
```cpp
extern template class vector<string> // declaration not a definition
template class vector<Sales_data> // definition
```


**Exercise 16.26** Assuming `NoDefault` is a class that does not have a default constructor, can we explicitly instantiate vector<NoDefault>? if not, why not?<br />
**Answer:** yes we can. It seems that the answer should be no.


**Exercise 16.27** For each labeled statement explain what, if any, instantiations happen. If a template is instantiated, explain why; if not, explain why not.
```cpp
template <typename T> class Stack{};
void f1(Stack<char>); // yes
class Exercise{
	Stack<double> &rsd; // yes
	Stack<int> si; // yes
};
int main(){
	Stack<char> *sc; //yes
	f1(*sc); //yes
	int iobj = sizeof(Stack<string>); //yes
}
```

**Exercise 16.32** What happens during template argument deduction?<br />
**Answer:** During template argument deduction, the compiler uses types of the arguments in the call to find the template arguments that generate a version of the function that best matches the given call.


**Exercise 16.33** Name two type conversions allowed on function arguments involved in template argument deduction.<br />
**Answer:** array and function pointer conversions.


**Exercise 16.34** Given only the following code, explain whether each of these calls is legal. If so, what is the type of T? If not, why not?
```cpp
template <class T> int compare(const T&, const T&);
compare("hi","world");// char array, illegal 
compare("bye", "dad"); // char array legal.
```


**Exercise 16.35** which, if any, of the following calls are errors? If the call is legal, what is the type of T? If the call is not legal, what is the problem?
```cpp
template <typename T> T calc(T, int);
template <typename T> T fcn(T, T);
double d; float f; char c;

calc(c,'c'); // T is char
calc(d, f); // T is double
fcn(c, 'c'); // T is char
fcn(d,f); // illegal, should be same
```


**Exercise 16.36** What happens in the following calls.
```cpp
template <typename T> f1(T, T);
template <typename T1, typename T2) f2(T1, T2);
int i = 0, j = 42, *p1 = &i, *p2 = &j;
const int *cp1 = &i, *cp2 = &j;

f1(p1,p2); // T is int *
f2(p1,p2); // T1 and T2 are int *
f1(cp1, cp2); // T is const int *
f2(cp1, cp2); // T1 and T2 are const int  *
f1(p1, cp1); // T is int *
f2(p1, cp1); // T1 is int * T2 is const int *
```


**Exercise 16.37** The library max function has two function parameters and returns the larger of its arguments. This function has one template type parameter. Could you call max passing it an int and a double? If so, how? If not, why not?<br />
**Answer** `max<double>(a,b)`


**Exercise 16.38** When we call make-shared, we have to provide an explicit template argument. Explain why that argument is needed and how it is used?<br />
**Answer:** because it is return type


**Exercise 16.39** Use an explicit template argument to make it sensible to pass two string literals to the original version of compare.<br />
**Answer:** `compare<string>(a,b)`


**Exercise 16.40** Is the following function legal? If not, why not? If it is legal, What, if any, are the restrictions on the argument types that can be passed, and what is the return type
```cpp
template< typename It>
auto fcn3(It beg, It end) -> decltype(*beg +0){
	return *beg;
}
// the return type is int? No, it depends on how the + operator is defined.
```


**Exercise 16.41** Write a version of sum with a return type that is guaranteed to be large enough to hold the result of the addition.
```cpp
template <typename T>
auto sum(const T& a, const T& b) ->decltype(a +b){}
```


**Exercise 16.42** Determine the type of T and of val in each of the following calls:
```cpp
template <typename T> void g(T&& val);
int i = 0; const int ci = i;

g(i); // int &
g(ci); // int. wrong. Since ci is left-value, int&
g(i*ci); // int
```


**Exercise 16.43** Using the function defined in the previous exercise, what would the template parameter of g be if we call `g(i = ci )`
**Answer:** `i=ci`is left-value, so T is int&


**Exercise 16.44** Using the same three calls as in the first exercise, determine the types for T if g's function parameter is declared as T. What if g's function parameter is const T&?
```cpp
// T
g(i); // T is int
g(ci); // T is const int
g(i*ci); // T is const int

// const T &
g(i); // T is int
g(ci); // T is int
g(i*ci); // T is int
```


**Exercise 16.45** Given the following template, explain what happens if we call g on a literal value such as 42. What if we call g on a variable of type int?
```cpp
template <typename T> void g(T&& val) {vector<T> v;} // T is int
```


**Exercise 16.46** Explain this loop from StrVec::reallocate
```cpp
for(size_t i = 0; i != size(); ++i)
	alloc.construct(dest++, std::move(*elem++));
```
**Answer:** In each iteration, the dereference `operator *` returns a lvalue which is changed to rvalue by std::move, because the member function construct takes rvalue rather than lvalue reference.


**Exercise 16.49** Explain what happens in each of the following calls:
```cpp
template <typename T> void f(T);
template <typename T> void f(const T*);
template <typename T> void g(T);
template <typename T> void g(T*);
int i = 42, *p = &i;
const int ci = 0, *p2 = &ci;
g(42); // g(T)
g(p); // g(T*)
g(ci); // g(T)
g(p2); // g(T*)

f(42); // f(T)
f(p); // f(T)
f(ci); // f(T)
f(p2); // f(const T*)
```



