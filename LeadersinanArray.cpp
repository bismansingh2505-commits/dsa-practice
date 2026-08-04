#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"SIZE:";
    cin>>size;
    int i=0,element;
    vector<int> arr(size);//[10,22,12,3,0,6]
    while(i<size){
        cout<<"ELEMENT";
        cin>>element;
        arr[i]=element;
        i++;
    }
    int j=size-1,maximum=arr[size-1];
    while(j>=0){
        if(maximum<=arr[j]){
            maximum=max(maximum,arr[j]);
            cout<< maximum<<endl;
        }
        j--;
    }
}