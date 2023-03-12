#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<sstream>
using namespace std;

// int main(){

//     freopen("read_file.txt", "rt", stdin);

//     int x, y, z, w;
//     cin >> x >> y >> z >> w;

//     cout << x+y+z+w;

//     return 0;
// }

// int main(){

//     // First write #include<fstream>

//     ifstream fin("read_file.txt");

//     if(fin.fail()){
//         cout << "Can't open the file\n";
//         return 0;
//     }

//     int x, y;
//     fin >> x >> y;

//     fin.close();


//     ofstream fout("output_file.txt");

//     if(fout.fail()){
//         cout << "Can't open the file\n";
//         return 0;
//     }

//     fout << x + y;

//     fout.close();
    
//     return 0;
// }




// Files and stream - 2 (Reading and Writing appending)

// First write #include<fstream>

int main(){

    // Append means add new line in the end of the existing content
    // Trunc means remove everything and write new thing

    bool append = true;

    auto status = ios :: in | ios :: out | ios :: app;

    if(!append){
        status  = ios :: in | ios :: out | ios :: trunc;
    }

    string path = "names.txt";
    fstream file_handler(path.c_str(), status);

    if(file_handler.fail()){
        cout << "Can't open the file\n";
        return 0;
    }

    string first, second;
    file_handler >> first >> second;

    cout << first << " " << second << "\n";

    file_handler.clear(); // If any internal errors, before writing

    file_handler << "\nibrahim";

    string third;

    file_handler >> first >> second >> third;

    cout << first << second << third;

    file_handler.close();

    return 0;
}



// String stream

// First write #include<sstream>

// int main(){

//     string str = "Mostafa 23 years.\n";

//     istringstream iss(str);

//     string name;
//     int age;

//     iss >> name >> age;

//     cout << age << "\n";

//     return 0;
// }