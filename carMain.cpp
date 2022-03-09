#include "car.h"
#include<iostream>
#include<string>
using namespace std;

void getCarInfo(Car* ca, size_t n){
    string carGrand;
    string carId;
    string carColor;
    int carGas;
    int carVolume;

    for (size_t i = 0; i < n; i++)
    {
        cout << "car grand : ";
        cin >> carGrand;
        cout << "car id : ";
        cin >> carId;
        cout << "car color : ";
        cin >> carColor;
        cout << "car gas : ";
        cin >> carGas;
        cout << "car volume : ";
        cin >> carVolume;

        Car c(carGrand, carId, carColor, carGas, carVolume);
        ca[i] = c;
        cout << "***********************************************" << endl;
    }
    

}

void showInfo(Car* ca, size_t n) {
    for (size_t i = 0; i < n; i++)
    {
        ca[i].showInfo();
    }
    

}

int main(int argc, char const *argv[])
{
    Car* car;
    size_t N;
    cout << "enter number of car : ";
    cin >> N;

    car = new Car;
    
    getCarInfo(car, N);
    showInfo(car, N);




    return 0;
}
