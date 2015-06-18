#pragma once

template <class CBase>
class CPersonImpl : public CBase
{
public:
	CPersonImpl(std::string& name, std::string &surname, std::string& patronymic, std::string& address)
		: m_name(name)
		, m_surname(surname)
		, m_patronymic(patronymic)
		, m_address(address)
	{
	}
	virtual std::string GetName() const override
	{
		return m_name;
	}
	virtual void SetName(std::string& name)  override
	{
		m_name = name;
	}
	virtual std::string GetSurname() const override
	{
		return m_surname;
	}
	virtual void SetSurname(std::string& surname)  override
	{
		m_surname = surname;
	}
	virtual std::string GetPatronymic() const override
	{
		return m_patronymic;
	}
	virtual void SetPatronymic(std::string& patronymic)  override
	{
		m_patronymic = patronymic;
	}
	virtual std::string GetAddress() const override
	{
		return m_address;
	}
	virtual void SetAddress(std::string& address) override
	{
		m_address = address;
	}
private:
	std::string m_name, m_surname, m_patronymic, m_address;
};