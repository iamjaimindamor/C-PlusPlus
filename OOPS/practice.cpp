#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "allocating space for animal..."<<endl;
    }

    void eat(){

        cout << "eats"<<endl;

    }

    void breathe(){
        cout << "Breathes.."<<endl;
    }

    ~Animal(){
        cout << "Signing Off...."<<endl;
    }
};

class Bird : public Animal {
public: 
    void fly(){
        cout << "I can fly..."<<endl;
    }
};

class Fish : public Animal{
public: 
    void swim(){
        cout << "I can swim too..."<<endl;
    }
};

class Mammal : public Animal{
public:
    void walk(){
        cout << "I can walk but cannot talk.."<<endl;
    }
};

int main(){
    Bird b1;
    Fish f1;
    Mammal m1;

    b1.breathe();
    b1.eat();
    b1.fly();
    f1.swim();
    m1.walk();

    return 0;
}