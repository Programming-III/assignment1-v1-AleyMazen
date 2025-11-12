#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <iostream>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string visitorName, int ticketsBought);
    ~Visitor();
    getvisitorName();
    setVisitorName();
    getticketsBought();
    setticketsBought();
    void displayInfo();
};

#endif // VISITOR_H_INCLUDED
