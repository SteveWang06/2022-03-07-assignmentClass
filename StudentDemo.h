#include<string>
using namespace std;


class StudentDemo
{
private:
    string name;
    //static int id;
    string sid;
    string gender;
    string email;
    string phoneNumber;
public:
    StudentDemo();
    StudentDemo(string, string, string, string, string);

    string getName();
    void setName(string);

    string getId();
    void setId(string);

    string getGender();
    void setGender(string);

    string getEmail();
    void setEmail(string);

    string getPhoneNumber();
    void setPhoneNumber(string);

    void showInfo();
    
    
};



