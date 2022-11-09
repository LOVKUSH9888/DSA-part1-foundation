#include<iostream>
using namespace std;
main(){
    int array1[3][3] = {{1,2,3},{4,5,6}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<array1[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}