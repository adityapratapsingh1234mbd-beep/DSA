#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,1,1,1};
    int n=5;
    int k=3;
    int maxsum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==k){
                int l=j-i+1;
                if(l>maxsum){
                    maxsum=l;
                }
            }
        }
    
    }
    cout<<maxsum;
}