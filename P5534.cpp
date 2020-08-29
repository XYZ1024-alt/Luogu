#include <iostream>
using namespace std;

long long c,a,b;
int main() {
    cin>>a>>b>>c;
    cout<<(a+(c-1)*(b-a)+a)*c/2;
    return 0;
}