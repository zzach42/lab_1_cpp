#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int sumLastNums(int x)
{
    int lastDigit = x % 10;
    int secondLastDigit = (x / 10) % 10;
    return lastDigit + secondLastDigit;
}

bool isPositive(int x)
{
    return x > 0;
}

bool isUpperCase(char x)
{
    return (x >= 'A' && x <= 'Z');
}

bool isDivisor(int x, int y)
{
    return ((x % y == 0) || (y % x == 0));
}

int lastNumSum(int x, int y)
{
    return ((x % 10) + (y % 10));
}

double safeDiv(int x, int y)
{
    if (y == 0) 
    {
        return 0.0;
    }
    else
    {
        return (x * 1.0) / y;  
    }
}

string makeDecision(int x, int y)
{
    if (x == y)
    {
        return to_string(x) + "=" + to_string(y);
    }
    else if (x > y)
    {
        return to_string(x) + ">" + to_string(y);
    }
    else
    {
        return to_string(x) + "<" + to_string(y);
    }
}

bool sum3(int x, int y, int z) 
{
    return ((x + y == z) || (x + z == y) || (y + z == x));
}

string age(int x)
{
    int lastTwo = x % 100;
    int lastDigit = x % 10;

    if (lastDigit == 1 && lastTwo != 11) 
    {
        return to_string(x) + " год";
    }
    else if (lastDigit >= 2 && lastDigit <= 4 && (lastTwo < 12 || lastTwo > 14)) 
    {
        return to_string(x) + " года";
    }
    else
    {
        return to_string(x) + " лет";
    }
}

string printDays(int x)
{
    switch(x)
    {
        case 1:
            return "Понедельник\nВторник\nСреда\nЧетверг\nПятница\nСуббота\nВоскресенье";
        case 2:
            return "Вторник\nСреда\nЧетверг\nПятница\nСуббота\nВоскресенье";
        case 3:
            return "Среда\nЧетверг\nПятница\nСуббота\nВоскресенье";
        case 4:
            return "Четверг\nПятница\nСуббота\nВоскресенье";
        case 5:
            return "Пятница\nСуббота\nВоскресенье";
        case 6:
            return "Суббота\nВоскресенье";
        case 7:
            return "Воскресенье";
        
        default:
            return "это не день недели";
    }
}

string reverseListNums(int x) 
{
    string ss;

    for (int i = x; i >= 0; --i) 
    {
        ss += to_string(i); 
        if (i > 0) 
        {
            ss += " ";
        }
    }

    return ss;
}

int pow(int x, int y) 
{
    int result(1);

    for (int i = 0; i < y; i++) 
    {
        result *= x;
    }

    return result;
}

bool equalNum(int x) 
{
    if (x < 0) 
    {
        x = -x;
    }

    if (x < 10) 
    {
        return true;
    }

    int lastDigit = x % 10;
    while (x > 0) 
    {
        int currentDigit = x % 10;
        if (currentDigit != lastDigit) 
        {
            return false;
        }
        x = x / 10;
    }

    return true;
}

void leftTriangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void guessGame()
{
    srand(time(0));
    int secret = rand() % 10;  
    int number;
    int attempts = 0;

    cout << "Введите число от 0 до 9:" << endl;
    cin >> number;
    attempts++;

    while (number != secret)
    {
        cout << "Вы не угадали, введите число от 0 до 9:" << endl;
        cin >> number;
        attempts++;
    }

    cout << "Вы угадали!" << endl;
    cout << "Вы отгадали число за " << attempts << " попытки" << endl;
}

int findLast(int arr[], int size, int x)
{
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            index = i;
        }
    }

    return index;
}




int main()
{   
    int number;
    cout << "1. Сумма двух последних цифр числа\n";
    cout << "2. Проверка: положительное ли число\n";
    cout << "3. Проверка: заглавная ли буква\n";
    cout << "4. Проверка: делит ли одно число другое\n";
    cout << "5. Последовательная сумма последних цифр (5 чисел)\n";
    cout << "6. Безопасное деление\n";
    cout << "7. Строка сравнения\n";
    cout << "8. Тройная сумма\n";
    cout << "9. Возраст\n";
    cout << "10. Дни недели\n";
    cout << "11. Числа наоборот\n";
    cout << "12. Степень числа\n";
    cout << "13. Одинаковость\n";
    cout << "14. Левый треугольник\n";
    cout << "15. Угадайка\n";
    cout << "Введите номер задания: ";
    cin >> number;

    switch(number)
    {
        case 1:
        {
            // Номер 2. Сумма двух последних цифр
            int Num_1;
            cout << "Введите число (число > 10): ";
            cin >> Num_1;
            cout << "Сумма двух последних цифр: " << sumLastNums(Num_1) << endl;
            break;
        }
        
        case 2:
        {
            // Номер 4. Есть ли позитив
            int Num_2;
            cout << "Введите число: ";
            cin >> Num_2;
            cout << isPositive(Num_2) << endl;
            break;
        }   

        case 3:
        {
            // Номер 6. Большая буква
            char Num_3;
            cout << "Введите символ: ";
            cin >> Num_3;
            cout << isUpperCase(Num_3) << endl;
            break;
        }

        case 4:
        {
            // Номер 8. Делитель
            int Num_4_1, Num_4_2;
            cout << "Введите число a: ";
            cin >> Num_4_1;
            cout << "Введите число b: ";
            cin >> Num_4_2;
            cout << isDivisor(Num_4_1, Num_4_2) << endl;
            break;
        }

        case 5:
        {
            // Номер 10. Последовательная сумма последних цифр
            int Num_5_1, Num_5_2;
            cout << "Введите первое число: ";
            cin >> Num_5_1;
            cout << "Введите второе число: ";
            cin >> Num_5_2;
            cout << Num_5_1 << " + " << Num_5_2 << " -> " 
                 << lastNumSum(Num_5_1, Num_5_2) << endl;
            break;
        }

        case 6:
        {
            // Задача 2, Номер 2. Безопасное деление
            int Num_6_1, Num_6_2;
            cout << "Введите делимое x: ";
            cin >> Num_6_1;
            cout << "Введите делитель y: ";
            cin >> Num_6_2;
            cout << "Результат деления: " << safeDiv(Num_6_1, Num_6_2) << endl;
            break;
        }

        case 7:
        {
            // Номер 4. Строка сравнения
            int Num_7_1, Num_7_2;
            cout << "Введите число a: ";
            cin >> Num_7_1;
            cout << "Введите число b: ";
            cin >> Num_7_2;
            cout << "Результат: " << makeDecision(Num_7_1, Num_7_2) << endl;
            break;
        }
        
        case 8:
        {
            // Номер 6. Тройная сумма
            int Num_8_1, Num_8_2, Num_8_3;
            cout << "Введите число a: ";
            cin >> Num_8_1;
            cout << "Введите число b: ";
            cin >> Num_8_2;
            cout << "Введите число c: ";
            cin >> Num_8_3;
            cout << sum3(Num_8_1, Num_8_2, Num_8_3) << endl;
            break;
        }

        case 9:
        {
            // Номер 8. Возраст
            int Num_9;
            cout << "Введите возраст: ";
            cin >> Num_9;
            cout << age(Num_9) << endl;
            break;
        }
        
        case 10:
        {
            // Номер 10. Дни недели
            int Num_10;
            cout << "Введите номер дня недели (1-7): ";
            cin >> Num_10;
            cout << printDays(Num_10) << endl;
            break;
        }
        
        case 11:
        {
            // Задача 3, Номер 2. Числа наоборот
            int Num_11;
            cout << "Введите число: ";
            cin >> Num_11;
            cout << reverseListNums(Num_11) << endl;
            break;
        }

        case 12:
        {
            // Номер 4. Степень числа
            int Num_12_1, Num_12_2;
            cout << "Введите число x: ";
            cin >> Num_12_1;
            cout << "Введите степень y: ";
            cin >> Num_12_2;
            cout << Num_12_1 << " в степени " << Num_12_2 
                 << " = " << pow(Num_12_1, Num_12_2) << endl;
            break;
        }
        
        case 13:
        {
            // Номер 6. Одинаковость
            int Num_13;
            cout << "Введите число: ";
            cin >> Num_13;
            cout << equalNum(Num_13) << endl;
            break;
        }

        case 14:
        {
            // Номер 8. Левый треугольник
            int Num_14;
            cout << "Введите высоту треугольника: ";
            cin >> Num_14;
            leftTriangle(Num_14);
            break;
        }

        case 15:
        {
            // Номер 10. Угадайка
            cout << "Игра 'Угадай число'" << endl;
            guessGame();
            break;
        }       
    }
    return 0;
}