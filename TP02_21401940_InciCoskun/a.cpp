#include <iostream>
#include <vector>
using namespace std;
using matrice = vector<vector<double>>;

matrice multiple(matrice A, matrice B);
matrice additionner(matrice A, matrice B);
matrice soustraire(matrice A, matrice B);
void myPrint(matrice A);


int main(){

    matrice A{ {1, 2, 3}, {4, 5, 6}, {7, 8 ,9} };
    matrice B{ {2, 4, 6}, {8, 10, 2}, {4, 6 ,8} };

    myPrint(multiple(A,B));
    cout<< endl;

    myPrint(additionner(A,B));
    cout<< endl;

    myPrint(soustraire(A,B));
    cout<< endl;

}



matrice multiple(matrice A, matrice B)
{
    matrice C{ {0, 0, 0}, {0, 0, 0}, {0, 0 ,0} };
    for (int i = 0; i < A.size(); i++){
        for (int j = 0; j < B.size(); j++){
            for (int k = 0; k < A.size();k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    return C;
}


matrice additionner(matrice A, matrice B)
{
    matrice C{ {0, 0, 0}, {0, 0, 0}, {0, 0 ,0} };
    for (int i = 0; i < A.size(); i++){
        for (int k = 0; k < B.size(); k++){
            C[i][k] += A[i][k] + B[i][k];
        }
    }
    return C;
}


matrice soustraire(matrice A, matrice B)
{
    matrice C{ {0, 0, 0}, {0, 0, 0}, {0, 0 ,0} };
    for (int i = 0; i < A.size(); i++){
        for (int k = 0; k < B.size(); k++){
            C[i][k] += A[i][k] - B[i][k];
        }
    }
    return C;
}


void myPrint(matrice A){
    for (int i = 0; i < A.size(); i++){
        for (int k = 0; k < A.size(); k++){
            cout << A[i][k] << " ";
        }
        cout << endl;
    }   
}



