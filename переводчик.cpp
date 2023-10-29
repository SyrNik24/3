#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    //переменные
    int num;

    //Выбор языка
    cout << "1]Русский язык" << endl << "2]Английский язык" << endl;
    cout << "" << endl << "3]Выход";
    cout << "" << endl<<"Выберете номер:";
    cin >> num;
    system("cls");

    //Русский язык
    switch (num) {
    case 1:
        cout << "1]Привет" << endl << "2]Мир" << endl << "3]Слово" << endl << "4]Дорога" << endl << "5]Мяч" << endl;
        cout << "6]Нога" << endl << "7]Компьютер" << endl << "8]Стол" << endl << "9]Рабочий стол" << endl;
        cout << "10]Огонь" << endl << "11]Солнце" << endl << "12]Вода" << endl;
        cout << "13]Земля" << endl << "14]Воздух" << endl << "15]Машина" << endl << "" << endl;
        cout << "Выберете номер слова:";
        cin >> num;

        //Русский перевод
        switch (num) {
        case 1:
            cout << "Перевод: Привет -> hello";
            break;
        case 2:
            cout << "Перевод: Мир -> world";
            break;
        case 3:
            cout << "Перевод: Слово -> word";
            break;
        case 4:
            cout << "Перевод: Дорога -> road";
            break;
        case 5:
            cout << "Перевод: Мяч -> ball";
            break;
        case 6:
            cout << "Перевод: Нога -> foot";
            break;
        case 7:
            cout << "Перевод: Компьютер -> computer";
            break;
        case 8:
            cout << "Перевод: Стол -> table";
            break;
        case 9:
            cout << "Перевод: Рабочий стол -> desktop";
            break;
        case 10:
            cout << "Перевод: Огонь -> fire";
            break;
        case 11:
            cout << "Перевод: Солнце -> sun";
            break;
        case 12:
            cout << "Перевод: Вода -> water";
            break;
        case 13:
            cout << "Перевод: Земля -> earth";
            break;
        case 14:
            cout << "Перевод: Воздух -> air";
            break;
        case 15:
            cout << "Перевод: Мышина -> car";
            break;
        default:
            cout << "Вы ввели неизвестный номер";
            break;
        }
        break;
    case 2:

        //Английский язык
        cout << "1]Name" << endl << "2]Syrname" << endl << "3]Lion" << endl;
        cout << "4]Key" << endl << "5]World" << endl << "6]Sword" << endl;
        cout << "7]Worm" << endl << "8]Chain" << endl << "9]File" << endl;
        cout << "10]Helicopter" << endl << "11]Tea" << endl << "12]Word" << endl;
        cout << "13]Lamp" << endl << "14]Window" << endl << "15]Keyboard" << endl;
        cout << "" << endl << "Введите номер слова:" << endl;
        cin >> num;

        //Английский перевод
        switch(num){
        case 1:
            cout << "Перевод: Name -> Имя";
            break;
        case 2:
            cout << "Перевод: Syrname -> Фамилия";
            break;
        case 3:
            cout << "Перевод: Lion -> Лев";
            break;
        case 4:
            cout << "Перевод: Key -> Ключ";
            break;
        case 5:
            cout << "Перевод: World -> Мир";
            break;
        case 6:
            cout << "Перевод: Sword -> Меч";
            break;
        case 7:
            cout << "Перевод: Worm -> Червь";
            break;
        case 8:
            cout << "Перевод: Chain -> Цепь";
            break;
        case 9:
            cout << "Перевод: File -> Файл";
            break;
        case 10:
            cout << "Перевод: Helicopter -> Вертолет";
            break;
        case 11:
            cout << "Перевод: Tea -> Чай";
            break;
        case 12:
            cout << "Перевод: Word -> Слово";
            break;
        case 13:
            cout << "Перевод: Lamp -> Лампа";
            break;
        case 14:
            cout << "Перевод: Window -> Окно";
            break;
        case 15:
            cout << "Перевод: Keyboard -> Клавиатура";
            break;
        default:
            cout << "Вы ввели неизвестный номер";
            break;
        }
        break;

    case 3:
        cout << "*Вы вышли из программы*";
        break;

    default:
        cout << "Вы ввели неизвестный номер";
        break;
    }

    return 0;
}