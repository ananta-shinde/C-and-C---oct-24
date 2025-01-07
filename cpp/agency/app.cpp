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


    void setName(string value){
        name = value;
    }
    public:
    Agency(string value){
        name = value;
        cust_count = 0;
    }

    string getName(){
       return name;
    }
    int getCustomerCount(){
       return cust_count;
    }

    void addCustomer(Customer* c){
        cust_list[cust_count] = c;
        cust_count++;
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

    void printCustomerList(){
        for(int i=0;i<cust_count;i++){
        cout << cust_list[i]->getName() << endl;
        }
    } 
    
};


int main(int argc, char const *argv[])
{
    Agency vrl("VRL PVT LTD");
    vrl.createNewCustomer();
    vrl.createNewCustomer();
    vrl.printCustomerList();



   

    return 0;
}
