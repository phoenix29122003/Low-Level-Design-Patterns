#include <bits/stdc++.h>
using namespace std;

class Abstract_Class{
private:
    int a,b;
public:
    void setter(int x,int y){
        a=x;
        b=y;
    }
    void getter(){
        cout<<"Value of a="<<a<<endl;
        cout<<"Value of b="<<b<<endl;
    }
};

int main(){
    Abstract_Class obj;
    obj.setter(2,3);
    obj.getter();
    return 0;
}