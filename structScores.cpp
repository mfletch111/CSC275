#include <iostream>
using namespace std;

struct Srecord {
    float quiz1;
    float quiz2;
    float midterm;
    float finalExam;
    float avg;
    string grade;
};
void fungrade(Srecord &object){
    float quizAvg= ((object.quiz1+object.quiz2)/2)*10;

    object.avg= (quizAvg * .25) + (object.midterm * .25) + (object.finalExam * .5);

    if(object.avg>=90) {
        object.grade = "A";
    }
    else if(object.avg>=80) {
        object.grade = "B";
    }
    else if(object.avg>=70) {
        object.grade = "C";
    }
    else if(object.avg>=60) {
        object.grade = "D";
    }
    else if(object.avg<60) {
        object.grade = "F";
    }
}

int main() {
    Srecord s1;
    s1.quiz1=9;
    s1.quiz2=7;
    s1.midterm=87;
    s1.finalExam=78;

    fungrade(s1);

    cout<<"Here are the students records:"<<endl;
    cout<<endl;
    cout<<"Quiz 1 score: "<<s1.quiz1<<endl;
    cout<<"Quiz 2 score: "<<s1.quiz2<<endl;
    cout<<"Midterm score: "<<s1.midterm<<endl;
    cout<<"Final exam score: "<<s1.finalExam<<endl;
    cout<<"Course average score: "<<s1.avg<<endl;
    cout<<"Final letter grade: "<<s1.grade<<endl;


}