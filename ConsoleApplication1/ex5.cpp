#include <iostream>
#include <limits>

using namespace std;

int enter1() {
    int answer;
    while (true) {
        cin >> answer;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You enter incorrect answer/ Please TRY AGAIN: \n" << endl;
        }
        else {
            break;
        }
    }
    return answer;
}

int main__() {
    setlocale(LC_ALL, "Russian");
    int n = 0;
    do {
        cout << "Длина массива: ";
        n = enter1();
        if (n <= 0) {
            cout << "больше, больше!. Try again.\n";
        }
    } while (n <= 0);

    int* otv = new int[n];

    for (int i = 0; i < n; i++)
    {
        otv[i] = enter1();
    }

    int i = 0;
    while (i < n) printf(" %d", otv[i++]);
    return 0;
}