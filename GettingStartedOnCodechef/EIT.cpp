#include<iostream>
using namespace std;
int main(){
    int N,K,count=0;
    cin>>N>>K;

    for (int i =0;i<N;i++){
        int A;
        cin>>A;
        if(A%K==0){
            count ++;
        }
    }
    cout<<count;
    return 0;
    
}