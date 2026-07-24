#include <iostream>
using namespace std;

// передача аргументов по указателю
// как вернуть 2 или более значения из функции

// void Foo(int a){
//     a++;
// }

// void Foo2(int *pb){
//     (*pb)++;
// }

void Foo3(int *pa, int *pb, int *pc){
    (*pa)= 555;
    (*pb)++;
    (*pc) = -20;
}

int main() {

    // изменений не произойдет
    // int a = 0;
    // cout << "a = " << a << endl;

    // Foo(a);

    // cout << "a = " << a << endl;
    // cout << "-------------------"<< endl;

    // изменения будут
    // int b = 0;
    // cout << "b = " << b << endl;

    // Foo2(&b);

    // cout << "b = " << b << endl;
    // cout << "-------------------"<< endl;

    int a = 0;
    int b = 0;
    int c = 1;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "foo()" << endl;
    Foo3(&a, &b, &c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;



    return 0;
}