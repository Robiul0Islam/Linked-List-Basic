#include<iostream>
using namespace std;

void sort_array(int A[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(A[i]>A[min]){
            int temp=A[min];
            A[min]=A[i];
            A[i]=temp;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int x1;
    cin>>x1;
    int x2;
    cin>>x2;
    int M[n];
    int D[n];
    for(int i=0;i<n;i++){
        cin>>M[i];
    }
    for(int i=0;i<n;i++){
        cin>>D[i];
    }
    sort_array(M,n);
    sort_array(D,n);
    

    int flag=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        if((M[i]+D[j])>(x1+x2)){
            flag=1;
        }
        j--;
    }
    if(flag==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}