#include <iostream>
using namespace std;

// передача аргументов по указателю
// как вернуть 2 или более значения из функции

void Foo(int a){
    a++;
}

void Foo2(int *pb){
    (*pb)++;
}

int main() {

    // изменений не произойдет
    int a = 0;
    cout << "a = " << a << endl;

    Foo(a);

    cout << "a = " << a << endl;
    cout << "-------------------"<< endl;

    // изменения будут
    int b = 0;
    cout << "b = " << b << endl;

    Foo2(&b);

    cout << "b = " << b << endl;
    cout << "-------------------"<< endl;


    return 0;
}