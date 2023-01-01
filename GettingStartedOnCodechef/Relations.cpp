#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
       int A,B;
       cin>>A>>B;
       if(A>B)
        cout<< ">";
       else if(A<B)
        cout<< "<";
       else
        cout<< "=";

    }
    return 0;
}