#include<bits/stdc++.h>
using namespace std;

int major(int a[], int size, int n){

    int majority=a[0];
       int count=1;
       for(int i=1;i<size;i++){
           if(a[i]==majority){
               count++;
           }
           else{
               count--;
               if(count==0)
               {
                   majority=a[i];
                   count=1;
               }
           }
       }
       int frequency=0;
       for(int j=0;j<size;j++){
           if(a[j]==majority){
               frequency++;
           }
       }
       if(frequency>(size/2)){
           return majority;
       }
       return -1;       
}
int main(){
    int n;
    cout << "Array Length : ";
    cin>> n;
    int a[n];
    cout << "Enter The Array Elements : "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    int size = sizeof(a) / sizeof(a[0]);
    int s = major(a, size, n);
    cout<<s<<endl;
    return 0;
}