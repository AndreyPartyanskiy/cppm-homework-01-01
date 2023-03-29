#include <iostream>
#include <fstream>

int main()
{
    std::fstream file_in,file_out;
    int size_1,size_2;
    int* arrey_1;
    int* arrey_2;

    file_in.open("in.txt",std::ios::in);
        file_in >> size_1;
        arrey_1 = new int [size_1];
        for (int a = 0;a<size_1;a++) file_in >> arrey_1[a];
        file_in >> size_2;
        arrey_2 = new int[size_2];
        for (int a = 0; a < size_2; a++) file_in >> arrey_2[a]; 
    file_in.close();

    file_out.open("out.txt",std::ios::out);
        file_out << size_2 << "\n" << arrey_2[5] << " " << arrey_2[0] << " " << arrey_2[1] << " " << arrey_2[2] << " " << arrey_2[3] << " " << arrey_2[4] << "\n";
        file_out << size_1 << "\n" << arrey_1[1] << " " << arrey_1[2] << " " << arrey_1[3] << " " << arrey_1[4] << " " << arrey_1[0] <<"\n";
    file_out.close();

    delete [] arrey_1;
    delete [] arrey_2;
}

