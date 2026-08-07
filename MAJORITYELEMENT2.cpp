#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int size;
    cout<<"SIZE:";
    cin>>size;
    vector<int> arr(size);
    int element,i=0,count=0,maj=size/3;
    while(i<size){
        cout<<"ELEMENT:";//[100,1,1,2,8,3]
        cin>>element;
        arr[i]=element;
        i++;
    }
    unordered_map<int,int> freq;
    i=0;
    while(i<size){
        freq[arr[i]]++;
        i++;
    }
    i=0;
    for(auto x: freq){
        if(x.second>maj){
            cout<<x.first<<endl;
        }
    }
    return 0;  
}