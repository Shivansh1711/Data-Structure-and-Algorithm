#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int j = i ;
        while( j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"Displaying Elements : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    
    insertion_sort(arr,n);

    cout<<"\nDisplaying Elements after sorting : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}