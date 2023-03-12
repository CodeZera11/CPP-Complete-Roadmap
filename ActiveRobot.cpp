#include<iostream>
using namespace std;

// Active Robot


int main(){

    int N, M, K;

    cin >> N >> M;

    cin >> K;

    int dir, steps;

    // directions {u,r,d,l}
    int di[4] = {-1, 0, 1,  0};
    int dj[4] = {0,  1, 0, -1}; 

    int i = 0, j = 0;

    for(int nums = 0; nums < K; nums++){
        cin >> dir >> steps;

        int ni = i + di[dir-1];
        int nj = j + dj[dir-1];

        int new_i = i;
        int new_j = j;

        if(dir - 1 == 0 || dir - 1 == 2){
                i += (steps - 1);
                new_i = i + ni;
        }

        if(dir - 1 == 1 || dir - 1 == 3){
                j += (steps - 1);
                new_j = j + nj;
        }
       

        if(new_i >= N || new_j >= M || new_i < 0 || new_j < 0){
                new_i = N-1;
                new_j = M-1;
        }

        i = new_i;
        j = new_j;

        cout << "New Position of Robot is :: " << i << " " << j << "\n";

    }

    return 0;

}