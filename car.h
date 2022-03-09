#include<string>
using namespace std;

class Car
{
private:
    string carGrand;
    string carId;
    string carColor;
    int carGas;
    int carVolume;


public:
    Car();
    Car(string, string, string, int, int);

    void setCarGrand(string);
    string getCarGrand();

    void setCarId(string);
    string getCarId();

    void setCarColor(string);
    string getCarColor();

    void setCarGas(int);
    int getCarGas();

    void setCarVolume(int);
    int getCarVolume();

    void showInfo();
};


