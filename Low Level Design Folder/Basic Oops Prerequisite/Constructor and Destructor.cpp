#include <bits/stdc++.h>
using namespace std;

class Constructor{
public:
    //data values
    int id;

    // Default Constructor
    Constructor(){
        cout<<"This is default Constructor."<<endl;
        id=-1;
    }
    
    // Parameterized Constructor
    Constructor(int x){
        cout<<"This is parameterized Constructor."<<endl;
        id=x;
    }

    // Destructor
    ~Constructor(){
        cout<<"This is Destructor."<<endl;
    }
};

int main(){

    Constructor default_obj;
    cout<<default_obj.id<<endl;

    Constructor parameterized_obj(10);
    cout<<parameterized_obj.id<<endl;

    Constructor destructor_obj;

    return 0;
}