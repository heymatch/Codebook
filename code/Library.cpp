#include <bits/stdc++.h>

// algorithm (c++)
template <class InputIterator, class value_type>
InputIterator find(InputIterator first, InputIterator last, value_type val)

template <class RandomAccessIterator>
void sort(RandomAccessIterator first, RandomAccessIterator last)

template <class RandomAccessIterator, class Compare>
void sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp)

template <class ForwardIterator, class value_type>
bool binary_search(ForwardIterator first, ForwardIterator last, value_type val)

template <class BidirectionalIterator>
bool next_permutation(BidirectionalIterator first, BidirectionalIterator last)

// cmath
double cos(double)
double acos(double) //PI = acos(0.0)*2.0
double exp(double) //exponential
double log(double)
double log10(double)
double log2(double)
double pow(double, double)
double sqrt(double)
double cbrt(double)
double ceil(double) //round up
double floor(double) //round down
double round(double) //round
double abs(double)

// cstdio
int printf(char *format, ...)
int sprintf(char *str, char *format, ...)
int scanf(char *format, ...)
int sscanf(char *str, char *format, ...)

/*
	format
	
	print	:	%[flags][width][.precision][length]specifier
	scan	:	%[*][width][length]specifier
	
	specifier:
	%c	:	character
	%s	:	string of characters
	%d	:	signed decimal
	%u	:	unsigned decimal
	%o	:	unsigned octal
	%x	:	unsigned hexadecimal
	%X	:	unsigned hexadecimal (upper)
	%%	:	%
*/

// iomanip
setfill(char_type)
setprecision(int)
setw(int)
setbase(int) //10, 8, 16

// STL
// bitset
template <class size_t>
bitset<size_t>(unsigned long long)
bitset<size_t>(string)
bitset<size_t>(char *)
bool operator[](size_t) const
ref operator[](size_t)
size_t count() // return the number of 1
size_t size() // size()-count() = the number of 0
bool any()
bool none()
ref set() // all
ref set(size_t, bool) // single
ref reset() // all
ref reset(size_t) // single
string to_string()
unsigned long to_ulong()
unsigned long long to_ullong()

// list
template <class value_type>
list <value_type>
iterator begin()
iterator end()
size_type size()
void reserve(size_type)
bool empty()
ref front(size_type)
ref back(size_type)
void remove(value_type)
void push_front(value_type)
void pop_front()
void push_back(value_type)
void pop_back()
iterator insert(const_interator, value_type)
iterator erase(const_interator)

// map
template <class key_type, class value_type>
typedef pair<key_type, value_type> instance_type
map <key_type, value_type>
iterator begin()
iterator end()
size_type size()
bool empty()
value_type& operator[](key_type)
map<key_type, value_type>::iterator->first //key value
map<key_type, value_type>::iterator->second // mapped value
iterator find(key_type)
size_type count(key_type)
pair<iterator, bool> insert(pair<key_type, value_type>(key_type, value_type))
size_type erase(key_type)

// priority_queue
template <class value_type>
priority_queue <value_type> //priority larger
priority_queue <value_type, vector<value_type>, greater<value_type> > // priority smaller
size_t size()
bool empty()
ref top()
void push(value_type)
void pop()

// queue
template <class value_type>
queue <value_type>
size_type size()
bool empty()
reference front()
reference back()
void push(value_type)
void pop()

// set
template <class value_type>
set <value_type>
iterator begin()
iterator end()
size_type size()
bool empty()
iterator find(value_type)
size_type count(value_type)
pair<iterator, bool> insert(value_type)
size_type erase(value_type)
size_type count(value_type) //return the number of element

// stack
template <class value_type>
stack <value_type>
size_type size()
bool empty()
reference top()
void push(value_type)
void pop()

// string
string
iterator begin()
iterator end()
size_type size()
void reserve(size_type)
bool empty()
reference operator[](size_type)
reference at(size_type)
string operator+= (string)
string insert(pos, string)
string erase(pos = 0, len)
string substr(pos = 0, len)
string to_string(value) // c++11
string str() // stringstream

// vector
template <class value_type>
vector <value_type>
iterator begin()
iterator end()
size_type size()
void reserve(size_type)
bool empty()
reference operator[](size_type)
reference at(size_type)
void push_back(value_type)
void pop_back()
iterator insert(const_interator, value_type)
iterator erase(const_interator)
