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
    int length=0;
    int prefixsum=0,maxlength=0;
    unordered_map<int,int> pmap;
    while(i<size){
        prefixsum=prefixsum+arr[i];
        if(prefixsum==0){
            length=i+1;
            if(length>maxlength){
                maxlength=length;
            }
        }
        else if(pmap.count(prefixsum)>0){
            length=i-pmap[prefixsum];
            if(length>maxlength){
                maxlength=length;
            }
        }
        else{
            pmap[prefixsum]=i;
        }
        i++;
    }
    cout<<maxlength<<endl;
    return 0;
}
