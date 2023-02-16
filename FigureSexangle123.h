#pragma once
#include "Figure123.h"
#include <iostream>
using namespace std;

class FigureSexangle123 : public Figure123
{
    int x1; //фигура  (1) 
    int y1; //фигура  (1) 
    int x2; //фигура  (2) 
    int y2; //фигура  (2) 
    int x3; //фигура  (3) 
    int y3; //фигура  (3) 
    int x4; //фигура  (4) 
    int y4; //фигура  (4) 
    int x5; //фигура  (5) 
    int y5; //фигура  (5) 
    int x6; //фигура  (6) 
    int y6; //фигура  (6) 
    bool live;
public:
    void Create() {
        cout << "Figure Created!";
        cout << endl;
        cout << "Start position:" << endl;
        cout << "First \t= 0,0" << endl;
        cout << "Second \t= 0,0" << endl;
        cout << "Third \t= 0,0" << endl;
        cout << "Fourth \t= 0,0" << endl;
        cout << "Fifth \t= 0,0" << endl;
        cout << "Sixth \t= 0,0";
        cout << endl;
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
        x3 = 0;
        y3 = 0;
        x4 = 0;
        y4 = 0;
        x5 = 0;
        y5 = 0;
        x6 = 0;
        y6 = 0;
        live = 1;
    }
    void Delete() { // Удаление фигуры
        cout << "Figure Delited!";
        cout << endl;
        live = 0;
    }
    void Show() { // Тип фигуры
        if (live == 1) {
            cout << "Sexangle";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Verification() {
        if (live == 1) {
            cout << "Figure Exists";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void MoveO() {
        if (live == 1) {
            x1 += 2;
            y1 += -5;
            x2 += 3;
            y2 += 5;
            x3 += -6;
            y3 += -2;
            x4 += -8;
            y4 += -7;
            x5 += 5;
            y5 += -3;
            x6 += -10;
            y6 += 15;
            cout << "Figure has been moved";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Intersect() {
        if (live == 1) {
            cout <<
                "First: " << x1 << "," << y1 << endl <<
                "Second: " << x2 << "," << y2 << endl <<
                "Third: " << x3 << "," << y3 << endl <<
                "Fourth: " << x4 << "," << y4 << endl <<
                "Fifth: " << x5 << "," << y5 << endl <<
                "Sixth: " << x6 << "," << y6 << endl;
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
};

