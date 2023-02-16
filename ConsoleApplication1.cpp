#include <iostream>		// консольный ввод-вывод
#include <string>		// для работы с типом данных string
#include <iomanip>		// форматированный вывод на экран
#include "Figure123.h" // Родительский класс
#include "FigureTriangle123.h" // Дочерний класс
#include "FigureSexangle123.h" // Дочерний класс
using namespace std;

class Menu1 {
public:
    int MenuTriangle(void) {
        int select;
        do
        {
            system("CLS");
            cout << "Select an action:" << endl << endl;
            cout << "FIGURE Triangle" << endl;
            cout << "Press 1 - Create figure" << endl;
            cout << "Press 2 - Delite figure" << endl;
            cout << "Press 3 - Show figure" << endl;
            cout << "Press 4 - Verification figure" << endl;
            cout << "Press 5 - MoveO figure" << endl;
            cout << "Press 6 - Intersect figure" << endl << endl;
            cout << "EXIT" << endl << endl;
            cout << "Press 22 - Exit in main menu" << endl << endl;
            cout << "Choice: ";
            cin >> select;
            cout << endl;
        } while ((select < 1) || (select > 111));

        return select;
    }

    int MenuSexangle(void) {
        int select;
        do
        {
            system("CLS");
            cout << "Select an action:" << endl << endl;
            cout << "FIGURE Sexangle" << endl;
            cout << "Press 1 - Create figure" << endl;
            cout << "Press 2 - Delite figure" << endl;
            cout << "Press 3 - Show figure" << endl;
            cout << "Press 4 - Verification figure" << endl;
            cout << "Press 5 - MoveO figure" << endl;
            cout << "Press 6 - Intersect figure" << endl << endl;
            cout << "EXIT" << endl << endl;
            cout << "Press 22 - Exit in main menu" << endl << endl;
            cout << "Choice: ";
            cin >> select;
            cout << endl;
        } while ((select < 1) || (select > 111));

        return select;
    }

    int Menu(void) {
        int select;
        do
        {
            system("CLS");
            cout << "Select an action:" << endl << endl;
            cout << "Press 1 - Figure Triangle" << endl;
            cout << "Press 2 - Figure Sexangle" << endl << endl;
            cout << "EXIT" << endl << endl;
            cout << "Press 111 - Exit the app" << endl << endl;
            cout << "Choice: ";
            cin >> select;
            cout << endl;
        } while ((select < 1) || (select > 111));

        return select;
    }
};

int main()
{
    Menu1 Menu; //Menu
    FigureTriangle123 A; //1 Figure
    FigureSexangle123 B; //2 Figure
    int select, selectA, selectB, num;
    do
    {
        // вызываем главное меню и выполняем выбор пользователя
        select = Menu.Menu();
        switch (select)
        {
        case 1:
        {
            do
            {
                selectA = Menu.MenuTriangle();
                switch (selectA)
                {
                case 1:
                {
                    A.Create();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 2:
                {
                    A.Delete();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 3:
                {
                    A.Show();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 4:
                {
                    A.Verification();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 5:
                {
                    A.MoveO();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 6:
                {
                    A.Intersect();
                    cout << endl;
                    system("pause");
                    break;
                }
                if (selectA != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectA != 22);
            break;
        }
        case 2:
        {
            do
            {
                selectB = Menu.MenuSexangle();
                switch (selectB)
                {
                case 1:
                {
                    B.Create();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 2:
                {
                    B.Delete();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 3:
                {
                    B.Show();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 4:
                {
                    B.Verification();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 5:
                {
                    B.MoveO();
                    cout << endl;
                    system("pause");
                    break;
                }
                case 6:
                {
                    B.Intersect();
                    cout << endl;
                    system("pause");
                    break;
                }
                if (selectB != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectB != 22);
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