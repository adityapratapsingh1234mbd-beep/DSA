#include <iostream>
using namespace std;
int main(){
    int  arr[7]={2,2,3,3,1,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i<size;i++){
        int c=0;
        for( int j=0;j<size;j++){
            if(arr[j]==arr[i]){
            c++;}
        }
        if(c>size/2){
            cout<<arr[i];
        }
    } 
    cout<<"element not found";
    return 0;
    }
