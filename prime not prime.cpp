// prime or not prime 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if (n%2==0){
            cout<<"Given number is not prime  for "<<i<<endl;

        }
        else{
            cout<<"Given number is prime for "<<i<<endl;

        }
        i=i+1;
    }
    return 0;
}