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
    void Create(int num) {
        if (num == 3) {
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
        else {
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
    }
    void Delete(int num) { // Удаление фигуры
        if (num == 3) {
            cout << "Figure Delited!";
            cout << endl;
            liveA = 0;
        }
        else {
            cout << "Figure Delited!";
            cout << endl;
            liveB = 0;
        }
    }
    void Show(int num) { // Тип фигуры
        if (num == 3) {

            if (liveA == 1) {
                cout << "Triangle";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
        else {
            if (liveB == 1) {
                cout << "Sexangle";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
    }
    void Verification(int num) { // Проверка существования фигуры
        if (num == 3) {

            if (liveA == 1) {
                cout << "Figure Exists";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
        else {
            if (liveB == 1) {
                cout << "Figure Exists";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
    }
    void MoveO(int num) { //Перемещение объекта на плоскости
        if (num == 3) {

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
        else {
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
    }
    void Intersect(int num) { //Определение факта перемещение объекта
        if (num == 3) {

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
        else {
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
    }
    int Change(int num) {
        if (num == 3) {
            return num = 6;
        }
        else {
            return num = 3;
        }
    }
};
class FigureA : public Figure {
};
class FigureB : public Figure {
};
// главное меню программы
int Menu(void)
{
    int select;

    do
    {
        system("CLS");
        cout << "Select an action:" << endl << endl;
        cout << "FIGURE" << endl;
        cout << "Press 1 - Create figure" << endl;
        cout << "Press 2 - Delite figure" << endl;
        cout << "Press 3 - Show figure" << endl;
        cout << "Press 4 - Verification figure" << endl;
        cout << "Press 5 - MoveO figure" << endl;
        cout << "Press 6 - Intersect figure" << endl;
        cout << "Press 7 - Go to the next figure" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 111 - Exit the app" << endl << endl;
        cout << "Choice: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select > 111));

    return select;
}

int main()
{
    FigureA A; //1 Figure
    int select, Num;
    string fig;
    cout << "U can choose Triangle or Sexangle" << endl;
    cout << "Write Figure what are u want: ";
    cin >> fig;
    if (fig == "Triangle") {
        Num = 3;
    }
    else if (fig == "Sexangle") {
        Num = 6;
    }
    else {
        Num = 3;
    }
    do
    {
        // вызываем главное меню и выполняем выбор пользователя
        select = Menu();
        switch (select)
        {
        case 1:
        {
            A.Create(Num);
            break;
        }
        case 2:
        {
            A.Delete(Num);
            break;

        }
        case 3:
        {
            A.Show(Num);
            break;
        }
        case 4:
        {
            A.Verification(Num);
            break;
        }
        case 5:
        {
            A.MoveO(Num);
            break;
        }
        case 6:
        {
            A.Intersect(Num);
            break;
        }
        case 7:
        {
            Num = A.Change(Num);
            break;
        }
        }   
        if (select != 111)
        {
            cout << endl << endl;
            system("pause");
        }
    } while (select != 111);
    return EXIT_SUCCESS;
    
}
