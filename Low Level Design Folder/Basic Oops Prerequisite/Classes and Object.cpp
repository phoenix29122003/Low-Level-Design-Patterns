#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    
    string name;
    int age;

    void introduction(){
        cout<<"My name is "<<name<<". "<<"My age is "<<age<<".";
    }
};

int main(){

    Human manu;
    manu.name="manu";
    manu.age=20;

    manu.introduction();

    return 0;
}