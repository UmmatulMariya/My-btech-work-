#include<iostream>
using namespace std;
int main(){
    char grade='A'; //CONVERSION  [small(DT)→big(DT)}
    int value = grade;//converting char datatype into int data type
    cout<<value<<endl;
    double price=100.99;//CASTING  [big(DT)→small(DT)]
    int newPrice=(int)price;//converting double data type into int data type
    cout<<newPrice<<endl;
    return 0;
}
Output:
65
100
