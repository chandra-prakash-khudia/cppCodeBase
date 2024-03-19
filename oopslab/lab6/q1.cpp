#include<iostream>
#include<string>
using namespace std;
class AccountA;
class AccountB{
    long long accNo ;
    string name;
    int bal;
    public:
    AccountB(long long int acc, string n ,int b=0){
        accNo =acc;
        name =n;
        bal =b;
    }
    void fundTransfer(AccountA&,int);
    void getDetails(){
    cout<<"***Punjab National Bank**"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Acc No. : "<<accNo<<endl;
    cout<<"Balance : Rs."<<bal<<endl;
    }
};
class AccountA{
     long long accNo ;
    string name;
    int bal;
    public:
    AccountA(long long int acc, string n ,int b=0){
        accNo =acc;
        name =n;
        bal =b;
    }
     void getDetails(){
    cout<<"***State Bank of India**"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Acc No. : "<<accNo<<endl;
    cout<<"Balance : Rs."<<bal<<endl;
    }
    friend void AccountB::fundTransfer(AccountA&,int);
};
void AccountB :: fundTransfer (AccountA &temp,int amt) {
    temp.bal+=amt;
    this->bal-=amt;
    cout<<"fund transfer successfully!"<<endl;
}
int main(){
    AccountA sbi(12345,"chandra prakash");
    AccountB pnb(67890,"chandra prakash",10000);
    sbi.getDetails();
    pnb.getDetails();
    pnb.fundTransfer(sbi,2000);
     sbi.getDetails();
    pnb.getDetails();

}
