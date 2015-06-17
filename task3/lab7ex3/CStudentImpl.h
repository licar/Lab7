#pragma once
#include "CPersonImpl.h"
#include "IStudent.h"
template <typename Base>

class CStudentImpl : public CPersonImpl<Base>
{
public:
	CStudentImpl(std::string& name, std::string& surname, std::string& patronymic, std::string& address, std::string& universityName, int numberOfStudentCard)
		: CPersonImpl<Base>(name, surname, patronymic, address)
		, m_universityName(universityName)
		, m_numberOfStudentCard(numberOfStudentCard)
	{
	}
	std::string GetNameOfUniversity() const override
	{
		return m_universityName;
	}
	void SetNameOfUniversity(std::string& universityName) override
	{
		m_universityName = universityName;
	}
	int GetNumberOfStudentCard() const override
	{
		return m_numberOfStudentCard;
	}
	void SetNumberOfStudentCard(int numberOfStudentCard) override
	{
		m_numberOfStudentCard = numberOfStudentCard;
	}
private:
	std::string m_universityName;
	int m_numberOfStudentCard;
};

