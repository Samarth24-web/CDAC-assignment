#include <iostream>
#include <string.h>
using namespace std;

class Student{
    int roll_no;
    char dob[20];
    char name[30];
    int marks;
    public:
    Student(){};
    Student (int roll_no, char *name, char *dob, int marks){

        this->roll_no=roll_no;
        strcpy(this->name ,name);
        strcpy(this->dob , dob);
        this->marks=marks;
    }

        
    public:
    void display(){
        cout<<roll_no<<"\t"<<name<<"\t"<<dob<<"\t"<<marks<<endl;
    }
    int getMarks(){
        return marks;
    }
    
};

int main(){
   Student  students[8];
   for(int i=1;i<=8;i++){
     int roll_no;
    char dob[20];
    char name[30];
    int marks;

    cin>>roll_no>>name>>dob>>marks;

    Student s(roll_no,name,dob,marks);
      students[i-1]=s;

    
   }

   for(int i=0 ; i<8-1 ; i++){
    for(int j=0 ; j<8-1-i ; j++){
        if(students[j].getMarks()<students[j+1].getMarks()){
            Student temp = students[j];
            students[j]=students[j+1];
            students[j+1]=temp;
        }
    }
   }


   for(int i=0 ; i<8 ; i++){
    students[i].display();
   }
}