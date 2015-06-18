#pragma once
#include <string>

class IPerson
{
public:
	virtual std::string GetName() const = 0;
	virtual void SetName(std::string& name) = 0;
	virtual std::string GetSurname() const = 0;
	virtual void SetSurname(std::string& surname) = 0;
	virtual std::string GetPatronymic() const = 0;
	virtual void SetPatronymic(std::string& patronymic) = 0;
	virtual std::string GetAddress() const = 0;
	virtual void SetAddress(std::string& address) = 0;
	virtual ~IPerson(){}
};
