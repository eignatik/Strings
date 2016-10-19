#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int i;
    string textFromFile;
    ifstream inputFile ("/home/eignatik/Clion/Strings/text.txt");
    if (inputFile.is_open()){
        while (inputFile.good()){
            getline (inputFile,textFromFile);
            cout << textFromFile << endl;
        }
        inputFile.close();
    }

    else {
        cout << "\nFile not found\n";
    }

    for (i=0; i<textFromFile.length()-1; i++){
        if(textFromFile[i] == 'a'){
            cout << "HER" << endl;
        }
    }

    return 0;
}

void formatString(string* str, int index){
    

}

char replaceSymbol(){

}