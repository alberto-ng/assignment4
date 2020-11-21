# include "Window.h"

using namespace std;

//default
Window::Window(){
    idleTime = 0;
    workTime = 0;
    bool available = true;
}

Window::~Window(){

}


// set time needed at window
void Window::setWorkTime(int time){
    workTime = time;
}

// incriment of idle time
void Window::idleClockTick(){
    ++idleTime;
}

// use for updating
void Window::workClockTick(){
    --workTime;
}

int Window::getIdleTime(){
    return idleTime;
}

int Window::getWorkTime(){
    return workTime;
}

// change availability
void Window::changeStatus(){
    available = !available;
}

// check availability
bool Window::isAvailable(){
    return available;
}
