// Lab 9
//Excel Chukwu and Kiitan Doherty

#include<iostream>
#include<random>
using namespace std;

auto populateArray(int A[101][101], int N) {
    srand(int(time(0)));
    //generate random indices
    for(int b = 0; b<N; b++) {
        int i = rand()%101;;
        int j = rand()%101;
        A[i][j] += 1;
    }
    return A;
}

void searchValidEntries(int XL, int YL, int XH, int YH, int A[101][101]) {
    //print coordinates of non-zero values
    printf("Coordinates: (%d, %d), (%d, %d) \n", XL, YL, XH, YH);
    for (int i = XL; i<= XH; i++) {
        for (int j = YL; j<= YH; j++){
            if (A[i][j] != 0) {
                printf("s[%d][%d] = %d \n", i, j, A[i][j]);
            }
        }
    }
    cout << "\n";
}


int main() {
    int A[101][101] = {0};
    populateArray(A, 2000);

    searchValidEntries(80, 1, 100, 10, A);
    searchValidEntries(10, 20, 40, 79, A);
    searchValidEntries(1, 90, 100, 100, A);
    searchValidEntries(40, 30, 70, 60, A);
    searchValidEntries(50, 50, 70, 70, A);
}

