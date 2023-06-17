#include<iostream>
using namespace std;

class student{
    private:
        string name;
        float cgpa;

    public:
        int sid;
        student(string name,int sid){
            this->name=name;
            this->sid=sid;
        }    
        void print();
};

void student::print(){
    cout<<this->name<<this->cgpa<<endl;

}
student::student(string name,int sid){
            this->name=name;
            this->sid=sid;
}
