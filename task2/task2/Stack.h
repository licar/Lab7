#pragma once
#include <string>
#include <vector>

template <typename T>
class CStack
{
public:

	struct Item
	{
		//  онструктор €вл€етс€ шаблонным, дл€ реализации т.н. perfect forwarding
		// ¬ случае, когда аргументом €вл€етс€ rvalue, значение будет перемещено
		// в противном случае - скопировано
		template <typename TT>
		Item(TT && value, std::shared_ptr<Item> && previous)
			: value(std::forward<T>(value))
			, previous(std::move(previous))
		{}

		T value;
		std::shared_ptr<Item> previous;
	};

	bool IsEmpty() const
	{
		return !m_top;
	}


	// ћетод Push €вл€етс€ шаблонным, дл€ реализации т.н. perfect forwarding
	// ¬ случае, когда аргументом €вл€етс€ rvalue, значение будет перемещено
	// в противном случае - скопировано
	template <typename TT>
	void Push(TT && value)
	{
		m_top = std::make_shared<Item>(std::forward<T>(value), move(m_top));
	}
	
	CStack()
	{
	}

	~CStack()
	{
	}

	CStack & operator=(CStack const& stack)
	{
		std::vector<std::shared_ptr<Item>> ptrs;
		auto top = stack.m_top;
		T value;

		while (top != nullptr)
		{
			value = top->value;
			ptrs.push_back(std::make_unique<Item>(value, nullptr));
			top = top->previous;
		}
	
		for (size_t i = 0; i != (ptrs.size() - 1); ++i)
		{
			ptrs[i]->previous = ptrs[i + 1];
		}
		m_top = std::move(ptrs[0]);

		return *this;
	}

	CStack(CStack const &stack)
	{
		std::vector<std::shared_ptr<Item>> ptrs;
		auto top = stack.m_top;
		T value;

		while (top != nullptr)
		{
			value = top->value;
			ptrs.push_back(std::make_unique<Item>(value, nullptr));
			top = top->previous;
		}

		for (size_t i = 0; i != (ptrs.size() - 1); ++i)
		{
			ptrs[i]->previous = ptrs[i + 1];
		}
		m_top = std::move(ptrs[0]);
	}

	T Pop()
	{
		T top = m_top->value;
		m_top = move(m_top->previous);
		return top;
	}

	T Peek()
	{
		return m_top->value;
	}

	void Clear()
	{
		while (!IsEmpty())
		{
			m_top = move(m_top->previous);
		}
	}

private:
	std::shared_ptr<Item> m_top;
};

