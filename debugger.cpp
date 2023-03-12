#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string> msg{"Hi", "Hello", "Hola", "Amigo", "costa costa"};

    for(auto &val : msg){
        cout << val << " ";
    }

    cout << "\n";

    return 0;
}