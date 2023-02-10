#include <iostream>		// консольный ввод-вывод
#include <string>		// для работы с типом данных string
#include <iomanip>		// форматированный вывод на экран

using namespace std;
class Figure {
    int x1; //фигура 2 (1) 
    int y1; //фигура 2 (1) 
    int x2; //фигура 2 (2) 
    int y2; //фигура 2 (2) 
    int x3; //фигура 2 (3) 
    int y3; //фигура 2 (3) 
    int x4; //фигура 2 (4) 
    int y4; //фигура 2 (4) 
    int x5; //фигура 2 (5) 
    int y5; //фигура 2 (5) 
    int x6; //фигура 2 (6) 
    int y6; //фигура 2 (6) 
    bool live; // Proverka
protected:
    void Create(int num) {
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
    }
    void Delete(int num) { // Удаление фигуры
        if (num == 3) {
            cout << "Figure Delited!";
            cout << endl;
            live = 0;
        }
        else {
            cout << "Figure Delited!";
            cout << endl;
            live = 0;
        }
    }
    void Show(int num) { // Тип фигуры
        if (num == 3) {

            if (live == 1) {
                cout << "Triangle";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
        else {
            if (live == 1) {
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

            if (live == 1) {
                cout << "Figure Exists";
            }
            else {
                cout << "Figure Does not exist!";
            }
            cout << endl;
        }
        else {
            if (live == 1) {
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
        else {
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
    }
    void Intersect(int num) { //Определение факта перемещение объекта
        if (num == 3) {

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
        else {
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
class FigureA : protected Figure {
public:
    Create(3) {
        if (num == 3) {
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
    }
};
class FigureB : protected Figure {
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
        cout << "Ok, Standart Triangle" << endl;
        system("pause");
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