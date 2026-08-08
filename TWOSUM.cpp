#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size,target;//[1,2,3,7,5]=7,i=0,j=0
    cout<<"SIZE";
    cin>>size;
    vector<int> arr(size);
    int i=0,element;
    while(i<size){
        cout<<"ELEMENT";
        cin>>element;
        arr[i]=element;
        i++;
    }
    cout<<"TARGET SUM:";
    cin>>target;
    i=0;
    int j=size-1,sum=0,found=0;
    while(i<j){
        sum=arr[i]+arr[j];
        if(sum<target){
            i++;
        }
        else if(sum>target){
            j--;
        }
        else if(sum==target){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<arr[i]<<endl;
        cout<<arr[j];
    }
    else if(found==0){
        cout<<"[-1,-1]"<<endl;
    }
    /*int left=0,right=size-1,sum=0,found=0;
    while(left<right){//left=0,right=0
        sum=arr[left]+arr[right];//2,3,4
        if(sum<target){
            left++;//right=1,2,3
        }
        else if(sum>target){
            right--;
        }
        else if(sum==target){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<left<<endl;
        cout<<right;
    }
    else if(found==0){
        cout<<"[-1,-1]"<<endl;
    }*/
    return 0;
}
