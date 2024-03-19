#include<iostream>
using namespace std;
class BankAccount{
    private:
    string accountHolder;
    int accountNumber;
    float balance;
    public:
    void setAccountDetails(string ah, int an, float b ){
        accountHolder=ah;
        accountNumber=an;
        balance=b;
    }
    void getAccountDetails(){
        cout<<"Account Details "<<endl;
        cout<<"Account Holder : "<<accountHolder<<endl;
        cout<<"Account Number : "<<accountNumber<<endl;
        cout<<"Account Balance : "<<balance<<endl;
    }
    void deposit(float f){
        cout<<"YOU HAVE SUCCESSFULLY DEPOSITED "<<f<<" RUPEES"<<endl;
        balance+=f;
        cout<<"Current Balance is : "<<(balance)<<endl;
    }
    void withdraw(float w){
        cout<<"YOU HAVE SUCCESSFULLY withdraw"<<w<<" RUPEES"<<endl;
        balance-=w;
        cout<<"Current Balance is : "<<(balance)<<endl;
    }
    void getBlance(){
        cout<<"Your current balance is : "<<balance<<endl;
    }
};
int main()
{
    int deposit,withdraw;
    BankAccount b1;
    b1.setAccountDetails("random",1234567890,12400);
    cout<<"Enter Amount to deposit : ";
    cin>>deposit;
    b1.deposit(deposit);
    cout<<"Enter Amount to withdraw : ";
    cin>>withdraw;
    b1.getAccountDetails();
    b1.withdraw(withdraw);
   
    return 0;
}