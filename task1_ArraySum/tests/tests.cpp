// tests.cpp: определяет точку входа для консольного приложения.
//
#pragma once
#include "stdafx.h"
#include "../task1_ArraySum/ArraySumDef.h"

BOOST_AUTO_TEST_CASE(CanSumInt)
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	BOOST_CHECK_EQUAL(ArraySum(numbers), 3);
}

BOOST_AUTO_TEST_CASE(CanSumString)
{
	vector<string> strings;
	strings.push_back("cat");
	strings.push_back("max");
	BOOST_CHECK_EQUAL(ArraySum(strings), "catmax");
}

BOOST_AUTO_TEST_CASE(CanSumFloatNumbers)
{
	vector<double> floatNumbers;
	floatNumbers.push_back(0.2);
	floatNumbers.push_back(0.3);
	BOOST_CHECK_EQUAL(ArraySum(floatNumbers), 0.5);
}

BOOST_AUTO_TEST_CASE(IfEmptyVector)
{
	vector<double> floatNumbers;
	BOOST_CHECK_EQUAL(ArraySum(floatNumbers), 0);
	vector<string> strings;
	BOOST_CHECK_EQUAL(ArraySum(strings), "");
	vector<int> numbers;
	BOOST_CHECK_EQUAL(ArraySum(numbers), 0);
}






