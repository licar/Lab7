#pragma once
#include <vector>
#include <string>
using namespace std;
template <typename T>

T ArraySum(vector<T> const &arrayElem)
{
	if (arrayElem.empty())
	{
		return T();
	}

	T sumElem = T();

	for (auto &elem : arrayElem)
	{
			sumElem += elem;
	}

	return sumElem;
}