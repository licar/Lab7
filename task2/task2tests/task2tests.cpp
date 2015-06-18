// task2tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task2/Stack.h"

struct Item
{

};

struct DefaultStack_
{
	CStack<Item> defaultStack;
};
// —тек по умолчанию:
BOOST_FIXTURE_TEST_SUITE(DefaultStack, DefaultStack_)
	// €вл€етс€ пустым
	BOOST_AUTO_TEST_CASE(IsEmpty)
	{
		BOOST_CHECK(defaultStack.IsEmpty());
	}

	// после добавлени€ элемента становитс€ не пустым
	BOOST_AUTO_TEST_CASE(BecomesNotEmptyAutoPushingAnElement)
	{
		defaultStack.Push(Item());
		BOOST_CHECK(!defaultStack.IsEmpty());
	}

	
BOOST_AUTO_TEST_SUITE_END()

struct StringStack_
{
	CStack<std::string> stringStack;
};

BOOST_FIXTURE_TEST_SUITE(StringStack, StringStack_)
// €вл€етс€ пустым

// после добавлени€ элемента становитс€ не пустым
BOOST_AUTO_TEST_CASE(CanPushAndPeek)
{
	stringStack.Push("str");
	BOOST_CHECK_EQUAL(stringStack.Peek(), "str");
}

BOOST_AUTO_TEST_CASE(CanPop)
{
	stringStack.Push("ad");
	stringStack.Push("da");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "da");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "ad");
	BOOST_CHECK(stringStack.IsEmpty());
}

BOOST_AUTO_TEST_CASE(CanClear)
{
	stringStack.Push("ad");
	stringStack.Push("da");
	BOOST_CHECK(!stringStack.IsEmpty());
	stringStack.Clear();
	BOOST_CHECK(stringStack.IsEmpty());
}

BOOST_AUTO_TEST_CASE(CanConstructFromStack)
{
	stringStack.Push("abc");
	stringStack.Push("bcd");
	stringStack.Push("cde");
	
	BOOST_CHECK_EQUAL(stringStack.Peek(), "cde");
	CStack<std::string> stringStackTwo(stringStack);
	BOOST_CHECK(!stringStack.IsEmpty());
	BOOST_CHECK(!stringStackTwo.IsEmpty());

	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "cde");
	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "bcd");
	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "abc");

	BOOST_CHECK_EQUAL(stringStack.Pop(), "cde");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "bcd");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "abc");
}

BOOST_AUTO_TEST_CASE(CanAssigned)
{
	stringStack.Push("abc");
	stringStack.Push("bcd");
	stringStack.Push("cde");

	CStack<std::string> stringStackTwo = stringStack;
	BOOST_CHECK(!stringStack.IsEmpty());
	BOOST_CHECK(!stringStackTwo.IsEmpty());
	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "cde");
	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "bcd");
	BOOST_CHECK_EQUAL(stringStackTwo.Pop(), "abc");

	BOOST_CHECK_EQUAL(stringStack.Pop(), "cde");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "bcd");
	BOOST_CHECK_EQUAL(stringStack.Pop(), "abc");

}

BOOST_AUTO_TEST_CASE(TestInteger)
{
	CStack<int> intStack;
	intStack.Push(10);
	intStack.Push(20);
	intStack.Push(30);

	CStack<int> intStackTwo = intStack;
	BOOST_CHECK(!intStack.IsEmpty());
	BOOST_CHECK(!intStackTwo.IsEmpty());
	BOOST_CHECK_EQUAL(intStackTwo.Pop(), 30);
	BOOST_CHECK_EQUAL(intStackTwo.Pop(), 20);
	BOOST_CHECK_EQUAL(intStackTwo.Pop(), 10);

	BOOST_CHECK_EQUAL(intStack.Pop(), 30);
	BOOST_CHECK_EQUAL(intStack.Pop(), 20);
	BOOST_CHECK_EQUAL(intStack.Pop(), 10);
}

BOOST_AUTO_TEST_SUITE_END()
