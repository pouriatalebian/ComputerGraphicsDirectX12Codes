#include <iostream>
using namespace std;

void printMat(int mat[4][4]) {
    // print matris
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void sumMat(int matA[4][4], int matB[4][4]) {
    int sumMat[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} , {0,0,0,0} };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sumMat[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printMat(sumMat);
}

void subMat(int matA[4][4], int matB[4][4]) {
    int subMat[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} , {0,0,0,0} };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            subMat[i][j] = matA[i][j] - matB[i][j];
        }
    }
    printMat(subMat);
}

void mulMat(int matA[4][4], int matB[4][4]) {
    int mulMat[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} , {0,0,0,0} };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mulMat[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                mulMat[i][j] += (matA[i][k] * matB[k][j]);
            }
        }
    }
    printMat(mulMat);
}

void taranahade(int matA[4][4]) {
    int tMat[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0} , {0,0,0,0} };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            tMat[i][j] = matA[j][i];
        }
    }
    printMat(tMat);

}

int determinan(int matA[4][4]) {
    int det = 0;
    for (int i = 0; i < 4; i++) {
        det += (matA[0][i] * (matA[1][(i + 1) % 3] * matA[2][(i + 2) % 3] - matA[1][(i + 2) % 3] * matA[2][(i + 1) % 3]));
    }
    return det;
}

int main() {
    int matrixA[4][4] = { {1, 2, 3 , 4}, {5, 6 , 7 , 8}, {8 , 7 , 6 , 5} , {4 , 3 , 2 ,1} };
    int matrixB[4][4] = { {12, 32, 65 , 3}, {1, 6 , 2 , 4}, {5 , 6 , 4 , 8} , {3 , 92 , 34 ,5} };
    cout << "*****************" <<"\n";
    //print two matris
    cout << "matris A : " << endl;
    printMat(matrixA);
    cout << "*****************" <<"\n";

    cout << "matris B: " << endl;
    printMat(matrixB);
    cout << "*****************" <<"\n";
    // sum of matris
    cout << "sum : " << endl;
    sumMat(matrixA, matrixB);
    cout << "*****************" <<"\n";

    // minus matris
    cout << "minus : " << endl;
    subMat(matrixA, matrixB);
    cout << "*****************" <<"\n";

   

    // determinan matris
    cout << "determinan :  " << endl;
    cout << determinan(matrixA) << endl;
    cout << "*****************" <<"\n";

    // tranahade matris
    cout << " taranahadeh :  " << endl;
    taranahade(matrixA);
    cout << "*****************" <<"\n";

    // multiplation of matris
    cout << "multiplication : " << endl;
    mulMat(matrixA, matrixB);
    cout << "*****************" <<"\n";

    return 0;
}

