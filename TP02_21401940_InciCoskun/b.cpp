#include <iostream>
#include <vector>
using namespace std;
using matrice = vector<vector<double>>;


class Matrice{

    public:

    void myPrint(){
        for (int i = 0; i < matrice.size(); i++){
            for (int k = 0; k < matrice.size(); k++){
                cout << matrice[i][k] << " ";
            }
            cout << endl;
        }   
    }


    int size(){
        return matrice.size();
    }

    Matrice(int n){
        for(int i = 0; i < n; i++){
            vector<double> row;
            for(int j = 0; j < n; j++){
                row.push_back(0.0);
            } 
            matrice.push_back(row); 
        };
    };

    ~Matrice(){};


    Matrice operator +(Matrice &right){
        Matrice C = Matrice(this->size());
        for (int i = 0; i < right.matrice.size(); i++){
            for (int k = 0; k < this->matrice.size(); k++){
                C.matrice[i][k] += right.matrice[i][k] + this->matrice[i][k];
            }
        }
        return C;
    }



    Matrice operator -(Matrice &right){
        Matrice C = Matrice(this->size());
        for (int i = 0; i < right.matrice.size(); i++){
            for (int k = 0; k < this->matrice.size(); k++){
                C.matrice[i][k] += right.matrice[i][k] - this->matrice[i][k];
            }
        }
        return C;
    }


    Matrice operator *(Matrice &right){
        Matrice C = Matrice(matrice.size());
        for (int i = 0; i < right.matrice.size(); i++){
            for (int j = 0; j < right.matrice.size(); j++){
                for (int k = 0; k < this->matrice.size();k++)
                    C.matrice[i][j] += this->matrice[i][k] * right.matrice[k][j];
            }
        }
        return C;
    }

    vector<vector<double>> matrice;
};





int main()
{
    Matrice A = Matrice(3);
    Matrice B = Matrice(3);
    A.matrice = {{1,2,3},{4,5,6},{7,8,9}};
    B.matrice = {{9,8,7},{6,5,4},{3,2,1}};

    cout << "Matrice A: " << endl;
    A.myPrint();

    cout << "Matrice B: " << endl;
    B.myPrint();

    cout << "A + B: " << endl;
    Matrice C = A + B;
    C.myPrint();

    cout << "A - B: " << endl;
    C = A - B;
    C.myPrint();

    cout << "A * B: " << endl;
    C = A * B;
    C.myPrint();

    return 0;
}




