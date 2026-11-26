#include<iostream>
using namespace std;

class BankAccount {
    string accountHolder;
    int accountNumber;
    int balance;

public:
    BankAccount(string accountHolder,int accountNumber){
        balance=0;
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
    }

    int deposit(int cash){
        if(cash<0){
            cout << "Invalid Amount"; 
            return -1;
        } 
            
        cout << cash << "₹ Money Deposited"<< endl;
        balance+=cash;
    }

    void withdraw(int withdraw){
        if(this->balance>=withdraw){
            cout << withdraw << "₹ Money Withdrawn"<< endl;
            balance-=withdraw;
        }else{
            cout << "Insufficient Account Balance.\n";
        }
    }

    void getBalance(){
        cout << "Current Balance ₹ : "<<balance << endl;
    }
    void getAccountDetails(){
        cout <<"Your Account Number : " << accountNumber << endl;
        cout <<"Account Holder Name : " << accountHolder << endl;
        cout <<"Current Balance : " << balance << endl;


    }
};

int main(){
    BankAccount b1("Jaimin Damor",1234213);
    b1.deposit(-23);
    b1.withdraw(600);
    b1.getBalance();
    b1.getAccountDetails();
    BankAccount b2("Kamlesh Tala",4342343);
    b2.deposit(700);
    b2.withdraw(600);
    b2.getBalance();
    b2.getAccountDetails();
    return 0;
}