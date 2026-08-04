#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size,target=0;
    cout<<"SIZE: ";
    cin>>size;
    vector<int> arr(size);
    int i=0,element;
    while(i<size){
        cout<<"ELEMENT: ";
        cin>>element;
        arr[i]=element;
        i++;
    }
    sort(arr.begin(),arr.end());
    i=0;
    while(i<size-1){
        if(arr[i]==arr[i+1]){
            i=i+2;
        }
        else{
            target=arr[i];
            break;
        }
    }
    if(target==0){
        cout<<"ELEMENT:"<<arr[size-1]<<endl;
    }
    else{
        cout<<"ELEMENT:"<<target<<endl;
    }
    return 0;
}