#include <iostream>		// консольный ввод-вывод
#include <string>		// для работы с типом данных string
#include <iomanip>		// форматированный вывод на экран

using namespace std;
class Figure {
    int Ax1; //фигура 1 (1) 
    int Ay1; //фигура 1 (1) 
    int Ax2; //фигура 1 (2) 
    int Ay2; //фигура 1 (2) 
    int Ax3; //фигура 1 (3) 
    int Ay3; //фигура 1 (3) 
    bool liveA; // Proverka
public:
    void CreateTriangle() {
        cout << "Figure Created!";
        cout << endl;
        cout << "Start position:" << endl;
        cout << "First \t= 0,0" << endl;
        cout << "Second \t= 0,0" << endl;
        cout << "Third \t= 0,0";
        cout << endl;
        Ax1 = 0;
        Ay1 = 0;
        Ax2 = 0;
        Ay2 = 0;
        Ax3 = 0;
        Ay3 = 0;
        liveA = 1;
    }
};
class FigureA : public Figure {
    int Ax1; //фигура 1 (1) 
    int Ay1; //фигура 1 (1) 
    int Ax2; //фигура 1 (2) 
    int Ay2; //фигура 1 (2) 
    int Ax3; //фигура 1 (3) 
    int Ay3; //фигура 1 (3) 
    bool liveA; // Proverka
public:
    void Create() { // Создание фигуры
        cout << "Figure Created!";
        cout << endl;
        cout << "Start position:" << endl;
        cout << "First \t= 0,0" << endl;
        cout << "Second \t= 0,0" << endl;
        cout << "Third \t= 0,0";
        cout << endl;
        Ax1 = 0;
        Ay1 = 0;
        Ax2 = 0;
        Ay2 = 0;
        Ax3 = 0;
        Ay3 = 0;
        liveA = 1;
    }
    void Delete() { // Удаление фигуры
        cout << "Figure Delited!";
        cout << endl;
        liveA = 0;
    }
    void Show() { // Тип фигуры
        if (liveA == 1) {
            cout << "Triangle";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Verification() { // Проверка существования фигуры
        if (liveA == 1) {
            cout << "Figure Exists";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void MoveO() { //Перемещение объекта на плоскости
        if (liveA == 1) {
            Ax1 += 1;
            Ay1 += 0;
            Ax2 += 4;
            Ay2 += 1;
            Ax3 += -3;
            Ay3 += -4;
            cout << "Figure has been moved";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Intersect() { //Определение факта перемещение объекта
        if (liveA == 1) {
            cout << "First: " << Ax1 << "," << Ay1 << endl << 
                "Second: " << Ax2 << "," << Ay2 << endl << 
                "Third: " << Ax3 << "," << Ay3;
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
};
class FigureB : public Figure {
    int Bx1; //фигура 2 (1) 
    int By1; //фигура 2 (1) 
    int Bx2; //фигура 2 (2) 
    int By2; //фигура 2 (2) 
    int Bx3; //фигура 2 (3) 
    int By3; //фигура 2 (3) 
    int Bx4; //фигура 2 (4) 
    int By4; //фигура 2 (4) 
    int Bx5; //фигура 2 (5) 
    int By5; //фигура 2 (5) 
    int Bx6; //фигура 2 (6) 
    int By6; //фигура 2 (6) 
    bool liveB; // Proverka
public:
    void Create() { // Создание фигуры
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
        Bx1 = 0;
        By1 = 0;
        Bx2 = 0;
        By2 = 0;
        Bx3 = 0;
        By3 = 0;
        Bx4 = 0;
        By4 = 0;
        Bx5 = 0;
        By5 = 0;
        Bx6 = 0;
        By6 = 0;
        liveB = 1;
    }
    void Delete() { // Удаление фигуры
        cout << "Figure Delited!";
        cout << endl;
        liveB = 0;
    }
    void Show() { // Тип фигуры
        if (liveB == 1) {
            cout << "Sexangle";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Verification() { // Проверка существования фигуры
        if (liveB == 1) {
            cout << "Figure Exists";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void MoveO() { //Перемещение объекта на плоскости
        if (liveB == 1) {
            Bx1 += 2;
            By1 += -5;
            Bx2 += 3;
            By2 += 5;
            Bx3 += -6;
            By3 += -2;
            Bx4 += -8;
            By4 += -7;
            Bx5 += 5;
            By5 += -3;
            Bx6 += -10;
            By6 += 15;
            cout << "Figure has been moved";
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
    void Intersect() { //Определение факта перемещение объекта
        if (liveB == 1) {
            cout <<
                "First: " << Bx1 << "," << By1 << endl <<
                "Second: " << Bx2 << "," << By2 << endl <<
                "Third: " << Bx3 << "," << By3 << endl <<
                "Fourth: " << Bx4 << "," << By4 << endl <<
                "Fifth: " << Bx5 << "," << By5 << endl <<
                "Sixth: " << Bx6 << "," << By6 << endl;
        }
        else {
            cout << "Figure Does not exist!";
        }
        cout << endl;
    }
};
// главное меню программы
int Menu(void)
{
    int select;

    do
    {
        system("CLS");
        cout << "Select an action:" << endl << endl;
        cout << "FIRST FIGURE. " << endl;
        cout << "Press 1 - Create first figure" << endl;
        cout << "Press 2 - Delite first figure" << endl;
        cout << "Press 3 - Show first figure" << endl;
        cout << "Press 4 - Verification first figure" << endl;
        cout << "Press 5 - MoveO first figure" << endl;
        cout << "Press 6 - Intersect first figure" << endl << endl;
        cout << "SECOND FIGURE. " << endl;
        cout << "Press 7 - Create second figure" << endl;
        cout << "Press 8 - Delite second figure" << endl;
        cout << "Press 9 - Show second figure" << endl;
        cout << "Press 10 - Verification second figure" << endl;
        cout << "Press 11 - MoveO second figure" << endl;
        cout << "Press 12 - Intersect second figure" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 13 - EXIT" << endl << endl;
        cout << "Choice: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select > 13));

    return select;
}

int main()
{
    FigureA A; //1 Figure
    FigureB B; //2 Figure
    int select;
    do
    {
        // вызываем главное меню и выполняем выбор пользователя
        select = Menu();
        switch (select)
        {
        case 1:
        {
            A.CreateTriangle();
            break;
        }
        case 2:
        {
            A.Delete();
            break;

        }
        case 3:
        {
            A.Show();
            break;
        }
        case 4:
        {
            A.Verification();
            break;
        }
        case 5:
        {
            A.MoveO();
            break;
        }
        case 6:
        {
            A.Intersect();
            break;
        }
        case 7:
        {
            B.Create();
            break;
        }
        case 8:
        {
            B.Delete();
            break;

        }
        case 9:
        {
            B.Show();
            break;
        }
        case 10:
        {
            B.Verification();
            break;
        }
        case 11:
        {
            B.MoveO();
            break;
        }
        case 12:
        {
            B.Intersect();
            break;
        }
        }   
        if (select != 13)
        {
            cout << endl << endl;
            system("pause");
        }
    } while (select != 13);
    return EXIT_SUCCESS;
    
}
