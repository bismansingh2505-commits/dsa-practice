#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int sizee,target;
    cout<<"SIZE:";
    cin>>sizee;
    int i=0,element;
    vector<int> arr(sizee);
    vector<int> nums;
    while(i<sizee){
        cout<<"element:";
        cin>>element;
        arr[i]=element;
        i++;
    }
    int first=1,last=sizee,expsum;//[1,2,3,2,5]
    expsum=sizee*(first+last)/2;
    i=0;
    int actsum=0;
    while(i<sizee){
        actsum=actsum+arr[i];
        i++;
    }
    int diff=expsum-actsum;
    int n1,n2;
    sort(arr.begin(),arr.end());//[1,2,2,3,5]
    i=0;
    while(i<sizee){
        if(arr[i]==arr[i+1]){
            n1=arr[i];
            break;
        }
        i++;
    }
    n2=arr[i]+diff;
    nums.push_back(n1);
    nums.push_back(n2);
    i=0;
    while(i<2){
        cout<<nums[i];
        cout<<endl;
        i++;
    }
}