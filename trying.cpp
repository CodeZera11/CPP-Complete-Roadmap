#include<iostream>
using namespace std;

int main(){

    int rows = 3;
    int cols = 3;

    string names[rows][cols];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> names[i][j];
        }
    }


    cout << names[1];

}