#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"SIZE";
    cin>>size;
    int i=0,element,target,found=0,index;
    vector<int> arr(size);
    while(i<size){
        cout<<"ELEMENT: ";
        cin>>element;
        arr[i]=element;
        i++;
    }
    cout<<"TARGET ELEMENT:";
    cin>>target;
    i=0;
    while(i<size){
        if(arr[i]==target){
            found=1;
            index=i;
            break;
        }
        else{
            i++;
        }
    }
    if(found==1){
        cout<<index<<endl;
    }
    else if(found==0){
        cout<<"-1"<<endl;
    }
}