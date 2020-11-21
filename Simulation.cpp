# include "Simulation.h"

// default
Simulation::Simulation(){
    nWindow = 0;

    meanSWaitTime;
    medianSWaitTime = 0;
    maxSWaitTime = 0;
    meanWIdleTime = 0;
    maxWIdleTime = 0;

    students = new Queue<Student*>();
    windows = new DLL<Window*>();
    stuStat = new DLL<Student*>();

    // inFile = FileIO();
}

// very beginning of simulation
Simulation::Simulation(string name){
    nWindow = 0;

    meanSWaitTime;
    medianSWaitTime = 0;
    maxSWaitTime = 0;
    meanWIdleTime = 0;
    maxWIdleTime = 0;

    students = new Queue<Student*>();
    windows = new DLL<Window*>();
    stuStat = new DLL<Student*>();

    // inFile = FileIO();
    start(name);
}

Simulation::~Simulation(){

}

// get needed information and proceed to run
void Simulation::start(string name){
    inFile.setName(name);

    inFile.check();

    inFile.read();
    int* input = new int[inFile.sumLine];

    input = inFile.arr;

    for(int i = 0; i < inFile.sumLine; ++i){
        cout << input[i] << endl;
    }

    //create loops to run simulation according to input


}

void Simulation::finalPrint(){
    // going to print all the results
}
