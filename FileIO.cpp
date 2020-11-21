# include <iostream>
# include "FileIO.h"
# include <fstream>


using namespace std;

//default
FileIO::FileIO(){
    sumLine = 0;
    fileName = "";
    arr = new int[200];
}

// pass file name in overloaded constructor
FileIO::FileIO(string name){
    ifstream inFile;
    inFile.open(name);

    if(!inFile.is_open()){
        cout << "invalid file." << endl;
    }
    else {
        fileName = name;
    }

    arr = new int[200];
    sumLine = 0;
    inFile.close();
}

FileIO::~FileIO(){
    delete arr;
}

// set file name
void FileIO::setName(string name){
    ifstream inFile;
    inFile.open(name);

    if(!inFile.is_open()){
        cout << "invalid file." << endl;
    }
    else {
        fileName = name;
    }

    inFile.close();
}

// return name
string FileIO::getName(){
    return fileName;
}

// read in file information into an array
void FileIO::read(){
    ifstream inFile;
    inFile.open(fileName);
    string temp = "";
    int idx = 0;

    while (!inFile.eof()){
        getline(inFile, temp);

        arr[idx++] = stoi(temp);
        ++sumLine;
    }

    inFile.close();
}

// check and set valid file name
void FileIO::check(){
    ifstream in;
    in.open(fileName);

    while(!in) {
        string name = "";
        cout << "could not find file." << endl;
        cout << "enter file name \"xxx.txt\": " << endl;
        cin >> fileName;
        in.open(fileName);
    }

    if (in) {
        in.close();
    }
}
// int FileIO::getSumLine(){
//     sumLine = 0;
//
//     ifstream inFile(fileName);
//     string line;
//
//     while (true) {
//         sumLine++;
//         if (inFile.eof()){
//             break;
//         }
//     }
//
//     return sumLine;
// }
