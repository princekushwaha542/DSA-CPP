#include<iostream>
using namespace std;

class bca{
    private:
    int student;
    int teacher;
    int totalStudent;


    public:

    void get(){
        cout<<"enter Number of student ";
        cin>>student;
        cout<<"enter Number of teacher";
        cin>>teacher;

    }

    void setData(){
        totalStudent=student;
    }
    void show(){
        setData();
        cout<<"total student is"<<totalStudent;
    }

 friend bca update(bca);
};
bca update( bca obj){
    obj.student=0;
    return obj;
}
int main(){
    bca a;
    a.get();
    a=update(a);
     a.show();
}