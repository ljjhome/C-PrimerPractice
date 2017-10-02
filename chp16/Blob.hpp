#ifndef BLOB_HPP
#define BLOB_HPP

#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
template<typename T> class BlotPtr;
template<typename T>
class Blob{
public:
	friend class BlotPtr<T>;
	typedef typename std::vector<T>::size_type size_type;
	Blob();
	template <typename It> Blob(It b, It e);
	Blob(std::initializer_list<T> il);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void push_back(const T &t) {data->push_back(t);}
	void pop_back();
	T& front();
	T& back();
private:
	std::shared_ptr<std::vector<T>> data;
	void check(size_type i, const std::string &msg) const;
};
template<typename T>
template<typename It>
Blob<T>::Blob(It b, It e):data(std::make_shared<std::vector<T>>(b,e)){}

template<typename T>
Blob<T>::Blob(std::initializer_list<T> il): data(std::make_shared<T>(il)){}

template<typename T>
void Blob<T>::check(size_type i, const std::string &msg) const{
	if(i >= data->size())
		throw std::out_of_range(msg);
}

template<typename T>
T& Blob<T>::front(){
	check(0, "front on empty StrBlob");
	return data->front();
}

template<typename T>
T& Blob<T>::back(){
	check(0, "back on empty StrBlob");
	return data->front();
}

template<typename T>
void Blob<T>::pop_back(){
	check(0,"pop_back from empty");
	data->pop_back();
}

template<typename T>
class BlobPtr{
public:
	BlobPtr():curr(0){}
	BlobPtr(Blob<T> &a, size_t sz = 0):wptr(a.data), curr(sz){}
	T& deref() const;
	BlobPtr& incr();
private:
	std::shared_ptr<std::vector<T>> check(std::size_t, const std::string& msg) const;
	std::weak_ptr<std::vector<T>> wptr;
	std::size_t curr;
};

template<typename T>
std::shared_ptr<std::vector<T>> BlobPtr<T>::check(std::size_t i, const std::string &msg) const{
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlor");
	if(i>=ret->size())
		throw std::out_of_range(msg);
	return ret;
}

template<typename T>
T& BlobPtr<T>::deref() const{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

template<typename T>
BlobPtr<T>& BlobPtr<T>::incr(){
	check(curr,"increment past end");
	++curr;
	return *this;
}
#endif //BLOB_HPP
