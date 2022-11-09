#include<iostream>
using namespace std;
main(){
    int arr[2][2] = {{1,2},{3,4}};
    for(int i = 0; i <2; i++){ // this loop for rows
        for(int j = 0; j <2; j++){ // this loop for column
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }
    return 0;
}