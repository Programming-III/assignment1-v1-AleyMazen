#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
using namespace std;

class Enclosure{
private:
    Animal* arr[];
    int capacity;
    int currentCount;
public:
    Enclosure(Animal* arr[], int capacity, int currentCount);
    ~Enclosure();
    getarr();
    setarr();
    getcapacity();
    setcapacity();
    getcurrentCount();
    setcurrentCount();
    void addAnimal(Animal* a);
    void displayAnimals();
};


#endif // ENCLOSURE_H_INCLUDED
