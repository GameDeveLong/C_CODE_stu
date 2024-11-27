#pragma once
#include <iostream>
using namespace std;
#include <assert.h>
namespace Myvector
{
	template< class T>
		class vector
		{
		public:
			// Vector的迭代器是一个原生指针
			typedef T* iterator;
			typedef const T* const_iterator;
			vector()
				:_start(nullptr)
				, _finish(nullptr)
				, _end_of_storage(nullptr)
			{}
			vector(size_t n, const T& value = T())
				:_start(nullptr)
				, _finish(nullptr)
				, _end_of_storage(nullptr)
			{
				reserve(n);
				while (n--)
				{
					push_back(value);
				}
			}
			vector(int n, const T& value = T())
				:_start(new T[n])
				, _finish(_start + n)
				, _end_of_storage(_finish)
			{
				for (int i = 0; i < n; ++i)
				{
					_start[i] = value;
				}
			}
			// 重新声明迭代器，迭代器区间[first,last)可以是任意容器的迭代器
			template<class InputIterator>
			vector(InputIterator first, InputIterator last)
			{
				while (first != last)
				{
					push_back(*first);
					++first;
				}
			}
			vector(const vector<T>& v)
			{
				reserve(v.size());
				for (auto& e : v)
				{
					push_back(e);
				}
			}
			~vector()
			{
				if (_start)
				{
					delete[] _start;
				}
				_start = _finish = _end_of_storage = nullptr;

			}
			
			// 迭代器相关
			iterator begin()
			{
				return _start;
			}
			iterator end()
			{
				return _finish;
			}
			const_iterator cbegin() const
			{
				return _start;
			}

			const_iterator cend() const
			{
				return _finish;
			}
		// 容量相关
			size_t size() const
			{
				return  _finish -_start;
			}
			size_t capacity() const
			{
				return  _end_of_storage -_start;
			}
			bool empty() const
			{
				return _start == _finish;
			}
			void reserve(size_t n)
			{
				if (n > capacity())
				{
					size_t old_size = size();
					T* tmp=new T[n];
					if (_start)
					{
						for (size_t i = 0; i < old_size; i++)
						{
							tmp[i] = _start[i];
						}
						delete[] _start;

					}
					_start = tmp;
					_finish = _start + old_size;
					_end_of_storage = _start + n;
				}	
			}
			void resize(size_t n, const T& value = T())
			{
				// 1.如果n小于当前的size，则数据个数缩小到n
				if (n <= size())
				{
					_finish = _start + n;
					return;
				}
				if (n > capacity())
					reserve(n);
				//将size扩大到n
				iterator it = _finish;
				_finish = _start + n;
				while (it != _finish)
				{
					*it = value;
					++it;
				}
			}

			/////////////////////////////////////////////////////
		// vector的修改操作
			void push_back(const T& x)
			{
				//insert(end(), x);
				if (_finish == _end_of_storage)
				{
					reserve(capacity() == 0 ? 4 : capacity() * 2);
				}
				*_finish = x;
				++_finish;
			}
			void swap(vector<T>& v)
			{
				std::swap(_start, v._start);
				std::swap(_finish, v._finish);
				std::swap(_end_of_storage, v._end_of_storage);
			}
			void pop_back()
			{
				--_finish;
			}
			iterator insert(iterator pos, const T& x)
			{
				assert(pos <= _finish);
				if (_finish == _end_of_storage)
				{
					size_t len = pos-_start ;
					reserve(capacity() == 0 ? 4 : capacity() * 2);
					pos = _start+len;
				}
				iterator end = _finish - 1;
				while (end >= pos)
				{
					*(end + 1) = *end;
					--end;
				}
				*pos = x;
				++_finish;
				return pos;
			}
			iterator erase(iterator pos)
			{
				iterator begin = pos + 1;
				while (begin != _finish)
				{
					*(begin - 1) = *begin;
					++begin;
				}
				--_finish;
				return pos;
			}
			// 元素访问
			T& operator[](size_t pos)
			{
				assert(pos < size());
				return _start[pos];
			}
			const T& operator[](size_t pos) const
			{
				assert(pos < size());
				return _start[pos];
			}
		private:
			iterator _start;
			iterator _finish;
			iterator _end_of_storage;
		};
		void TestVector1()
		{
			vector<int> v;
			v.push_back(1);
			v.push_back(2);
			v.push_back(3);
			v.push_back(4);
			v.push_back(5);

			for (size_t i = 0; i < v.size(); i++)
			{
				cout << v[i] << " ";
			}
			cout << endl;

			vector<int>::iterator it = v.begin();
			while (it != v.end())
			{
				cout << *it << " ";
				++it;
			}
			cout << endl;
			cout << endl;
		}

}
