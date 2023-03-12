#include<iostream>
using namespace std;

// int main(){
//     int val[3][4] = {
//                     {1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12}
//     };

//     cout << val[1][3];
// }

// int main(){
//     int grades[3][5] {0};

//     for(int rows = 0; rows < 3; rows++){
//         for(int col = 0; col < 5; col++){
//             cin >> grades[rows][col];
//         }
//     }

//     for(int rows = 0; rows < 3; rows++){
//         cout << "Row " << rows << ": ";
//         for(int col = 0; col < 5; col++){
//             cout << grades[rows][col] << " ";
//         }
//         cout << "\n";
//     }
// }



// int main(){
//     //{d, r, u, l}
//     int di[4] = {1, 0, -1,  0};
//     int dj[4] = {0, 1,  0, -1};

//     int i = 4, j = 7;

//     for(int d = 0; d < 4; d++){
//         int ni = i + di[d];
//         int nj = j + dj[d];

//         cout << ni << " " << nj << "\n";
//     }
// }


// int main(){

//     //{d, r, l, u, dr, dl, ur, ul}

//     int di[8] = {1, 0,  0, -1, 1,  1, -1, -1};
//     int dj[8] = {0, 1, -1,  0, 1, -1,  1, -1};

//     int i = 4, j = 7;

//     for(int d = 0; d < 8; d++){
//         int ni = i + di[d];
//         int nj = j + dj[d];

//         cout << ni << " " << nj << "\n";
//     }

// }




// Max Value

// int main(){
//     int rows, cols;

//     cin >> rows >> cols;

//     int arr[100][100];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < rows; j++){
//             cin >> arr[i][j];
//         }
//     }

//     int max = 0;
//     int idx_i = 0;
//     int idx_j = 0;
 
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             if(arr[i][j] >= max){
//                 max = arr[i][j];
//                 idx_i = i;
//                 idx_j = j;
//             }
//         }
//     }

//     cout << "Max value at position " << idx_i << " " << idx_j << " with value = " << max;

// }



// Special Print

// int main(){
//     int rows, cols;

//     cin >> rows >> cols;

//     int arr[100][100];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin >> arr[i][j];
//         }
//     }

//     int i = 0, j = 0;

//     int left_diagonal = 0;

//     while(i < rows && j < cols){
//         left_diagonal += arr[i++][j++];
//     }

//     int right_diagonal = 0;

//     i = 0, j = cols-1;

//     while(i < rows && cols >= 0){
//         right_diagonal += arr[i++][j--];
//     }

   
//     cout << left_diagonal << " " << right_diagonal;

//     cout << "\n";

//     int lr_sum = 0;

//     i = rows - 1, j = 0;

//     while(j < cols){
//         lr_sum += arr[i][j];
//         j++;
//     }

//     int lc_sum = 0;

//     i = 0; j = cols-1;

//     while(i < rows){
//         lc_sum += arr[i++][j];
//     }

//     cout << lr_sum << " " << lc_sum;

// }



// Swap 2 Columns

// int main(){
//     int rows, cols;

//     cin >> rows >> cols;

//     int arr[100][100];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin >> arr[i][j];
//         }
//     }

//     int c1, c2;

//     cin >> c1 >> c2;

//     for(int i = 0; i < rows; i++){
//         int temp = arr[i][c1];
//         arr[i][c1] = arr[i][c2];
//         arr[i][c2] = temp;
//     }

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }

// }


// Greedy Robot

// int main(){
//     int rows, cols;

//     cin >> rows >> cols;

//     int arr[100][100];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin >> arr[i][j];
//         }
//     }

//     int i = 0, j = 0, sum = 0;

//     while(i < rows && j < cols){
//         sum += arr[i][j];

//         int next_val, best_i = -1, best_j = -1;

//         // Is right position ok?
//         if(j+1 < cols){
//             next_val = arr[i][j+1];
//             best_i = i, best_j = j+1;
//         }

//         // Is bottom position ok?
//         if(i+1 < rows){
//             if(best_i == -1 || next_val < arr[i+1][j]){
//                 next_val = arr[i+1][j];
//                 best_i = i+1, best_j = j;
//             }
//         }

//         // Is diagonal position ok?
//         if(i+1 < rows && j+1 < cols){
//             if(best_i == -1 || next_val < arr[i+1][j+1]){
//                 next_val = arr[i+1][j+1];
//                 best_i = i+1, best_j = j+1;
//             }
//         }

//         if(best_i == -1){
//             break;
//         }

//         i = best_i, j = best_j;

//     }

//     cout << sum << "\n";

// }




// Smaller Row?

// int main(){
//     int rows, cols, q;

//     cin >> rows >> cols;

//     int arr[100][100];

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin >> arr[i][j];
//         }
//     }

//     cin >> q;

//     int r1, r2;

//     for(int i = 0; i < q; i++){
       
//         cin >> r1 >> r2;

//         bool is_smaller = true;

//         for(int j = 0; j < cols; j++){
//             if(arr[r1-1][j] > arr[r2-1][j]){
//                is_smaller = false;
//                break;
//             }
//         }

//         if(is_smaller){
//             cout << "YES";
//         }else{
//             cout << "NO";
//         }

//         cout << "\n";
//     }

// }




// Triangular Matrix

// int main(){
//     int n;

//     cin >> n;

//     int arr[100][100];
//     int lower = 0, upper = 0, value;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> value;

//              if(i >= j){
//                 lower += value;
//             }

//             if(i <= j){
//                 upper += value; 
//             }

           

//         }
//     }

//     cout << lower << "\n";
//     cout << upper << "\n";

// }


// Transpose of a Matrix

// int main(){

//     int N, M;

//     cin >> N >> M;

//     int arr[100][100];

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < M; j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i = 0; i < M; i++){
//         for(int j = 0; j < N; j++){
//             cout << arr[j][i] << " ";
//         }

//         cout << "\n";
//     }

// }





// Find Mountains

// int main(){
//     int N, M;

//     cin >> N >> M;

//     int arr[100][100];

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < M; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // Position arrays {r, l, b, u, ur, ul, br, bl}

//     int di[8] = {0,  0, 1, -1, -1, -1, 1,  1};
//     int dj[8] = {1, -1, 0,  0,  1, -1, 1, -1};

//     int max = 0, best_i, best_j;
    
//     for(int i = 0; i < N; i++){
        

//         for(int j = 0; j < M; j++){
        
//             bool valid = true;    

//             for(int d = 0; d < 8; d++){
//                 int ni = i + di[d];
//                 int nj = j + dj[d];
                
//                     if(ni < 0 || ni > N || nj < 0 || nj > M){
//                         continue;
//                     }

//                     if(arr[i][j] <= arr[ni][nj]){
//                         valid = false;
//                         break;
//                     }

//                 }

//                 if(valid){
//                     cout << i << " " << j << "\n";
//                 }

//             }
            
//         }
//     }



// Active Robot


// int main(){

//     int N, M, K;

//     cin >> N >> M;

//     cin >> K;

//     int dir, steps;

//     // directions {u,r,d,l}
//     int di[4] = {-1, 0, 1,  0};
//     int dj[4] = {0,  1, 0, -1}; 

//     int i = 0, j = 0;

//     for(int nums = 0; nums < K; nums++){
//         cin >> dir >> steps;

//         int ni = i + di[dir-1];
//         int nj = j + dj[dir-1];

//         int new_i = i;
//         int new_j = j;

//         if(dir - 1 == 0 || dir - 1 == 2){
//                 i += (steps - 1);
//                 new_i = i + ni;
//         }

//         if(dir - 1 == 1 || dir - 1 == 3){
//                 j += (steps - 1);
//                 new_j = j + nj;
//         }
       

//         if(new_i >= N || new_j >= M || new_i < 0 || new_j < 0){
//                 new_i = N-1;
//                 new_j = M-1;
//         }

//         i = new_i;
//         j = new_j;

//         cout << "New Position of Robot is :: " << i << " " << j << "\n";

//     }

//     return 0;

// }

    

// Flatten 3D Array

// int main(){

//         // Printing all indexes  

//         // int idx = 0;

//         // for(int dep = 0; dep < 3; dep++){
//         //         for(int row = 0; row < 4; row++){
//         //                 for(int col = 0; col < 5; col++){
//         //                         cout << idx++ << " = "
//         //                              << dep << " " << row << " " << col << "\n"; 
//         //                 }
//         //         }
//         // }

//         int D, R, C, type;
//         int d, r, c, idx;


//         cin >> D >> R >> C >> type;

//         int Db = R * C;
//         int Rb = C;

//         if(type == 1){
//                 cin >> d >> r >> c;

//                 idx = d * Db + r * Rb + c;

//                 cout << idx << "\n";        
//         }else if(type == 2){
//                 cin >> idx;

//                 d = idx/Db;

//                 r = (idx % Db)/Rb;

//                 c = (idx % Db)%Rb;

//                 cout << d << " " << r << " " << c << "\n";
//         }


// }
