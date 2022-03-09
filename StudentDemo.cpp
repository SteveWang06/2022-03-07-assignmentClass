#include"StudentDemo.h"
#include<iostream>
#include<string>
using namespace std;

StudentDemo::StudentDemo(){
    this->name = "";
    this->sid = "";
    this->gender = "";
    this->email = "";
    this->phoneNumber = "";

}

StudentDemo::StudentDemo(string name, string sid, string gender, string email, string phoneNumber){

    setName(name);
    setId(sid);
    setGender(gender);
    setEmail(email);
    setPhoneNumber(phoneNumber);
}

//int StudentDemo::id = 10;

void StudentDemo::setName(string name){
    if (name.size() > 25)
    {
        this->name = name.substr(0, 25);
    }
    else{
        this->name = name;
    }
    
    
}
void StudentDemo::setId(string sid){
    if (sid.size() > 15)
    {
        this->sid = sid.substr(0, 10);
    }
    else{
        this->sid = sid;
    }
    
}
void StudentDemo::setGender(string gender){
    this->gender = gender;
}
void StudentDemo::setEmail(string email){
    this->email = email;
}
void StudentDemo::setPhoneNumber(string phoneNumber){
    this->phoneNumber = phoneNumber;
}

string StudentDemo::getName(){
    return this->name;
}

string StudentDemo::getId(){
    return this->sid;
}

string StudentDemo::getGender(){
    return this->gender;
}

string StudentDemo::getEmail(){
    return this->email;
}

string StudentDemo::getPhoneNumber(){
    return this->phoneNumber;
}

void StudentDemo::showInfo(){
    cout << "===================================================" << endl;
    cout << "name : " << getName() << endl;
    cout << "id : " << getId() << endl;
    cout << "gender : " << getGender() << endl;
    cout << "email : " << getEmail() << endl;
    cout << "phone number : " << getPhoneNumber() << endl;
    
}
