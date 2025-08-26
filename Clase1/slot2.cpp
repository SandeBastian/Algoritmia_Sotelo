#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x,y;
    cout<<"Ingrese el numero x: "; cin>>x;
    cout<<"Ingrese el numero y: "; cin>>y;
    while (x!=y) {
        if (x>y) {
            x=x-y;
        }else {
            y=y-x;
        }
    }
    cout<<"MCD: "<<x<<endl;
    return 0;
}