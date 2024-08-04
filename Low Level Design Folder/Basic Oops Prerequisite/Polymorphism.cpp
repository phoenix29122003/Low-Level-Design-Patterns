// polymorphism are of two type - compile and runtype
// Compile type - fxn overloading, operator overloading
// Runtime - Virtual fxns and Fxn Overriding

//Method overloading
#include <bits/stdc++.h>
using namespace std;

class FxnOverloading{
public:
    void fxn(int x){
        cout<<"Value of x="<<x<<endl;
    }
    void fxn(double x){
        cout<<"Value of x="<<x<<endl;
    }
    void fxn(int x, double y){
        cout<<"Value of x="<<x<<endl;
        cout<<"Value of y="<<y<<endl;
    }
};

int main(){
    FxnOverloading obj;
    obj.fxn(2);
    obj.fxn(2.4254);
    obj.fxn(2,2.4254);
    return 0;
}

//Operator Overloading
....

//Fxn Overrinding
#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string s="All time failure.";
};

class BtechStudent:public Student{
public:
    string s="One year failure.";
};

int main(){
    BtechStudent kid;
    cout<<kid.s<<endl;
    return 0;
}

// Virtual fxn 
....