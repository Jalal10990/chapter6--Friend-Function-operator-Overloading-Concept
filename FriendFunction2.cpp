
//Example: Bank Account – Friend Function to Check Balance

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string ownerName;
    double balance;  //private member cannot be accessed directly

    public:
    BankAccount(string name, double bal) : ownerName(name), balance(bal) {}
    
    //dclare a friend function
    friend void showBalance(const BankAccount& account);
};

//definition friend function

void showBalance(const BankAccount& account){

    cout<<"Account owner:"<< account.ownerName << endl;
    cout << "Current Balance: $" << account.balance << endl;

}
int main(){
    BankAccount acc1("jalal", 4500.45);

     // Access private balance using friend function
     showBalance(acc1);

     return 0;
}
