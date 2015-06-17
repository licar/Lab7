
#include "stdafx.h"
#include <string>
#include "CAdvancedStudent.h"
#include "CPupil.h"
#include "CStudent.h"
#include "CTeacher.h"
#include "CWorker.h"

using namespace std;

BOOST_AUTO_TEST_CASE(TestCPupil)
{
	string name = "����";
	string surname = "�������";
	string patronymic = "���������";
	string address = "������ 45";
	string group = "7�";
	string school = "����� �15";
	CPupil test(name, surname, patronymic, address, group, school);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetClass(), group);
	BOOST_CHECK_EQUAL(test.GetSchool(), school);
	name = "�������";
	surname = "�������";
	patronymic = "������������";
	address = "Lenin street";
	group = "8A";
	school = "High school";
	test.SetName(name);
	test.SetSurname(surname);
	test.SetPatronymic(patronymic);
	test.SetAddress(address);
	test.SetClass(group);
	test.SetSchool(school);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetClass(), group);
	BOOST_CHECK_EQUAL(test.GetSchool(), school);
}


BOOST_AUTO_TEST_CASE(TestCTeacher)
{
	string name = "����";
	string surname = "�������";
	string patronymic = "���������";
	string address = "������ 45";
	string subject = "chemistry";
	CTeacher test(name, surname, patronymic, address, subject);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetSubject(), subject);
	name = "�������";
	surname = "�������";
	patronymic = "������������";
	address = "Lenin street";
	subject = "math";
	test.SetName(name);
	test.SetSurname(surname);
	test.SetPatronymic(patronymic);
	test.SetAddress(address);
	test.SetSubject(subject);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetSubject(), subject);
}

BOOST_AUTO_TEST_CASE(TestCAdvancedstudent)
{
	string name = "����";
	string surname = "�������";
	string patronymic = "���������";
	string address = "������ 45";
	string university = "MGU";
	string thesis = "qqq";
	int number = 78945;
	CAdvancedStudent test(name, surname, patronymic, address, university, number, thesis);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetNameOfUniversity(), university);
	BOOST_CHECK_EQUAL(test.GetNumberOfStudentCard(), number);
	BOOST_CHECK_EQUAL(test.GetThesis(), thesis);
	name = "�������";
	surname = "�������";
	patronymic = "������������";
	address = "Lenin street";
	university = "Volgatech";
	number = 455;
	thesis = "Wwww";
	test.SetName(name);
	test.SetSurname(surname);
	test.SetPatronymic(patronymic);
	test.SetAddress(address);
	test.SetNameOfUniversity(university);
	test.SetNumberOfStudentCard(number);
	test.SetThesis(thesis);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetNameOfUniversity(), university);
	BOOST_CHECK_EQUAL(test.GetNumberOfStudentCard(), number);
	BOOST_CHECK_EQUAL(test.GetThesis(), thesis);
}

BOOST_AUTO_TEST_CASE(TestCStudent)
{
	string name = "����";
	string surname = "�������";
	string patronymic = "���������";
	string address = "������ 45";
	string university = "MGU";
	string thesis = "qqq";
	int number = 78945;
	CStudent test(name, surname, patronymic, address, university, number);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetNameOfUniversity(), university);
	BOOST_CHECK_EQUAL(test.GetNumberOfStudentCard(), number);
	name = "�������";
	surname = "�������";
	patronymic = "������������";
	address = "Lenin street";
	university = "Volgatech";
	number = 455;
	test.SetName(name);
	test.SetSurname(surname);
	test.SetPatronymic(patronymic);
	test.SetAddress(address);
	test.SetNameOfUniversity(university);
	test.SetNumberOfStudentCard(number);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetNameOfUniversity(), university);
	BOOST_CHECK_EQUAL(test.GetNumberOfStudentCard(), number);
}

BOOST_AUTO_TEST_CASE(TestCWorker)
{
	string name = "����";
	string surname = "�������";
	string patronymic = "���������";
	string address = "������ 45";
	string speciality = "chemistry";
	CWorker test(name, surname, patronymic, address, speciality);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetSpeciality(), speciality);
	name = "�������";
	surname = "�������";
	patronymic = "������������";
	address = "Lenin street";
	speciality = "math";
	test.SetName(name);
	test.SetSurname(surname);
	test.SetPatronymic(patronymic);
	test.SetAddress(address);
	test.SetSpeciality(speciality);
	BOOST_CHECK_EQUAL(test.GetName(), name);
	BOOST_CHECK_EQUAL(test.GetSurname(), surname);
	BOOST_CHECK_EQUAL(test.GetPatronymic(), patronymic);
	BOOST_CHECK_EQUAL(test.GetAddress(), address);
	BOOST_CHECK_EQUAL(test.GetSpeciality(), speciality);
}