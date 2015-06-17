#pragma once
#include "CPersonImpl.h"
#include "ITeacher.h"

class CTeacher final : public CPersonImpl<ITeacher>
{
public:
	CTeacher(std::string& name, std::string& surname, std::string& patronymic, std::string& address, std::string& subject)
		: CPersonImpl<ITeacher>(name, surname, patronymic, address)
		, m_subject(subject)
	{		
	}
	std::string GetSubject() const
	{
		return m_subject;
	}
	void SetSubject(std::string & subject)
	{
		m_subject = subject;
	}
private:
	std::string m_subject;
};

