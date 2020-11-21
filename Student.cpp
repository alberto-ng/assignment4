# include "Student.h"

Student::Student(){
    windowTime = 0;
    waitTime = 0;
}

Student::Student(int time){
    windowTime = time;
    waitTime = 0;
}

Student::~Student(){

}

void Student::setWindowTime(int time){
    windowTime = time;
}

void Student::studentClockTick(){
    ++waitTime;
}

int Student::getWaitTime(){
    return waitTime;
}

int Student::getWindowTime(){
    return windowTime;
}
