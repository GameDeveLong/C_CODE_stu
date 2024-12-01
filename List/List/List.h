#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace Mylist
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;

		list_node(const T& data=T())
			:_data(data)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	};
	template<class T, class Ref, class Ptr>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T, Ref, Ptr> Self;
		Node* _node;

		list_iterator(Node* node)
			:_node(node)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &_node->_data;
		}

		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;

			return tmp;
		}

		Self& operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prev;

			return tmp;
		}

		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}

		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}
	};
	/*template<class T>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T> Self;

		Node* _node;

		list_iterator(Node* node)
			:_node(node)
		{}
		T& operator*()
		{
			return _node->_data;
		}
		T operator->()
		{
			return &_node->_data;
		}
		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}
		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}
		Self operator++(int)
		{
			Self tmp(this);
			_node = _node->_next;
			return *tmp;
		}
		Self operator--(int)
		{
			Self tmp(this);
			_node = _node->_prev;
			return tmp;
		}
		bool operator!=(const Self& s) const
		{
			return _node != s._node;
		}
		bool operator==(const Self& s) const
		{
			return _node == s._node;
		}
	};*/
	template<class T>
	class list
	{
		typedef list_node<T> Node;
	public:
		typedef list_iterator<T,T&, const T*> iterator;
		typedef list_iterator<T, const T&, const T*> const_iterator;
		iterator begin()
		{
			return _head->_next;
		}
		iterator end()
		{
			return _head;
		}
		void empty_init()
		{
			_head = new Node(T());
			_head->_next = _head;
			_head->_prev = _head;
			_size = 0;
		}
		list()
		{
			empty_init();
		}
		list(const list<T>& lt)
		{
			empty_init();
			for (auto e : lt)
			{
				push_back(e);
			}
		}
		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}
		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			auto it = begin();
			while (it != end())
			{
				it=erase(it);
			}
		}
		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
			std::swap(_size, lt._size);
		}

		void push_back(const T& x)
		{
			/*Node* newnode = new Node(x);
			Node* tail = _head->_prev;

			tail->_next = newnode;
			newnode->_prev = tail;
			newnode->_next = _head;
			_head->_prev = newnode;
			++_size;*/
			insert(end(), x);
		}
		void pop_back(const T& x)
		{
			insert(begin(), x);
		}
		void pop_back()
		{
			erase(--end());
		}
		void pop_front()
		{
			erase(begin());  
		}
		iterator erase(iterator pos)
		{
			assert(pos != end());
			Node* prev = pos._node->_prev;
			Node* next = pos._node->_next;

			prev->_next = next;
			next->_prev = prev;
			delete pos._node;
			--_size;

			return next;
		}
		size_t size() const
		{
			return _size;
		}

		iterator insert(iterator pos,const T& x)//在pos这个位置之前插入
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;

			Node* newnode = new Node(x);

			//prev newnode cur
			newnode->_next = cur;
			cur->_prev = newnode;
			newnode->_prev = prev;
			prev->_next = newnode;
			++_size;

			return newnode;
		}
		bool empty() const
		{
			return _size == 0;
		}
	private:
		Node* _head;
		size_t _size;
	};
	void test02()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		list<int> lt1(lt);
		list<int>::iterator it1 = lt.begin();
		while (it1 != lt.end())
		{
			cout << *it1 << " ";
			++it1;
		}
		cout << endl;
	}
}
