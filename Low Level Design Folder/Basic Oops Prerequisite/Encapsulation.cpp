#include <bits/stdc++.h>
using namespace std;

class AreaCalculator{
public:
    int side;

public:
    void getside(){
        cout<<"Enter side of square."<<endl;
        cin>>side;
    }
    void getarea(){
        cout<<"Area of square "<<side*side<<endl;
    }
};

int main(){
    AreaCalculator obj;
    obj.getside();
    obj.getarea();
    return 0;
}