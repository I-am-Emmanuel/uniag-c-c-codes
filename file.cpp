#include <fstream>
#include <iostream>
#include <string> // Include <string> for string type
using namespace std;

// int main(){
//     string line;
//     ifstream ini_file("SAMPLE.txt");
//     ofstream out_file("copy.txt");

//     if (ini_file && out_file){
//         while (getline(ini_file, line)) {
//             out_file <<line<<"\n";
//         }
//         cout <<"Copy finished";

//     }
//     else{
//         printf("Something went wrong, Can't read the file!");
//     }
//     ini_file.close();
//     out_file.close();
//     return 0;
// }


// int main(){
//     ofstream file;

//     file.open("SAMPLE.txt");

//     if (!file.is_open()){
//         cout<<"Encountered an error when trying to create the file"<<endl;
//         return 1;
//     }
//         cout<<"File created successfully!";
    
//     file.close();
//     return 0;

// }

// int main(){
//     ofstream file;

//     file.open("Sample2.txt");
//     if (!file.is_open()){
//         cout<<"Could not open the file!";
//     }
//     cout<<"File open successful"<<endl;

//     file.close();
//     return 0;
// };


int main(){
    string line;
    ifstream ini_file("copy.txt");
    ofstream out_file("new_copy.txt");

    if (ini_file && out_file){
        while(getline(ini_file, line)){
        out_file <<line<<"\n";
    }
    cout<< "Copied Successfully";
}
    
    else{
        printf("Encountered error trying to open the file");
    }

    ini_file.close();
    out_file.close();
    return 0;
};