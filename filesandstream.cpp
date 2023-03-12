#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

// int main(){

//     ifstream fin("read_file.txt");        

//     if(fin.fail()){
//         cout << "Can't open the file\n";
//         return 0;
//     }

//     int x,y;
//     fin >> x >> y;

//     cout << x+y << " \n";

//     fin.close();


//     ofstream fout("my_output.txt");

//     if(fout.fail()){
//         cout << "Can't open the output file\n";
//         return 0;
//     }

//     fout << x + y;
//     fout.close();

//     return 0;
// }



// Reading and Writing(Appending)

// int main(){

//     bool append = true;

//     auto status = ios :: in | ios :: out | ios :: app;

//     if(!append){
//          status = ios :: in | ios :: out | ios :: trunc; 
//     } 

//     string path = "names.txt";
//     fstream file_handler(path.c_str(), status);

//     if(file_handler.fail()){
//         cout << "Can't open the file\n";
//         return 0;
//     }

//     string first, second;
//     file_handler >> first >> second;

//     cout << first << " " <<  second << "\n";

//     file_handler.clear();
    
//     file_handler << "\nibrahim\n";

//     file_handler.close();

//     return 0;
// }



// Reading whole file content

// int main(){

//     string path = "names.txt";
//     fstream file_handler(path.c_str());

//     if(file_handler.fail()){
//         cout << "Can't open the file\n";
//         return 0;
//     }

//     string line;

//     while(getline(file_handler, line)){
//         cout << line << "\n";
//     }

//     return 0;
// }




// istringstream
// int main(){

//     string str = "Mostafa 23 years";

//     istringstream iss(str);

//     string name,name2;
//     int age;

//     iss >> name >> age >> name2;

//     cout << age << "\n" << name2 << "\n" << name << "\n";

//     return 0;
// }


// ostringstream
int main(){

    ostringstream oss;

    oss << "Mostafa ";
    oss << 23;
    oss << " years old\n";

    cout << oss.str();

    return 0;
}