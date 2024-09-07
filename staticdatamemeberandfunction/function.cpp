#include <iostream>
using namespace std;

class Customer
{
private:
        string name;
        int balance;
        static int totalBalance;

public:
        Customer(string name, int balance)
        {
                this->name = name;
                this->balance = balance;
                totalBalance += balance;
        }

        void deposit(int amount){
                if(amount>0){
                        balance += amount;
                        totalBalance += amount;
                }
        }

        void withdraw (int amount){
                if(amount>0  && balance-amount>0){
                        balance     -= amount ; 
                        totalBalance -= amount;
                }
        }
        static int getTotalBalance() { return totalBalance; }
};

int Customer::totalBalance = 0;

int main()
{
        Customer c1("Sachin", 1000), c2("Rahul", 5000);
        cout << "Total Balance = " << Customer::getTotalBalance() << endl ; 

        c1.deposit(5000) ; 
        c2.withdraw(1000) ;
        cout << "Total Balance = " << Customer::getTotalBalance();
        return 0;
}