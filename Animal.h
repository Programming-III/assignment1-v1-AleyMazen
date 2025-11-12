#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
using namespace std;

class Animal{
private: 
    string name;
    int age;
    bool isHungry;
public:
    Animal(string name, int age, bool isHungry);
    ~Animal();
    getname();
    setname();
    getage();
    setage();
    getisHungry();
    setisHungry();
    void display();
    void feed();
};

#endif // ANIMAL_H_INCLUDED
