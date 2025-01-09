// entites : Agency, Customer, Bus, Routes

#include<iostream>
using namespace std;

class Customer{
    string name;
    string contact;
    string gender;
    string address;
    int age;

    public :
    Customer(string n,string c){
        name = n;
        contact = c;
    }

     string getName(){
       return name;
    }
};



class Agency{
    string name;
    string contact;
    string address;
    Customer* cust_list[10];
    int cust_count;
    Bus* bus_list[10];
    int bus_count;

    void setName(string value){
        name = value;
    }
    public:
    Agency(string value){
        name = value;
        cust_count = 0;
        bus_count = 0;
    }

    string getName(){
       return name;
    }
    int getCustomerCount(){
       return cust_count;
    }
    int getBusCount(){
       return bus_count;
    }

    void addCustomer(Customer* c){
        cust_list[cust_count] = c;
        cust_count++;
    }
    void addNewBus(Bus* b){
        string vn;
        string type;
        int capacity;
        cout << "Enter vehicle no : ";
        cin >> vn;
        cout << "enter type of bus";
        cin >> type;
        cout << "enter seat capacity";
        cin >> capacity;
        Bus* b = new Bus(bus_count+1,vn,type,capacity);
        bus_list[bus_count] = b;
        bus_count++;
    }

    void createNewCustomer(){
        string name;
        string contact;
        cout << "enter customer name :";
        cin >> name;
        cout << "contact number :";
        cin >> contact;
        Customer* c = new  Customer(name,contact);
        addCustomer(c);
    }

    Customer** getCustomerList(){
        return cust_list;
    }
    Bus** getBusList(){
        return bus_list;
    }

    void printCustomerList(){
        for(int i=0;i<cust_count;i++){
        cout << cust_list[i]->getName() << endl;
        }
    } 
    void printBusList(){
        for(int i=0;i<bus_count;i++){
        cout << bus_list[i]->getVehicleNo() << endl;
        }
    } 
    
};

class Bus{
    int bus_id;
    string vehicle_no;
    string type;
    int seating_capacity;
    public:
    Bus(int id,string v,string t,int sc){
        vehicle_no = v;
        type = t;
        seating_capacity = sc;
        bus_id = id;
    }

    string getVehicleNo(){
        return vehicle_no;
    }
    string getType(){
        return type;
    }
    int getSeatingCapacity(){
        return seating_capacity;
    }

};

class Route{
      int routeId;
      string start_point;
      string end_point;
      public :

};


int main(int argc, char const *argv[])
{
    Agency vrl("VRL PVT LTD");
    vrl.createNewCustomer();
    vrl.createNewCustomer();
    vrl.printCustomerList();
    
    return 0;
}
