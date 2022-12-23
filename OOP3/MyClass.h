#pragma once
#include <string>
#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(const std::string& name, int age);

	const std::string& getName() const;
	void setName(const std::string& name);

	int getAge();
	void setAge(int age);

	bool operator==(MyClass& other);

private:
	std::string _name;
	int _age;
};

