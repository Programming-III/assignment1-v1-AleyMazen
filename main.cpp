int main(){
    Animal::Animal(string name, int age, bool isHungry){
        this -> name = name;
        this -> age = age;
        this -> isHungry = isHungry;
    }
    Animal::~Animal(){}
    Animal::setname(){
        name = "Lion";
    }
    Animal::getname(){
        return name;
    }
    Animal::setage(){
        age = 5;
    }
    Animal::getage(){
        return age;
    }
    Animal::void feed(){
        isHungry = true;
    }
    Animal::getisHungry(){
        return isHungry;
    }
    Animal::void display(){
        cout<<"Enclosure 1 Animals:"<<endl;
        cout<<name<<"(Age:"<<age<<","<<isHungry<<")"<<endl;
    }
    Animal::setname(){
        name = "Parrot";
    }
    Animal::getname(){
        return name;
    }
    Animal::setage(){
        age = 2;
    }
    Animal::getage(){
        return age;
    }
    Animal::void feed(){
        isHungry = false;
    }
    Animal::getisHungry(){
        return isHungry;
    }
    Animal::void display(){
        cout<<name<<"(Age:"<<age<<","<<isHungry<<")"<<endl;
    }
    Animal::setname(){
        name = "Snake";
    }
    Animal::getname(){
        return name;
    }
    Animal::setage(){
        age = 3;
    }
    Animal::getage(){
        return age;
    }
    Animal::void feed(){
        isHungry = true;
    }
    Animal::getisHungry(){
        return isHungry;
    }
    Animal::void display(){
        cout<<name<<"(Age:"<<age<<","<<isHungry<<")"<<endl;
    }
    
    
    Visitor::Visitor(string visitorName, int ticketsBought){
        this -> visitorName = visitorName;
        this -> ticketsBought = ticketsBought;
    }
    Visitor::~Visitor(){}
    Visitor::setvisitorName(){
        visitorName = "Sarah Ali";
    }
    Visitor::getvisitorName(){{
        return visitorName;
    }
    Visitor::setticketsBought(){
        ticketsBought = 3;
    }
    Visitor::getticketsBought(){
        return ticketsBought;
    }
    Visitor::void displayInfo(){
        cout<<"Visitor Info:"<<endl;
        cout<<"Name: "<<visitorName<<endl;
        cout<<"Tickets Bought: "<< ticketsBought<<endl;
    }
    
    
    
    Enclosure::Enclosure(Animal* arr[], int capacity, int currentCount):Animal(){
        this -> arr = arr;
        this -> capacity = capacity;
        this -> currentCount = currentCount;
    }
    Enclosure::~Enclosure():Animal(){
        delete arr[];
    }
    Enclosure::setarr():Animal(){
        arr = ["Lion", "Parrot", "Snake"];
    }
    Enclosure::getarr():Animal(){
        return arr;
    }
    Enclosure::setcapacity(){
        capacity = 10;
    }
    Enclosure::getcapacity(){
        return capacity;
    }
    Enclosure::setcurrentCount(){
        currentCount = 4;
    }
    Enclosure::getcurrentCount(){
        return currentCount;
    }
    Enclosure::void addAnimal(Animal* a):Animal(){
        Animal.h++;
    }
    Enclosure::void displayAnimals(){
        coout<<arr<<endl;
    }
    
}
