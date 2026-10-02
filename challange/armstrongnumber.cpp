#include <iostream>
using namespace std;
int main(){
    int n;
    int orginal;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    orginal=n;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    if(sum==orginal){
        cout<<orginal<<" is an Armstrong number"<<endl;
    }else{
        cout<<orginal<<" is not an Armstrong number"<<endl;
    }
    return 0;
}