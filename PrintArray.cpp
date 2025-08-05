// Ayush Yadav
// 24070123028

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of array\n";
    cin>>n;
    int x[n];
    cout<<"Enter the numbers\n";
    int a=0;
    while (a<n){
        cin>>x[a];
        a=a+1;
    }
    cout<<"The output is\n";
    for(int i=0;i<n;i++){
        cout<<x[i];
        cout<<endl;
    }
    return 0;
}

// OUTPUT
// Enter the size of array
// 5
// Enter the numbers
// 11
// 12
// 13
// 14
// 15
// The output is
// 11
// 12
// 13
// 14
// 15
