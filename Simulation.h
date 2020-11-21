# include <iostream>
# include <fstream>

# include "FileIO.h"
# include "Queue.h"
# include "Student.h"
# include "Window.h"

using namespace std;

class Simulation{
    public:
        Simulation();
        Simulation(string name);
        ~Simulation();

        void start(string name);

        void finalPrint();

        int nWindow;

        int meanSWaitTime;
        int medianSWaitTime;
        int maxSWaitTime;
        int meanWIdleTime;
        int maxWIdleTime;

        Queue<Student*>* students;
        DLL<Window*>* windows;
        DLL<Student*>* stuStat;

        FileIO inFile;
};
