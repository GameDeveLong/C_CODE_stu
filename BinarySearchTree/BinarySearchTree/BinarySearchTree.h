#pragma once
#include<iostream>
using namespace std;
namespace key
{
	template<class k>
	struct BSTNode
	{
		k _key;
		BSTNode<k>* _left;
		BSTNode<k>* _right;
		BSTNode(const k& key)
			:_key(key)
			, _left(nullptr)
			, _right(nullptr)
		{}
	};

	template<class k>
	class BSTree
	{
		typedef BSTNode<k> Node;
	public:
		BSTree() = default;

		BSTree(const BSTree& t)
		{
			_root = Copy(t._root);
		}
		BSTree& operator=(BSTree tmp)
		{
			swap(_root, tmp._root);
			return *this;
		}
		~BSTree()
		{
			Destroy(_root);
			_root = nullptr;
		}
		bool Insert(const k& key)
		{
			if (_root == nullptr)
			{
				_root = new Node(key);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(key);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else if (parent->_key > key)
			{
				parent->_left = cur;
			}
			return true;
		}
		bool Find(const k& key)
		{
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return true;
				}
			}
			return false;
		}

		bool Erase(const k& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					//左为空
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;
					}
					else if (cur->_right == nullptr)
					{
						//右为空
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							else
							{
								parent->_right = cur->_left;
							}
						}
						delete cur;
					}
					else
					{
						//左右都不为空
						//右子树的最左边
						Node* replaceParent = cur;
						Node* replace = cur->_right;
						while (replace->_left)
						{
							replaceParent = replace;
							replace = replace->_left;
						}
						cur->_key = replace->_key;
						//当删除根的时候
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;
						delete replace;
					}
					return true;
				}
			}
			return false;
		}
		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}
		void Destroy(Node* root)//后序析构
		{
			if (root == nullptr)
				return;
			Destroy(root->_left);
			Destroy(root->_right);
			delete root;
		}
		Node* Copy(Node* root)
		{
			if (root == nullptr)
				return nullptr;
			Node* newRoot = new Node(root->_key, root->_value);
			newRoot->_left = Copy(root->_left);
			newRoot->_right = Copy(root->_right);
			return newRoot;
		}
	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
				return;
			_InOrder(root->_left);
			cout << root->_key << " ";
			_InOrder(root->_right);
		}

		Node* _root = nullptr;
	};
}
namespace key_value
{
	template<class k,class V>
	struct BSTNode
	{
		k _key;
		BSTNode<k,V>* _left;
		BSTNode<k,V>* _right;
		BSTNode(const k& key, const V& value)
			:_key(key)
			, _left(nullptr)
			, _right(nullptr)
		{}
	};
	template<class k,class V>
	class BSTree
	{
		typedef BSTNode<k,V> Node;
	public:
		BSTree() = default;

		BSTree(const BSTree& t)
		{
			_root = Copy(t._root);
		}
		BSTree& operator=(BSTree tmp)
		{
			swap(_root, tmp._root);
			return *this;
		}
		~BSTree()
		{
			Destroy(_root);
			_root = nullptr;
		}
		bool Insert(const k& key, const V& value)
		{
			if (_root == nullptr)
			{
				_root = new Node(key,value);
				return true;
			}

			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					return false;
				}
			}

			cur = new Node(key,value);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else if (parent->_key > key)
			{
				parent->_left = cur;
			}
			return true;
		}
		Node* Find(const k& key)
		{
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}
			return nullptr;
		}

		bool Erase(const k& key)
		{
			Node* parent = nullptr;
			Node* cur = _root;
			while (cur)
			{
				if (cur->_key < key)
				{
					parent = cur;
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					parent = cur;
					cur = cur->_left;
				}
				else
				{
					//左为空
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;
					}
					else if (cur->_right == nullptr)
					{
						//右为空
						if (cur == _root)
						{
							_root = cur->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							else
							{
								parent->_right = cur->_left;
							}
						}
						delete cur;
					}
					else
					{
						//左右都不为空
						//右子树的最左边
						Node* replaceParent = cur;
						Node* replace = cur->_right;
						while (replace->_left)
						{
							replaceParent = replace;
							replace = replace->_left;
						}
						cur->_key = replace->_key;
						//当删除根的时候
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;
						delete replace;
					}
					return true;
				}
			}
			return false;
		}
		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}
		void Destroy(Node* root)//后序析构
		{
			if (root == nullptr)
				return;
			Destroy(root->_left);
			Destroy(root->_right);
			delete root;
		}
		Node* Copy(Node* root)
		{
			if (root == nullptr)
				return nullptr;
			Node* newRoot = new Node(root->_key, root->_value);
			newRoot->_left = Copy(root->_left);
			newRoot->_right = Copy(root->_right);
			return newRoot;
		}
	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
				return;
			_InOrder(root->_left);
			cout << root->_key << " ";
			_InOrder(root->_right);
		}

		Node* _root = nullptr;
	};
}