#pragma once
#include "Figure123.h"
#include <iostream>
using namespace std;

class FigureTriangle123 : public Figure123
{
    int x1; //фигура  (1) 
    int y1; //фигура  (1) 
    int x2; //фигура  (2) 
    int y2; //фигура  (2) 
    int x3; //фигура  (3) 
    int y3; //фигура  (3) 
    bool live;
public:
    void Create() {
        cout << "Figure Created!";
        cout << endl;
        cout << "Start position:" << endl;
        cout << "First \t= 0,0" << endl;
        cout << "Second \t= 0,0" << endl;
        cout << "Third \t= 0,0";
        cout << endl;
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
        x3 = 0;
        y3 = 0;
        live = 1;
    }
    void Delete() { // Удаление фигуры
        cout << "Figure Delited!";
        cout << endl;
        live = 0;
    }
    void Show() { // Тип фигуры
        if (live == 1) {
            cout << "Triangle";
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
            x1 += 1;
            y1 += 0;
            x2 += 4;
            y2 += 1;
            x3 += -3;
            y3 += -4;
            cout << "Figure has been moved";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Intersect() {
        if (live == 1) {
            cout << "First: " << x1 << "," << y1 << endl <<
                "Second: " << x2 << "," << y2 << endl <<
                "Third: " << x3 << "," << y3;
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
};

