#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<set>
#include<vector>
#include<map>
#include<string>
using namespace std;
////int main()
////{			
////	// 去重+升序排序
////	set<int> s;
////	//set<int, greater<int>> s;
////	s.insert(5);
////	s.insert(2);
////	s.insert(7);
////	s.insert(5);
////	s.insert(7);
////	s.insert(3);
////	//set<int>::iterator it = s.begin();
////	auto it = s.begin();
////	while (it != s.end())
////	{
////		cout << *it <<" ";
////		++it;
////	}
////	cout << endl;
////	s.insert({ 2,8,3,9,2 });
////	for (auto e : s)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////	set<string> strset = { "sort", "insert", "add" };
////	//遍历string比较ascll码大小顺序遍历的
////	for (auto& e : strset)
////	{
////		cout << e << " ";
////	}
////	cout << endl;
////	return 0;
////}

//int main()
//{
//	set<int> s;
//
//	vector <int> v = { 4,6,1,9,10 };
//	set<int> s1(v.begin(), v.end());
//	for (auto e : s1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	set<int> s2(s1);
//	for (auto e : s1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	set<int> s3 = { 3,6,1,2,9 };
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	////删除最小值
//	//s.erase(s.begin());
//	//for (auto e : s)
//	//{
//	//	cout << e << " ";
//	//}
//	return 0;
//}
//#include<iostream>
//#include<set>
//using namespace std;
//int main()
//{
//	// 相比set不同的是，multiset是排序，但是不去重
//	multiset<int> s = { 4,2,7,2,4,8,4,5,4,9 };
//	auto it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	// 相比set不同的是，x可能会存在多个，find查找中序的第⼀个
//	int x;
//	cin >> x;
//	auto pos = s.find(x);
//	while(pos != s.end() && *pos == x)
//	{
//		cout << *pos << " ";
//		++pos;
//	}
//	cout << endl;
//	// 相比set不同的是，count会返回x的实际个数
//	cout << s.count(x) << endl;
//	// 相比set不同的是，erase给值时会删除所有的x
//	s.erase(x);
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}
//
//#include <iostream>
//#include <utility>
//int main() {
//    std::pair<std::string, int> p("ten", 10);
//    std::cout << "The first value is: " << p.first << std::endl;
//    std::cout << "The second value is: " << p.second << std::endl;
//    return 0;
//}
//#include<iostream>
//#include<set>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//int main()
//{
//	//默认构造，key为int类型，value为string类型
//	map<int ,string> myMap;
//
//	//迭起器构造
//	vector<pair<int, string>> vec = { {1, "one"}, {2, "two"} };
//	map<int, string> myMap(vec.begin(), vec.end());
//
//	//拷贝构造
//	map<int, string> otherMap = { {1, "one"}, {2, "two"} };
//	map<int, string> myMap(otherMap);
//
//	//初始化列表构造
//	map<int, string> otherMap = { {1, "one"}, {2, "two"} };
//
//	return 0;
//}

//int main()
//{
//	map<string, string> dict;
//	pair<string, string> kv1("first", "第一个");
//	dict.insert(kv1);
//	dict.insert({ "second", "第二个" });
//	dict.insert(make_pair("sort", "排序"));
//	//这两种方式都可以将键值对插入到 map 中。
//	// 如果插入的键已经存在， insert 操作会失败（在 map 中键是唯一的），
//	// 不会修改已有的键值对。
//	// C++11
//	dict.insert({ "auto", "自动的" });
//
//	//仅仅=适用于插入新键
//	dict["three"];
//
//	// 这样就删除了键为 "first"的键值对。
//	dict.erase("first");
//	map<string, string>::iterator it = dict.begin();
//	while (it != dict.end())
//	{
//		// 可以修改value，不支持修改key
//		//it->first += 'x';
//		it->second += 'x';
//
//		//cout << (*it).first <<":"<< (*it).second<< endl;
//		cout << it->first << ":" << it->second << endl;
//		//cout << it.operator->()->first << ":" << it.operator->()->second << endl;
//		++it;
//	}
//	cout << endl;
//	return 0;
//}

#include<iostream>
#include<map>
using namespace std;
int main()
{
	// initializer_list构造及迭代遍历
	map<string, string> dict = { {"left", "左边"}, {"right", "右边"},
	{"insert", "插入"},{ "string", "字符串" } };
	//map<string, string>::iterator it = dict.begin();
	auto it = dict.begin();
	while (it != dict.end())
	{
		//cout << (*it).first <<":"<<(*it).second << endl;
		// map的迭代基本都使用operator->,这里省略了⼀个->
		// 第⼀个->是迭代器运算符重载，返回pair*，第⼆个箭头是结构指针解引⽤取
		//pair数据
		//cout << it.operator->()->first << ":" << it.operator->()-
        //> second << endl;
		cout << it->first << ":" << it->second << endl;
		++it;
	}
	cout << endl;
	// insert插入pair对象的4种方式，对比之下，最后⼀种最方便
	pair<string, string> kv1("first", "第⼀个");
	dict.insert(kv1);
	dict.insert(pair<string, string>("second", "第⼆个"));
	dict.insert(make_pair("sort", "排序"));
	dict.insert({ "auto", "⾃动的" });
	// "left"已经存在，插入失败
	dict.insert({ "left", "左边，剩余" });
	// 范围for遍历
	for (const auto& e : dict)
	{
		cout << e.first << ":" << e.second << endl;
	}
	cout << endl;
	string str;
	while (cin >> str)
	{
		auto ret = dict.find(str);
		if (ret != dict.end())
		{
			cout << "->" << ret->second << endl;
		}
		else
		{
			cout << "无此单词，请重新输⼊" << endl;
		}
	}
	return 0;
}