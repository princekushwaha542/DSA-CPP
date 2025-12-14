#include<iostream>
#include<string.h>
using namespace std;
   void user(){
    char name[20];
    int age ,rollNO;
    strcpy(name,"Prince");
    age=19;
    rollNO=56;
    cout<<name<<age<<rollNO;   
}
int main(){
 
    user();
    return 0;
}