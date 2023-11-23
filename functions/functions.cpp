#include <iostream>
#include <cmath>

using namespace std;

#define Task 0

#if Task == 0

/*
Задание 1. Написать функцию, которая принимает два параметра: основание степени и показатель степени, и
вычисляет степень числа на основе полученных данных.

Задание 2. Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними.

Задание 3. Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.

Задание 4. Написать функцию, выводящую на экран переданную ей игральную карту.

Задание 5. Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
*/


// Задание 1
double Degree(double number, int degree) {

    return pow(number, degree);
}


// Задание 2
int sumInRange(int start, int end) {

    int sum = 0;
    for (int i = start; i <= end; i++) {

        sum += i;
    }
    return sum;
}

// Задание 3
void findPerfectNumbers(int start, int end) {

    cout << "Perfect numbers in the range " << start << " - " << end << endl;

    for (int i = start; i <= end; i++) {

        int sum = 1;
        for (int j = 2; j <= i; j++) {

            if (i % j == 0) {

                sum += j;
                if (j != i / j) {

                    sum += i / j;
                }
            }
        }
        if (sum == i) {

            cout << i << " ";
        }
    }
    cout << endl;
}

//задание 4
void card(int rank) {

    cout << "Card: ";

    switch (rank) {
    case 1:
        cout << "Ace\n";
        break;
    case 11:
        cout << "Jack\n";
        break;
    case 12:
        cout << "Queen\n";
        break;
    case 13:
        cout << "King\n";
        break;
    default:

        cout << "Not find. Try agin\n";
    }
}

//задание 5
bool isHappyNumber(int number) {

    if (number < 100000 || number > 999999) {

        return false;  // Не шестизначное число
    }

    int sumFirstHalf = 0, sumSecondHalf = 0;

    for (int i = 0; i < 3; i++) {

        sumFirstHalf += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++) {

        sumSecondHalf += number % 10;
        number /= 10;
    }

    return sumFirstHalf == sumSecondHalf;
}

int main() {

    cout << "Task 1: " << Degree(2, 3) << endl;

    cout << "Task 2: " << sumInRange(1, 5) << endl;

    cout << "Task 3: ";
    findPerfectNumbers(1, 1000);

    cout << "Task 4: ";
    card(11);     //передаем номер карты

    cout << "Task 5: " << (isHappyNumber(123321) ? "Happy Number" : "Not a Happy Number") << endl;

    return 0;
}
#endif





#if Task == 1
//Задание 1. Написать функцию, реализующую алгоритм
//линейного поиска заданного ключа в одномерном массиве.

int linearSearch(int arr[], int size, int key) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == key) {

            return i; //возвращаем индекс если ключ найден
        }
    }
    return -1; //возвращаем -1 если ключ не найден
}

int main() {
    const int size = 5;
    int arr[size] = { 10, 20, 30, 40, 50 };
    int key = 30;

    int result = linearSearch(arr, size, key);

    if (result != -1) {

        cout << "Key found at index: " << result << endl;
    }
    else {

        cout << "Key not found" << endl;
    }

    return 0;
}
#endif



#if Task == 2
//Задание 2. Написать функцию, реализующую алгоритм
//бинарного поиска заданного ключа в одномерном массиве.

int binarySearch(int arr[], int size, int key) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;//найти середину 

        if (arr[mid] == key) {

            return mid; //возвращаем индекс если ключ найден
        }

        if (arr[mid] < key) {

            left = mid + 1;
        }
        else {

            right = mid - 1;
        }
    }

    return -1; //возвращаем -1 если ключ не найден
}

int main() {
    const int size = 5;
    int arr[size] = { 10, 20, 30, 40, 50 };
    int key = 30;

    int result = binarySearch(arr, size, key);

    if (result != -1) {

        cout << "Key found at index: " << result << endl;
    }
    else {

        cout << "Key not found" << endl;
    }

    return 0;
}
#endif




#if Task == 3 

//Задание 3. Написать функцию для перевода числа, записанного в двоичном виде, в десятичное представление.

int Binary(int binary[], int size) {
    int decimal = 0;

    for (int i = size - 1; i >= 0; i--) {

        decimal += binary[i] * pow(2, size - 1 - i);
    }

    return decimal;
}

int main() {
    const int size = 4;
    int binary[size] = { 1, 0, 1, 1 };

    int result = Binary(binary, size);

    cout << "Decimal equivalent: " << result << endl;

    return 0;
}
#endif

