#pragma once
#include "CPersonImpl.h"
#include "IWorker.h"

class CWorker final : public CPersonImpl<IWorker> 
{
public:
	CWorker(std::string& name, std::string& surname, std::string& patronymic, std::string& address, std::string& speciality)
		: CPersonImpl<IWorker>(name, surname, patronymic, address)
		, m_speciality(speciality)
	{
	}
	std::string GetSpeciality() const override
	{
		return m_speciality;
	}
	void SetSpeciality(std::string & speciality) override
	{
		m_speciality = speciality;
	}
private:
	std::string m_speciality;
};

