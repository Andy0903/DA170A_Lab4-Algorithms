#define _CRTDBG_MAP_ALLOC
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif
#endif  // _DEBUG

#include <cassert>
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <numeric>
#include <algorithm>
#include <forward_list>


template <class ForwardIterator>
void ForwardSort(ForwardIterator begin, ForwardIterator end)
{
	//bubble sort
	for (auto it = begin; it != end; ++it)
	{
		for (auto jt = it; jt != end; ++jt)
		{
			if (*it > *jt)
			{
				std::iter_swap(it, jt);
			}
		}
	}
}

void Upg3()
{
	std::forward_list<int> v;
	v.emplace_front(5);
	v.emplace_front(9);
	v.emplace_front(2);
	v.emplace_front(6);
	v.emplace_front(4);
	v.emplace_front(7);
	v.emplace_front(8);
	v.emplace_front(1);
	v.emplace_front(3);
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl;

	ForwardSort(v.begin(), v.end());

	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

void Upg2()
{
	std::vector<int> v;
	v.resize(10);
	std::iota(v.begin(), v.end(), 0);
	std::random_shuffle(v.begin(), v.end());
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	v.erase(std::remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }), v.end());

	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

void Upg1d()
{
	int v[10];
	std::iota(std::begin(v), std::end(v), 0);
	std::random_shuffle(std::begin(v), std::end(v));
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	std::sort(std::begin(v), std::end(v), [](int a, int b) {return a > b; });
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

void Upg1c()
{
	std::vector<int> v;
	v.resize(10);
	std::iota(v.begin(), v.end(), 0);
	std::random_shuffle(v.begin(), v.end());
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	std::sort(v.rbegin(), v.rend());
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

void Upg1b()
{
	int v[10];
	std::iota(std::begin(v), std::end(v), 0);
	std::random_shuffle(std::begin(v), std::end(v));
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	std::sort(std::begin(v), std::end(v));
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

void Upg1a()
{
	std::vector<int> v;
	v.resize(10);
	std::iota(v.begin(), v.end(), 0);
	std::random_shuffle(v.begin(), v.end());
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	std::sort(v.begin(), v.end());
	for each (int i in v)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//std::locale::global(std::locale("swedish"));
	srand((unsigned)time(NULL));
	int   r = rand();

	std::cout << "------UPG 1A------" << std::endl;
	Upg1a();
	std::cout << "------UPG 1B------" << std::endl;
	Upg1b();
	std::cout << "------UPG 1C------" << std::endl;
	Upg1c();
	std::cout << "------UPG 1D------" << std::endl;
	Upg1d();
	std::cout << "------UPG 2------" << std::endl;
	Upg2();
	std::cout << "------UPG 3------" << std::endl;
	Upg3();

	std::cin.get();
}