#pragma once
#include "IAdvancedStudent.h"
#include "CStudentImpl.h"

class CAdvancedStudent final : public CStudentImpl<IAdvancedStudent>
{
public:
	CAdvancedStudent(std::string& name, std::string& surname, std::string& patronymic, std::string& address, 
		std::string& universityName, int numberOfStudentCard, std::string& thesis)
		: CStudentImpl(name, surname, patronymic, address, universityName, numberOfStudentCard)
		, m_thesis(thesis)
	{
	}
	std::string GetThesis() const override
	{
		return m_thesis;
	}
	void SetThesis(std::string& thesis) override
	{
		m_thesis = thesis;
	}
private:
	std::string m_thesis;
};
