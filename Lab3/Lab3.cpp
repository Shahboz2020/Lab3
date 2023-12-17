#include <iostream>

class Company
{
private:
    std::string country = "Russia";
    std::string companyName = "UAZ";
public:

    Company(std::string name, std::string country)
        : country(country), companyName(name) {}
    Company(std::string country)
        :country(country) {}
    Company();
    ~Company() = default; //дефолтный конструктор


    std::string getCompanyName() // методы для Company
    {
        return companyName;
    }

    std::string getCountry()
    {
        return country;
    }
};

class Employee : public Company
{
private:

    std::string nameEmployee = "Ivan";
    int ageEmployee = 30;
    std::string documentEmployee = "None";
    bool verheiratetEmployee = false;

public:

    //дефолтный конструктор

    void setNameEmployee(std::string newNameEmployee) // методы для Employee
    {
        nameEmployee = newNameEmployee;
    }

    void setAgeEmployee(int newAgeEmployee)
    {
        ageEmployee = newAgeEmployee;
    }

    void setVerheiratet(bool verheirat)
    {
        verheiratetEmployee = verheirat;
    }

    void setDocumentEmployee(std::string document)
    {
        documentEmployee = document;
    }

    void getInfo()
    {
        std::cout << nameEmployee << "\t" << ageEmployee << "\t" << documentEmployee << "\t" << verheiratetEmployee << std::endl;
    }
};

class Vehicle : public Company
{
private:

    std::string registrationNumber = "a123b456c789";
    int circleCount = 2;
    std::string material = "metall";
    int passengersCount = 1;


public:

    Vehicle(std::string material)
        : material(material) {}
    Vehicle(std::string material, std::string companyName, std::string country)
        : Company(companyName, country), material(material) {}
    Vehicle(std::string registrationNumber, int circleCount, int passengersCount, std::string companyName, std::string country)
        : Company(companyName, country), registrationNumber(registrationNumber), circleCount(circleCount), passengersCount(passengersCount) {}
    Vehicle(std::string registrationNumber, int circleCount, int passengersCount)
        : registrationNumber(registrationNumber), circleCount(circleCount), passengersCount(passengersCount) {}
    Vehicle(std::string companyName, std::string country)
        : Company(companyName, country) {}
    Vehicle();
    //перегрузка конструктора

    void setRegistrationNumber(std::string getNumber)
    {
        registrationNumber = getNumber;
    }

    void setCircleCount(int count)
    {
        circleCount = count;
    }

    void setPassengersCount(int pass)
    {
        passengersCount = pass;
    }

    void setMaterial(std::string mat)
    {
        material = mat;
    }

    int getCircleCount()
    {
        return circleCount;
    }

    std::string getRegistrationNumber()
    {
        return registrationNumber;
    }

    std::string getMaterial()
    {
        return material;
    }

    int getPassengersCount()
    {
        return passengersCount;
    }

};

class Car : public Vehicle
{
private:
    int mass = 1000;
    int probeg;

public:
    Car(int mass, int probeg, std::string companyName, std::string country)
        : Vehicle(companyName, country), mass(mass), probeg(probeg) {}
    Car(std::string registrationNumber, int circleCount, int passengersCount, std::string companyName, std::string country, int mass, int probeg)
        : Vehicle(registrationNumber, circleCount, passengersCount, companyName, country), mass(mass), probeg(probeg) {}
    Car(int mass, int probeg, std::string registrationNumber, int circleCount, int passengersCount)
        : Vehicle(registrationNumber, circleCount, passengersCount), mass(mass), probeg(probeg) {}

    Car();

    void getProbeg(int newProbeg) // методы для Car
    {
        probeg = newProbeg;
    }

    void getMass(int newMass)
    {
        mass = newMass;
    }
};

class Track : public Vehicle
{
private:
    int axisCount = 2;
    float height = 3;
public:
    Track(int axis, float height, std::string companyName, std::string country)
        : Vehicle(companyName, country), axisCount(axis), height(height) {}
    Track(int axis, float height, std::string registrationNumber, int circleCount, int passengersCount, std::string companyName, std::string country)
        :Vehicle(registrationNumber, circleCount, passengersCount, companyName, country), axisCount(axis), height(height) {}
    Track(int axis, std::string registrationNumber, int circleCount, int passengersCount)
        : Vehicle(registrationNumber, circleCount, passengersCount), axisCount(axis) {}

    void setAxis(int axis)
    {
        axisCount = axis;
    }

    void setHeight(float newHeight) // методы для Track
    {
        height = newHeight;
    }
    int getAxis()
    {
        return axisCount;
    }
    float getHeight()
    {
        return height;
    }
};

int main()
{

    std::cout << "Hello World!\n";

}
