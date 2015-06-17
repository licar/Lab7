#pragma once
#include "CStudentImpl.h"
#include "IStudent.h"

class CStudent final : public CStudentImpl<IStudent>
{
public:
	CStudent(std::string& name, std::string& surname, std::string& patronymic, std::string& address, std::string& universityName, int numberOfStudentCard)
		:CStudentImpl(name, surname, patronymic, address, universityName, numberOfStudentCard)
	{
	}
};