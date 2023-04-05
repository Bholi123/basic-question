#include <iostream>
    
using namespace std;

void binarySearch(int a[],int size,int key){
    int pos,chck;
    int s=0;
    int e=size;
    while(e>s){
        int mid=(s+e)/2;
        if(a[mid]==key){
            pos=mid;
            chck=1;
            break;
        }else if(a[mid]>key){
            e=mid;
        }else{
            s=mid;
        }
    }if(chck==1){
        cout<<"Element found at index "<<pos<<endl;
    }else{
        cout<<"NOT FOUND\n";
    }
}

void LinearSearch(int a[],int size,int key){
    int pos;
    bool chck;
    for(int i=0;i<size;i++){
        if(a[i]==key){
            chck=true;
            cout<<"Element found at index "<<i<<endl;
        }else{
            chck=false;
        }
    }if(chck=false){
        cout<<"not found\n";
    }
}

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"\nEnter an Array \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter element to search\n";
    cin>>key;
    ABC:
    cout<<"Option 1 : Linear Search\n";
    cout<<"Option 2: Binary Search(if Array is Sorted)\n";
    int ch;
    cin>>ch;
    
    switch(ch){
        case 1:
           LinearSearch(a,n,key);
           break;
        case 2:
           binarySearch(a,n,key);
           break;
        case 3:
           exit(1);
    }
    goto ABC;
    return 0;
}
