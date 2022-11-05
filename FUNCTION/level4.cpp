#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum = num1 + num2 + num3;
    return sum;
}
main(){
    int a = 5;
    int b = 10;
    cout<<add(a,b,10);

}