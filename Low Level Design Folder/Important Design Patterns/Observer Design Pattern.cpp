#include <bits/stdc++.h>
using namespace std;

class Observer{
public:
    virtual void update(const string &weather) =0;
};

class Subject{
public:
    virtual void addObserver(Observer* observer)=0;
    virtual void removeObserver(Observer* observer)=0;
    virtual void notifyObservers()=0;
};

class WeatherStation:public Subject{
private:
    vector<Observer*>observers;
    string weather;
public:
    void addObserver(Observer* observer) override{
        observers.push_back(observer);
    }
    void removeObserver(Observer* observer) override{
        observers.erase(remove(observers.begin(), observers.end(), observer), observers.end());
    }
    void notifyObservers() override{
        for(Observer* observer:observers){
            observer->update(weather);
        }
    }
    void setweather(const string &newweather){
        weather = newweather;
        notifyObservers();
    }
};

class PhoneDisplay:public Observer{
private:
    string weather;
public:
    void update(const string &weather)override{
        this->weather=weather;
        display();
    }
    void display(){
        cout<<"PhoneDisplay: Weather Updated - "<<weather<<endl;
    }
};

class TVDisplay:public Observer{
private:
    string weather;
public:
    void update(const string &weather) override{
        this->weather=weather;
        display();
    }
    void display(){
        cout<<"TVDisplay: Weather Updated - "<<weather<<endl;
    }
};


int main(){
    WeatherStation weatherstation;
    PhoneDisplay phonedisplay;
    TVDisplay tvdisplay;
    weatherstation.addObserver(&phonedisplay);
    weatherstation.addObserver(&tvdisplay);
    weatherstation.setweather("Sunny");
    return 0;
}