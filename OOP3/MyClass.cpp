#include "MyClass.h"


MyClass::MyClass():_name ("No_name"), _age (NULL) {}
MyClass::MyClass(const std::string & name, int age) : _name(name), _age(age) {}

const std::string& MyClass::getName() const {
	return _name;
}

void MyClass::setName(const std::string& name) {
	_name = name;
}

int MyClass::getAge() {
	return _age;
}

void MyClass::setAge(int age) {
	_age = age;
}

bool MyClass::operator == (MyClass& other) {
	return _age == other.getAge();
}

