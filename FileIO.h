# include <iostream>
# include <fstream>

using namespace std;

class FileIO {
    public:
        FileIO();
        FileIO(string name);
        ~FileIO();

        void setName(string name);
        string getName();
        void read();
        void check();

        int sumLine;
        string fileName;

        int* arr;

        // ifstream inFile;
};
