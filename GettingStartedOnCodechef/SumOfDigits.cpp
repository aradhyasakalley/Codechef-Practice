// You're given an integer N. Write a program to calculate the sum of all the digits of N.

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int N;
       cin>>N;
       int sum =0;
       while(N!=0){
        int rem = N%10;
        sum += rem;
        N /=10;
       }
       cout << sum<<endl;
    }
}