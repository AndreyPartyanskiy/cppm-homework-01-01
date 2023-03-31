#include <iostream>
#include <fstream>

int main()
{
    std::fstream file_in,file_out;
    int size_1,size_2;
    int* arrey_1;
    int* arrey_2;

    file_in.open("in.txt",std::ios::in);
    if (file_in.is_open()) {
        file_in >> size_1;
        arrey_1 = new int[size_1];
        for (int a = 0; a < size_1; a++) file_in >> arrey_1[a];
        file_in >> size_2;
        arrey_2 = new int[size_2];
        for (int a = 0; a < size_2; a++) file_in >> arrey_2[a];
        file_in.close();
    }
    else {
        std::cout << "failed to open file" << std::endl;
        return(0);
    }

    file_out.open("out.txt",std::ios::out);
    file_out << size_2 << "\n";
    file_out << arrey_2[size_2-1]<< " ";
    for (int i = 0; i < size_2 - 1; i++) {
        file_out << arrey_2[i] << " ";
    }
    
    file_out << "\n" << size_1 << "\n";
    
    for (int i = 1; i < size_1; i++) {
        file_out << arrey_1[i] << " ";
    }
    file_out << arrey_1[0] << " ";

    file_out.close();

    delete [] arrey_1;
    delete [] arrey_2;
}