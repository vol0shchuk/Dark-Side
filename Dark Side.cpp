// Dark Side.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class DomesticAnimal {
protected:
    string name;
    string species;

public:
    DomesticAnimal(string animalName, string animalSpecies) : name(animalName), species(animalSpecies) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Species: " << species << endl;
    }
};

class Dog : public DomesticAnimal {
public:
    Dog(string name) : DomesticAnimal(name, "Dog") {}
};

class Cat : public DomesticAnimal {
public:
    Cat(string name) : DomesticAnimal(name, "Cat") {}
};

class Parrot : public DomesticAnimal {
public:
    Parrot(string name) : DomesticAnimal(name, "Parrot") {}
};

int main() {
    Dog dog("Kit");
    Cat cat("Papuga");
    Parrot parrot("Pes");

    cout << "Dog:" << endl;
    dog.displayInfo();
    cout << endl;

    cout << "Cat:" << endl;
    cat.displayInfo();
    cout << endl;

    cout << "Parrot:" << endl;
    parrot.displayInfo();
    cout << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
