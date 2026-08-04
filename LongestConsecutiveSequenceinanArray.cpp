#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"SIZE:";
    cin>>size;
    vector<int> arr(size);
    int element,i=0,count=0,maxcount=0;
    while(i<size){
        cout<<"ELEMENT:";//[100,1,1,2,8,3]
        cin>>element;
        arr[i]=element;
        i++;
    }
    sort(arr.begin(),arr.end());//[
    i=0;
    while(i+1<size){//[1,2,3,4,7,8]
        if(arr[i+1]-arr[i]==1){
            count++;
            i++;
        }
        else if(arr[i]==arr[i+1]){
            i++;
        }
        else if(arr[i+1]-arr[i]!=1){
            maxcount=max(maxcount,count+1);
            count=0;
            i++;
        }
    }
    maxcount=max(maxcount,count+1);
    cout<<maxcount<<endl;
    return 0;
} 