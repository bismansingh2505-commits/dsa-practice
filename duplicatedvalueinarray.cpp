#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size,element;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>size;
    int i=0;
    vector<int> arr(size);
    while(i<size){
        cout<<"ENTER AN ELEMENT"<<endl;
        cin>>element;
        arr[i]=element;
        i++;
    }
    sort(arr.begin(),arr.end());
    i=0;
    while(i+1<size){
        if(arr[i]==arr[i+1]){
            return true;
        }
        else{
            i++;
        }
    }
    return false;
}