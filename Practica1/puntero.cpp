#include <iostream>

using namespace std;

main(){
    int iX = 5, iY = 10;
    int *pA;
    pA = &iX;
    cout<<iX<<endl;
    cout<<*pA<<endl;
    cout<<&iX<<endl;
    cout<<pA<<endl;

    pA = &iY;
    cout<<iY<<endl;
    cout<<*pA<<endl;
    cout<<&iY<<endl;
    cout<<pA<<endl;
    
    return 0;
}

