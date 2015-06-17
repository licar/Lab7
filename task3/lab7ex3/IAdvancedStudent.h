#pragma once
#include "IStudent.h"

class IAdvancedStudent : public IStudent
{
public:
	virtual std::string GetThesis() const = 0;
	virtual void SetThesis(std::string& thesis) = 0;
};
