#include<iostream>
using namespace std;

class Car
{
    private:
    
    
    string vehicle_no;
    int no_of_seats;
    string brand_name;
    public:

    Car(string name){
        cout << "Car is created\n";
        brand_name = name;
    }

    string getBrandName(){
        return brand_name;
    }
   
    void startACar(){
    cout << "car has started\n ";
    }

    void stopACar(){
        cout << "car has stopped";
    }

};




int main(int argc, char const *argv[])
{
    Car c1("BMW"),c2("TATA");
    // c1.brand_name = "TATA";
    // c2.brand_name = "SUZUKI";
    // c1.brand_name = "BMW";
    cout << c1.getBrandName();
    c1.startACar();
    c2.startACar();
}
