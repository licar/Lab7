#pragma once
#include "IPerson.h"

class IPupil : public IPerson
{
public:
	virtual std::string GetSchool() const = 0;
	virtual void SetSchool(std::string & school) = 0;
	virtual std::string GetClass() const = 0;
	virtual void SetClass(std::string & group) = 0;
};
