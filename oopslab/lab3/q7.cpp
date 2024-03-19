#include<iostream>
#include<string>
using namespace std;
void concat(string s1, int n){
        string s2 = s1 + to_string(n);
        cout << s2 << endl;
}
void concat(string s1, string s2){
        string s3 = s1 + s2;
        cout << s3 << endl;
}
int main(){
        string s1, s2;
        int n;
        cout<<"enter strings & int" <<endl;
        cin >> s1;
        cin >> s2;
        cin >> n;
        concat(s1,s2);
        concat(s1,n);
}