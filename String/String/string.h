#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<assert.h>
#include<string>
using namespace std;
namespace Mystring
{
	class string
	{
	public:
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;;
		}
		string()
			:_str(new char[1] {'\0'})
		    ,_size(0)
		    ,_capacity(0){}
		string(const char* str="")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}
		string(const string& s)
		{
			_str = new char[s._capacity + 1];
			strcpy(_str, s._str);
			_size = s._size;
			_capacity = s._capacity;
		}
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[s._capacity + 1];
				strcpy(_str, s._str);
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		const char* _src() const
		{
			return _str; 
		}
		size_t size() const
		{
			return _size;
		}
		size_t capacity() const
		{
			return _capacity;
		}
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}
		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}
		void push_back(char ch);
		void append(const char*str);
		string& operator+=(char ch);
		string& operator+=(const char* str);
		void reserve(size_t n);
		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* str);
		void erase(size_t pos, size_t len=npos);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};

	void test_string01();
	void test_string02();
	void test_string03();
	void test_string04();
	bool operator < (const string& s1, const string& s2);
	bool operator <= (const string& s1, const string& s2);
	bool operator > (const string& s1, const string& s2);
	bool operator >= (const string& s1, const string& s2);
	bool operator == (const string& s1, const string& s2);
	bool operator != (const string& s1, const string& s2);
	istream& operator>> (istream& in, string& s);
	ostream& operator<< (ostream& out,  string& s); 
}