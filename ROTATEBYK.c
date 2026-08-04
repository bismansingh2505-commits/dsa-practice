#include<stdio.h>
void rotatebyK(int arr[],int size, int k){
    int i=0,j=0,value,temp[size];//[1,2,3,4,5]
    while(i<size-k){
        temp[i]=arr[k+i];
        i++;
    }
    j=0;
    while(j<k){
        temp[size-k+j]=arr[j];
        j++;
    }
    int x=0;
    while(x<size){
        arr[x]=temp[x];
        x++;
    }
}
int main(){
    int size;
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d",&size);
    int arr[size];
    int element,i=0;
    while(i<size){
        printf("ENTER AN ELEMENT");
        scanf("%d",&element);
        arr[i]=element;
        i++;
    }
    int k;
    printf("ROTATE BY HOW MANY ELEMENTS");
    scanf("%d",&k);
    rotatebyK( arr, size,k);
    i=0;
    while(i<size){
        printf("%d\n",arr[i]);
        i++;
    }
    return 0;
}