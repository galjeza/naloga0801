#include <iostream>
#include "SparseMatrix2D.h"
#include "Person.h"
int main() {
    SparseMatrix2D<Person> personMatrix(5,5,Person("",0,0,0));
    personMatrix.set(0,0,Person("Gal",19,183,73));
    personMatrix.set(1,1,Person("Nika",20,170,64));
    personMatrix.set(2,2,Person("Anton",44,177,89));
    std::cout<<personMatrix.at(1,1).toString()<<std::endl<<std::endl;


    SparseMatrix2D<int> bigIntMatrix(10, 10, 0);
    bigIntMatrix.set(5, 5, 8);
    bigIntMatrix.set(2, 3, 7);
    bigIntMatrix.set(2, 2, 4);

    for (int i = 0; i < bigIntMatrix.getSizeX(); i++) {
        for (int j = 0; j < bigIntMatrix.getSizeY(); j++) {
            std::cout << bigIntMatrix.at(i,j) << (j != bigIntMatrix.getSizeY() - 1 ? " ; " : "");
        }
        std::cout << std::endl;
    }

    return 0;
}
