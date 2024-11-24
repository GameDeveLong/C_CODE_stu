#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"
namespace Mystring
{
	 const size_t string::npos=-1;

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
	}
	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}
		_str[_size] = ch;
		++_size;
		_str[_size] = '\0';
	}
	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			reserve(_size + len > 2 * _capacity ? _size + len : 2 * _capacity);
		}
		strcpy(_str+_size, str);
		_size += len;
	}

	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}
	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2); 
		}
		size_t end = _size+1;//为了防止隐式转换
		while (end >pos)
		{
			_str[end] = _str[end-1];
			--end;
		}
		_str[pos] = ch;
		++_size;
	}

	void string::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		size_t len = strlen(str);
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}
		size_t end = pos + _size;
		while (end > pos + len-1)
		{
			_str[end ] = _str[end - len];
			--end;
		}
		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;
	}
	void string::erase(size_t pos, size_t len)
	{
		if (len >= _size - pos)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			for (size_t i = 0; i <= _size; i++)
			{
				_str[i - len] = _str[i];
			}
			_size -= len;
		}
	}
	bool operator < (const string& s1, const string& s2)
	{
		return strcmp(s1._src(), s2._src()) < 0;
	}
	bool operator <= (const string& s1, const string& s2)
	{
		return s1 < s2 || s1 == s2;
	}
	bool operator > (const string& s1, const string& s2)
	{
		return !(s1 <= s2);
	}
	bool operator >= (const string& s1, const string& s2)
	{
		return !(s1 < s2);
	}
	bool operator == (const string& s1, const string& s2)
	{
		return strcmp(s1._src(), s2._src()) == 0;
	}
	bool operator != (const string& s1, const string& s2)
	{
		return !(s1 == s2);
	}
	ostream& operator<< (ostream& out,  string& s)
	{
		for (auto ch : s)
		{
			cout << ch;
		}
		return out;
	}
	istream& operator>> (istream& in, string& s)
	{
		s.clear();
		char ch;
		ch = in.get();
		while (ch != ' ' && ch != '\n')
		{
			s += ch;
			ch = in.get();

		}
		return in;
	}

}