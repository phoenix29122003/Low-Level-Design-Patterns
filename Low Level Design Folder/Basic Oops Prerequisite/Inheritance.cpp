// Single level inheritance
#include <bits/stdc++.h>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"This is parent class."<<endl;
    }
};

class Child1:public Parent{
public:
    Child1(){
        cout<<"This is first child of Parent."<<endl;
    }
};

int main(){
    Parent parent1;
    Child1 child1;
    return 0;
}


// Multiple Inheritance
#include <bits/stdc++.h>
using namespace std;

class Parent1{
public:
    Parent1(){
        cout<<"This is parent1."<<endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout<<"This is Parent2."<<endl;
    }
};

class Child:public Parent1, public Parent2{
public:
    Child(){
        cout<<"This is hybrid child"<<endl;
    }
};

int main(){
    Child child;
    return 0;
}


// Multilevel inheritance
#include <bits/stdc++.h>
using namespace std;

class Root_Class{
public:
    Root_Class(){
        cout<<"This is Root_Class."<<endl;
    }
};

class Derived_Class_Level1:public Root_Class{
public:
    Derived_Class_Level1(){
        cout<<"This is first level derived class."<<endl;
    }
};

class Derived_Class_Level2:public Derived_Class_Level1{
public:
    Derived_Class_Level2(){
        cout<<"This is second level derived class."<<endl;
    }
};

int main(){
    Derived_Class_Level2 bottom_level_child;
    return 0;
}

//Hierarchical Inheritance
#include <bits/stdc++.h>
using namespace std;

class BaseClass{
public:
    BaseClass(){
        cout<<"This is BaseClass."<<endl;
    }
};

class Child1:public BaseClass{
public:
    Child1(){
        cout<<"This is Child1."<<endl;
    }
};

class Child2:public BaseClass{
public:
    Child2(){
        cout<<"This is Child2."<<endl;
    }
};

int main(){
    Child1 child1;
    Child2 child2;
    return 0;
}


//Hybrid Inheritance
#include <bits/stdc++.h>
using namespace std;

class BaseClass{
public:
    BaseClass(){
        cout<<"This is BaseClass."<<endl;
    }
};

class Child1:public BaseClass{
public:
    Child1(){
        cout<<"This is Child1."<<endl;
    }
};

class Child2:public BaseClass{
public:
    Child2(){
        cout<<"This is Child2."<<endl;
    }
};

class HybridChild:public Child1,public Child2{
public:
    HybridChild(){
        cout<<"This is Hybrid Child."<<endl;
    }
};

int main(){
    HybridChild hybridchild;
    return 0;
}