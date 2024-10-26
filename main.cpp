#include <iostream>
#include <fstream>
using namespace std;

// struct Header(){
//     char idlength;
//     char colorMapType;
//     char dataTypeCode;
//     short colorMapOrigin;
//     short colorMapLength;
//     char colorMapDepth;
//     short xOrigin;
//     short yOrigin;
//     short width;
//     short height;
//     char bitsPerPixel;
//     char imageDescriptor;
// };

int main() {
    ifstream file("input/car.tga", ios::binary);
    if(file.is_open()) {
        cout << "YASS" << endl;
    }
    return 0;
}

