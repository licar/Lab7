#pragma once
#include <string>

template <typename T>
class CStack
{
public:

	struct Item
	{
		// ����������� �������� ���������, ��� ���������� �.�. perfect forwarding
		// � ������, ����� ���������� �������� rvalue, �������� ����� ����������
		// � ��������� ������ - �����������
		template <typename TT>
		Item(TT && value, std::unique_ptr<Item> && previous)
			: m_value(std::forward<T>(value))
			, m_previous(std::move(previous))
		{}

		T m_value;
		std::unique_ptr<Item> m_previous;
	};

	bool IsEmpty() const
	{
		return !m_top;
	}


	// ����� Push �������� ���������, ��� ���������� �.�. perfect forwarding
	// � ������, ����� ���������� �������� rvalue, �������� ����� ����������
	// � ��������� ������ - �����������
	template <typename TT>
	void Push(TT && value)
	{
		m_top = std::make_unique<Item>(std::forward<T>(value), move(m_top));
	}
	
	CStack()
	{
	}

	~CStack()
	{
	}

	CStack & operator=(CStack const& stack)
	{
		m_top = std::move(stack.m_top);
		return *this;
	}

	CStack(CStack const &stack)
	{
		T *item = stack.m_top;
		
		while (item != NULL){
			Push(item);
			item = item->next;
		}
	}

	T Pop()
	{
		T top = m_top->m_value;
		m_top = move(m_top->m_previous);
		return top;
	}

	T Peek()
	{
		return m_top->m_value;
	}

	void Clear()
	{
		while (!IsEmpty())
		{
			m_top = move(m_top->m_previous);
		}
	}

private:
	std::unique_ptr<Item> m_top;
};

