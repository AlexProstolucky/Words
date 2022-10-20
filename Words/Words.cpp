#include <iostream>
#include <list>
using namespace std;

void solution(list <string> l1, list <string> l2, list <string> l3)
{
    list <string> res = l1;
	int count = 0;
	for (auto i = l2.begin(); i != l2.end(); i++)
	{
		for (auto j = res.begin(); j != res.end(); j++)
		{
			if (*j == *i) count++;
		}
		if (count == 0) res.push_back(*i);
		count = 0;
	}

	for (auto i = l3.begin(); i != l3.end(); i++)
	{
		for (auto j = res.begin(); j != res.end(); j++)
		{
			if (*j == *i) count++;
		}
		if (count == 0) res.push_back(*i);
		count = 0;
	}


	for (auto i = res.begin(); i != res.end(); i++)
	{
		cout << *i << " ";
	}
}

int main()
{
	list <string> l1{"a","b","c"};
	list <string> l2{"c","a","d"};
	list <string> l3{"x","d","y"};
	solution(l1, l2, l3);
}