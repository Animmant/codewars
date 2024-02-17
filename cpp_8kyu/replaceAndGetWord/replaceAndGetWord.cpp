#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
using namespace std;

void print(string first, string formula = "\n") {
    cout << first << formula;
}

void consoleOut(double content, string formula = "\n") {
    cout << content << formula;
}

double getModule(double number) {
    return number < 0 ? -number : number;
}

double findMinModule(double arr[], int lenght) {
    double min = *arr;
    for (int i = 1; i < lenght; i++) {
        if (getModule(min) > getModule(arr[i])) {
            min = arr[i];
        }
    }
    return min;
}

double getFirstLossIndex(double arr[], int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        if (arr[i] < 0) {
            return i;
        }
    }
    return arr[0];
}

double sumModulRange(double arr[], int begin, int end) {
    double sum = 0;
    for (int i = begin; i < end; i++) {
        sum += getModule(arr[i]);
    }
    return sum;
}

void arrCompress(double* arrTrash, int lenghtArrTrash) {
    double from, to;
    int lenghtArrClean = 0;
    double arrClean[999]{};

    cout << "enter a value from and to: ";
    cin >> from;
    cout << "enter a value to: \n";
    cin >> to;

    //запис чисел у масив
    for (int i = 0; i < lenghtArrTrash; i++) {
        if (arrTrash[i] < from || arrTrash[i] > to) {
            arrClean[lenghtArrClean++] = arrTrash[i];
        }

    }

    for (int i = 0; i < lenghtArrTrash; i++) {
        cout << i << ": " << arrClean[i] << "\n";
    }
}

void printArrMatrix(double** arrTrash, int firstAxis_ForReadingOrder, int secondAxis_ForReadingOrder) {
    for (int j = 0; j < firstAxis_ForReadingOrder; j++) {
        for (int i = 0; i < secondAxis_ForReadingOrder; i++) {
            cout << i << "x, " << j << "y : " << arrTrash[j][i] << "\t|";
        }
        print("");
    }
}


int chooseOperatingOnDynamycArray(double** arrGachi, int firstAxis_ForReadingOrderGachi, int secondAxis_ForReadingOrderGachi) {
    int userChoice;
    cout << "enter a userChoice number: ";
    cin >> userChoice;

    //иницилизация строки з характеристикою рядка
    double* arrCharacteristic_OnRowWithGopnics = new double[firstAxis_ForReadingOrderGachi];

    switch (userChoice) {
    case 1:
        for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
            for (int j = 0; j < secondAxis_ForReadingOrderGachi; j++) {
                if (arrGachi[i][j] == 0) {
                    consoleOut(j, "first column with zero\n");
                    return j;
                }
            }
        }
        break;
    case 2: {

        for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
            arrCharacteristic_OnRowWithGopnics[i] = 0;
        }

        for (int j = 0; j < secondAxis_ForReadingOrderGachi; j++) {
            for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
                if (arrGachi[i][j] < 0 && static_cast<int>(arrGachi[i][j]) % 2 == 0) {
                    arrCharacteristic_OnRowWithGopnics[i] += arrGachi[i][j];
                }
            }
        }
        print("/////////////// \n street characteristic - sum of even negative strings");
        for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
            consoleOut(arrCharacteristic_OnRowWithGopnics[i], "\t");
        }
        print("");

        print("sort matrix for characteristic(sum even negative number)");
        for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
            for (int j = 0; j < firstAxis_ForReadingOrderGachi - 1; j++) {
                if (arrCharacteristic_OnRowWithGopnics[j] < arrCharacteristic_OnRowWithGopnics[j + 1]) {
                    int temp = arrCharacteristic_OnRowWithGopnics[j];
                    arrCharacteristic_OnRowWithGopnics[j] = arrCharacteristic_OnRowWithGopnics[j + 1];
                    arrCharacteristic_OnRowWithGopnics[j + 1] = temp;

                    for (int k = 0; k < secondAxis_ForReadingOrderGachi; k++) {
                        temp = arrGachi[j][k];
                        arrGachi[j][k] = arrGachi[j + 1][k];
                        arrGachi[j + 1][k] = temp;
                    }
                }
            }
        }

        for (int i = 0; i < firstAxis_ForReadingOrderGachi; i++) {
            consoleOut(arrCharacteristic_OnRowWithGopnics[i], "\t");
        }
        print("");


        break;
    }
    default:
        print("eror");
        break;
    }

    delete[] arrCharacteristic_OnRowWithGopnics;


}

void addEnteredInputTextTo_TheStringArray(string arrWords_OfEnteredUsers[], int &amountWords_OfEnteredUsers) {
    do {
        cin >> arrWords_OfEnteredUsers[amountWords_OfEnteredUsers];
        amountWords_OfEnteredUsers++;
    } while (arrWords_OfEnteredUsers[amountWords_OfEnteredUsers - 1] != "/end" && amountWords_OfEnteredUsers < 999);
    amountWords_OfEnteredUsers--;
}

void replaceToLowerWordsArrString(string arrWords_OfEnteredUsers[], int amountWords_OfEnteredUsers) {
    for (int i = 0; i < amountWords_OfEnteredUsers; i++) {
        for (int j = 0; j < arrWords_OfEnteredUsers[i].length(); j++) {
            if (arrWords_OfEnteredUsers[i][j] >= 'A' && arrWords_OfEnteredUsers[i][j] <= 'Z') {
                arrWords_OfEnteredUsers[i][j] = tolower(arrWords_OfEnteredUsers[i][j]);
            }
        }
    }
}

string getLongestWordsArrString(string arrWords_OfEnteredUsers[], int amountWords_OfEnteredUsers) {
    string currentLongestWord = arrWords_OfEnteredUsers[0];
    for (int i = 1; i < amountWords_OfEnteredUsers; i++) {
        if (arrWords_OfEnteredUsers[i].length() > currentLongestWord.length()) {
            currentLongestWord = arrWords_OfEnteredUsers[i];
        }
    }
    return currentLongestWord;
}

string conectArrString( string arrWords[], int amountWords, string startString = "") {
    
    for (int i = 0; i < amountWords; i++) {
        startString += " " + arrWords[i];
    }
    return startString;
}

void removeWords_WithEvenCountOfConsonantsLetters_ToStringArray(string arrWords_OfEnteredUsers[], int& amountWords_OfEnteredUsers) {
    int amountWordsByCondition = 0;
    string arrWordsByCondition[999]{ "" };

    replaceToLowerWordsArrString(arrWords_OfEnteredUsers, amountWords_OfEnteredUsers);

    for (int i = 0; i < amountWords_OfEnteredUsers; i++) {
        int amountCharByCondition = 0;

        for (int j = 0; j < arrWords_OfEnteredUsers[i].length(); j++) {
            char ch = arrWords_OfEnteredUsers[i][j];
            if (ch >= 'a' && ch <= 'z') {
                switch (ch) {
                case 'a':
                case 'u':
                case 'i':
                case 'o':
                case 'e': 
                    break;
                default:
                    amountCharByCondition++;
                    break;
                }
            }
        }

        if (amountCharByCondition % 2 == 1) {
            arrWordsByCondition[amountWordsByCondition] = arrWords_OfEnteredUsers[i];
            amountWordsByCondition++;

        }
    }

    // Clearing arrWords_OfEnteredUsers
    for (int i = 0; i < amountWords_OfEnteredUsers; i++) {
        arrWords_OfEnteredUsers[i].clear();
    }

    // Copying words that meet the condition back to arrWords_OfEnteredUsers
    for (int i = 0; i < amountWordsByCondition; i++) {
        arrWords_OfEnteredUsers[i] = arrWordsByCondition[i];
    }

    // Update the amountWords_OfEnteredUsers
    amountWords_OfEnteredUsers = amountWordsByCondition;
}


int main() {
    int amountWordsOfDiarrheaUsers = 0;
    string arrWordsOfDiarrheaUsers[999]{""};

    cout << "Enter strings. Enter /end for stop saving string : ";
   
    //вводимо рядок: HEllo world is a good job for your day
    addEnteredInputTextTo_TheStringArray(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers);
    cout << "Original:" << conectArrString(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers) << endl;

    replaceToLowerWordsArrString(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers);
    cout << "Lower:" << conectArrString(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers) << endl;

    cout << "LongestWords: " + getLongestWordsArrString(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers) << endl;
    removeWords_WithEvenCountOfConsonantsLetters_ToStringArray(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers);

    cout << "Lower:" << conectArrString(arrWordsOfDiarrheaUsers, amountWordsOfDiarrheaUsers) << endl;

    // Clearing arrWords_OfEnteredUsers
    for (int i = 0; i < amountWordsOfDiarrheaUsers; i++) {
        arrWordsOfDiarrheaUsers[i].clear();
    }

    return 0;
}