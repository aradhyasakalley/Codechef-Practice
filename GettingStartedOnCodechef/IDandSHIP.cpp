#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
       char c;
       cin>>c;
       if(c == 'B' || c=='b'){
        cout<<"BattleShip"<<endl;
       }
       if(c == 'C' || c=='c'){
        cout<<"Cruiser"<<endl;
       }
       if(c == 'D' || c=='d'){
        cout<<"Destroyer"<<endl;
       }
       if(c == 'F' || c=='f'){
        cout<<"Frigate"<<endl;
       }
    }
    return 0;    
}