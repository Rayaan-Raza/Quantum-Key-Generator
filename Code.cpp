#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
    unsigned int n;
    unsigned char p1, p2, p3, Const,key;
    cout << "Enter a positive integer: ";
    cin >> n;
    p1 = n;  
    p2 = (n >> 8); 
    p3 = (n >> 16); 
    Const = (n>>24);  

    key=p1^p2^p3^Const; 
    cout<<"Quantum key : "<<bitset<8>(key)<<endl;
    
    return 0;

}
