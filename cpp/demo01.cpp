#include<iostream>
using namespace std;

class Vehicle{
     int RC_no;
    
    public:
    string vehicle_no;
    string brand_name;
    float price;
    float fuel_capacity;
    bool isAC;
};

class Bus : public Vehicle
{
   
};

class Car{
    int RC_no;
    public:
    string vehicle_no;
    string brand_name;
    float price;
    float fuel_capacity;
    bool isAC;
};


int main(int argc, char const *argv[])
{
    Bus b;
    b.RC_no = 1000;
    b.brand_name = "TATA";
    b.RC_no = 5000;
    return 0;
}
