#include<iostream>
using namespace std;
 
int add(int a,int b){
    int c = a+b;
    return c;
}
int add(double a, double b){
    double c = a+b;
    return c;
}
int add(int a,int b,int c){
    int d = a+b+c;
    return d;  
}
int add(int a){
    int b = a*a;
    return b;
}
int main(){
   cout<<"sum of two number"<< add(10,40)<<endl;
   cout<<"sum of three number"<< add(10,20,30)<<endl;
   cout<<"sum of double type two number"<< add(20.24,40.26)<<endl;
   cout<<"squar of number"<< add(5)<<endl;
}