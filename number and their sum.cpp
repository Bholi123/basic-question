//love babbar print number and their sum as well 
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int sum=0;
while(i<=n){
    cout<<i<<endl;
    sum=sum+i;
    i=i+1;
}
cout<<"the sum of number is "<<sum<<endl;

return 0;


}