#pragma once
#include "IPerson.h"

class IStudent : public IPerson
{
public:
	virtual std::string GetNameOfUniversity() const = 0;
	virtual void SetNameOfUniversity(std::string& nameOfUniversity) = 0;
	virtual int GetNumberOfStudentCard() const = 0;
	virtual void SetNumberOfStudentCard(int numberOfStudentCard) = 0;
};

