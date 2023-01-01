#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int count =0;
        for(int j =n;j>0;){
           if(j%10==4)
             count++;
           j/=10;
        }
        cout<< count<<endl;
    }
    return 0;    
}