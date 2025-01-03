#include<iostream>
using namespace std;

class Vehicle{
    private:
    string vehicle_no;
    string color;
    string fuel_type;
    float fuel_capacity;
    string vehicle_type; 
    
    public :
    string brand_name;
};

class Bus: public Vehicle{
   

};

class Sleeper:public Bus{
     
};

class Car:Vehicle{

};


int main(int argc, char const *argv[])
{
    Bus b1;
    Car c1;
    Sleeper s1;
    s1.brand_name;
    b1.brand_name = "TATA";
 
    return 0;
}
