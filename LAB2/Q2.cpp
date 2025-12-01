#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}

int main(){
    int arr[]={64,34,25,12,22,11,90};
    bubbleSort(arr,6);
    for (int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

}
