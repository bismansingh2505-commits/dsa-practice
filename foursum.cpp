#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int size,target;
    cout<<"SIZE:";
    cin>>size;
    cout<<"TARGET:";
    cin>>target;
    int i=0,element;
    vector<int> arr(size);
    vector<vector<int>> nums;
    while(i<size){
        cout<<"element:";
        cin>>element;
        arr[i]=element;
        i++;
    }
    i=0;
    int sum,j;
    sort(arr.begin(),arr.end());
    while(i<size){
        int j=i+1;
        if(i>0&&arr[i]==arr[i-1]){
            i++;
            continue;
        }
        while(j<size){
            if(j>i+1&&arr[j]==arr[j-1]){
                j++;
                continue;
            }
            int left=j+1,right=size-1;
            while(left<right){
                sum=arr[i]+arr[j]+arr[left]+arr[right];
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else if(sum==target){
                    nums.push_back({arr[i],arr[left],arr[right],arr[j]});
                    while(left<right&&arr[left]==arr[left-1]){
                        left++;
                    }
                    while(left<right&&arr[right]==arr[right-1]){
                        right--;
                    }
                    left++;
                    right--;
                    
                }
            }
            j++;
        }
        i++;
    }
    i=0;
    j=0;
    while(i<nums.size()){
        j=0;
        while(j<nums[i].size()){
            cout<<nums[i][j]<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}