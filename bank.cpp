
#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int balance;
    public:

BankAccount(int s)
{
    balance=s;
}

        void deposit(int f )
        {
          balance=balance+f;
           cout<<"Successful Deposit"<<endl;
           cout<<"New balance:"<<balance<<endl;
        }
        void withdraw(int d)
        {

if(balance>=d)
{
    balance=balance-d;
    cout<<"Successful"<<endl;
    cout<<"New Balance:"<<balance<<endl;
}
else{
    cout<<"Unsuccessful"<<endl;
    cout<<"Not enough balance in your account"<<endl;
}
        }

        float getBalance()
        {
return balance;
        }

};
int main()
{
    int f;
    cout<<"Enter amount to deposit:";
    cin>>f;
    try {
        if(f<0)
        {
            throw string("Error");
        }
    }
    catch(string x)
    {
        cout<<x;
        exit(0);
    }

BankAccount b1(5000);
b1.deposit(f);
int c;
cout<<"Enter amount to withdraw:"<<endl;
cin>>c;
b1.withdraw(c);
cout<<"Current balance:"<<b1.getBalance()<<endl;
    return 0;
}
