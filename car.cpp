#include "car.h"
#include<iostream>
#include<string>
using namespace std;

Car::Car(){
    this->carGrand = "";
    this->carId = "";
    this->carColor = "";
    this->carGas = 0;
    this->carVolume = 0;

}

Car::Car(string carGrand, string carId, string carColor, int carGas, int carVolume){
    setCarGrand(carGrand);
    setCarId(carId);
    setCarColor(carColor);
    setCarGas(carGas);
    setCarVolume(carVolume);
}

void Car::setCarGrand(string carGrand){
    this->carGrand = carGrand;
}

void Car::setCarId(string carId){
    this->carId = carId;
}

void Car::setCarColor(string carColor){
    this->carColor = carColor;
}

void Car::setCarGas(int carGas){
    this->carGas = carGas;  
}

void Car::setCarVolume(int carVolume){
    this->carVolume = carVolume;  
}

string Car::getCarGrand(){
    return this->carGrand;
}

string Car::getCarId(){
    return this->carId;
}

string Car::getCarColor(){
    return this->carColor;
}

int Car::getCarGas(){
    if (carGas < 1000)
    {
        carGas = 1000;
        cout << "car gas's data is wrong !" << endl;
        cout << "carGas: ";
        return this->carGas;
    }
    else{
        cout << "car gas : ";
        return this->carGas;
    }
    
}

int Car::getCarVolume(){
    if (carVolume < 10)
    {
        carVolume = 10;
        cout << "car volume's data is wrong !" << endl;
        cout << "car volume : ";
        return this->carVolume;
    }
    else{
        cout << "car volume : ";
        return this->carVolume;
    }
    
}

void Car::showInfo(){
    cout <<"=========================================" << endl;
    cout << "car grand : " << getCarGrand() << endl;
    cout << "car Id : " << getCarId() << endl;
    cout << "car color : " << getCarColor() << endl;
    cout << getCarGas() << endl;
    cout << getCarVolume() << endl;

}