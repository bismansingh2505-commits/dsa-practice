#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int size;
    cout<<"SIZE:";
    cin>>size;
    int i=0,element;
    vector<int> arr(size);
    while(i<size){
        cout<<"ELEMENT";
        cin>>element;
        arr[i]=element;
        i++;
    }
    i=0;
    int length=0,k;
    cout<<"ENTER THE TARGET VALUE";
    cin>>k;
    int count=0,xorr=0;
    unordered_map<int,int> pmap;
    pmap[0]=1;
    while(i<size){
        xorr=xorr^arr[i];
        count=pmap[xorr^k]+count;
        i++;
        pmap[xorr]++;
    }
    cout<<count<<endl;
    return 0;
}
