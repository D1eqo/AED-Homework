#include <stdbool.h>

int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    bool served[studentsSize];
    for (int i = 0; i < studentsSize; i++) {
        served[i] = false;
    }

    int remainingStudents = studentsSize;
    int currentSandwich = 0;

    while (remainingStudents > 0) {
        bool foundPreference = false;

        for (int i = 0; i < studentsSize; i++) {
            if (!served[i] && students[i] == sandwiches[currentSandwich]) {
                served[i] = true;
                remainingStudents--;
                foundPreference = true;
                currentSandwich++;
            }
        }

        if (!foundPreference) {
            break;
        }
    }

    return remainingStudents;
}
