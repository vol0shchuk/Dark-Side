// Dark Side.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

//завдання 1

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
}*/

/*

//Завдання 2

#include <iostream>
#include <cstring>

using namespace std;

class String {
protected:
    char* str;
    int length;

public:
    String() : str(nullptr), length(0) {}

    String(const char* cstr) {
        length = strlen(cstr);
        str = new char[length + 1];
        strcpy(str, cstr);
    }

    String(const String& other) : length(other.length) {
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            length = other.length;
            str = new char[length + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    ~String() {
        delete[] str;
    }

    int getLength() const {
        return length;
    }

    void clear() {
        delete[] str;
        str = nullptr;
        length = 0;
    }

    String operator+(const String& other) const {
        String result;
        result.length = length + other.length;
        result.str = new char[result.length + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    String& operator+=(const String& other) {
        *this = *this + other;
        return *this;
    }

    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }

    bool operator!=(const String& other) const {
        return !(*this == other);
    }

    const char* getStr() const {
        return str;
    }
};

class BinaryString : public String {
public:
    BinaryString() : String() {}

    BinaryString(const char* cstr) {
        bool valid = true;
        length = strlen(cstr);
        for (int i = 0; i < length; i++) {
            if (cstr[i] != '0' && cstr[i] != '1') {
                valid = false;
                break;
            }
        }
        if (valid) {
            str = new char[length + 1];
            strcpy(str, cstr);
        }
        else {
            str = nullptr;
            length = 0;
        }
    }

    BinaryString(const String& other) {
        bool valid = true;
        for (int i = 0; i < other.getLength(); i++) {
            if (other.getStr()[i] != '0' && other.getStr()[i] != '1') {
                valid = false;
                break;
            }
        }
        if (valid) {
            length = other.getLength();
            str = new char[length + 1];
            strcpy(str, other.getStr());
        }
        else {
            str = nullptr;
            length = 0;
        }
    }

    BinaryString& operator=(const String& other) {
        BinaryString temp(other);
        *this = temp;
        return *this;
    }

    void changeSign() {
        for (int i = 0; i < length; i++) {
            str[i] = (str[i] == '0') ? '1' : '0';
        }
    }

    BinaryString operator+(const BinaryString& other) const {
        BinaryString result;
        result.length = length + other.length;
        result.str = new char[result.length + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    BinaryString& operator+=(const BinaryString& other) {
        *this = *this + other;
        return *this;
    }

    bool operator==(const BinaryString& other) const {
        return strcmp(str, other.str) == 0;
    }

    bool operator!=(const BinaryString& other) const {
        return !(*this == other);
    }

    friend ostream& operator<<(ostream& os, const BinaryString& bs) {
        os << bs.getStr();
        return os;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;
    cout << "s3: " << endl;
    cout << "Length: " << s3.getLength() << endl;


    BinaryString bs1("10101");
    BinaryString bs2("11010");
    BinaryString bs3 = bs1 + bs2;
    cout << "bs3: " << endl;
    cout << "Length: " << bs3.getLength() << endl;
    cout << "Content: " << bs3 << endl;

}*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
