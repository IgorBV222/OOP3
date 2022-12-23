#include <iostream>
#include "Person.h"
#include "MyClass.h"
//Практика по классам

int main()
{
    setlocale(LC_ALL, "rus");
    Person p1("Alex");
    Person p2("Jonn");

    std::cout << p1.getName() << std::endl;
    std::cout << p2.getName() << std::endl;

    //Person p3 = p1.operator+(p2);
    Person p3 = p1 + p2;
    std::cout << "-----------------" << std::endl;
    std::cout << p3.getName() << std::endl;

    std::cout << "Больше ли р1, чем р2? -----> " << (p1 > p2) << std::endl;

    std::cout << "===============================" << std::endl << std::endl;

    MyClass m1("Bill", 25);
    MyClass m2("Bob", 5);
    MyClass m3; //по конструктору по умолчанию

    std::cout << m1.getName() << " возраст: " << m1.getAge() << std::endl;
    std::cout << m2.getName() << " возраст: " << m2.getAge() << std::endl;   
    std::cout << m3.getName() << " возраст: " << m3.getAge() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Возраст " << m1.getName() << " == " << "возрасту " << m2.getName() << "? -> " << (m1 == m2) << std::endl;
    std::cout << "Возраст " << m1.getName() << " == " << "возрасту " << m3.getName() << "? -> " << (m1 == m3) << std::endl;
    std::cout << "Возраст " << m2.getName() << " == " << "возрасту " << m3.getName() << "? -> " << (m2 == m3) << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
   
    m3.setName("Jon");
    m3.setAge(5);
    std::cout << "Новое имя 'No_name' будет " << m3.getName() << " новый возраст : " << m3.getAge() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Возраст " << m1.getName() << " == " << "возрасту " << m2.getName() << "? -> " << (m1 == m2) << std::endl;
    std::cout << "Возраст " << m1.getName() << " == " << "возрасту " << m3.getName() << "? -> " << (m1 == m3) << std::endl;
    std::cout << "Возраст " << m2.getName() << " == " << "возрасту " << m3.getName() << "? -> " << (m2 == m3) << std::endl;
    std::cout << "==============================================" << std::endl;
}

