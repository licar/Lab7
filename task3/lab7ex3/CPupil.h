#pragma once
#include "CPersonImpl.h"
#include "IPupil.h"

class CPupil final : public CPersonImpl<IPupil>
{
public:
	CPupil(std::string& name, std::string& surname, std::string& patronymic, std::string& address, std::string& group, std::string& school)
		: CPersonImpl<IPupil>(name, surname, patronymic, address)
		, m_group(group)
		, m_school(school)
	{
	}
	std::string GetSchool() const override
	{
		return m_school;
	}
	void SetSchool(std::string & school) override
	{
		m_school = school;
	}
	std::string GetClass() const override
	{
		return m_group;
	}
	void SetClass(std::string & group) override
	{
		m_group = group;
	}

private:
	std::string m_group, m_school;
};

