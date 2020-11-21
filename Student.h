# include <iostream>

using namespace std;


class Student{
    public:
        Student();
        Student(int time);
        ~Student();

        void setWindowTime(int time);
        void studentClockTick();

        int getWaitTime();
        int getWindowTime();


        int waitTime;
        int windowTime;
};
