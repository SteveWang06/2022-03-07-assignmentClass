#include<iostream>
#include<string>
#include "StudentDemo.h"
using namespace std;

void getStudentInfo(StudentDemo* st, size_t n){
    string name;
    string sid;
    string gender;
    string email;
    string phone;

    for (size_t i = 0; i < n; i++)
    {
        cout << "name : ";
        
        getline(cin >> ws, name);
        cout << "id : ";
        cin >> sid;
        cout << "gender : ";
        cin >> gender;
        cout << "email : ";
        cin >> email;
        cout << "phone number : ";
        cin >> phone;

        StudentDemo s(name, sid, gender, email, phone);
        st[i] = s;
    }
    

}

void showInfo(StudentDemo* st, size_t n){
    for (size_t i = 0; i < n; i++)
    {
        st[i].showInfo();
    }
    
}

int main(int argc, char const *argv[])
{
    
    StudentDemo* studendemo;
    size_t N;
    cout << "enter the number of student : ";
    cin >> N;
    
    
    studendemo = new StudentDemo[N];

    getStudentInfo(studendemo, N);
    showInfo(studendemo, N);


    return 0;
}
