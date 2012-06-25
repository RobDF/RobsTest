// lambdaTest.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>

using namespace std;

array<string,50> a;

class func
{
	int val;
public:
	explicit func( int x ) : val( x ) {}
	bool operator() (int n )
	{
		if( n > val )
		{
			cout << n << " is greater than " << val << endl;
			return true;
		}
		cout << n << " isn't greater than " << val << endl;
		return false;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	auto p = make_shared<char>;
	vector<int> v;
	for( int i = 0; i < 10; ++i )
	{
		v.push_back(i);
	}

	for_each( v.begin(), v.end(), func(5) );
	//int x;
	//auto i = find_if( begin(v), end(v), [x](int i){return i > x; });
	return 0;
}

