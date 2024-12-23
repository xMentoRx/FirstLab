#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    //1
    cout << "int=" << sizeof(int) << " байта" << endl;
    cout << "short int=" << sizeof(short int) << " байта" << endl;
    cout << "long int =" << sizeof(long int) << " байта" << endl;
    cout << "float=" << sizeof(float) << " байта" << endl;
    cout << "double=" << sizeof(double) << " байт" << endl;
    cout << "long double=" << sizeof(long double) << " байт" << endl;
    cout << "char=" << sizeof(char) << " байт" << endl;
    cout << "bool=" << sizeof(bool) << " байт" << endl;

    //2
    int a;
    cin >> a;
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    int bitnumber;
    cin >> bitnumber;
    a ^= (1 << (sizeof(int) * 8 - 1 - bitnumber));
    for (int i = 0; i <= sizeof(int) * 8 - 1; i++) {
        putchar(mask & a ? '1' : '0');
        mask >>= 1;
        if ((i + 1) % 8 == 0 || i == 0)
            cout << ' ';
    }
    cout << endl;

    //3
    union {
        float b;
        int t;
    };
    cin >> b;
    mask = 1 << (sizeof(float) * 8 - 1);
    int bitnumber1;
    cin >> bitnumber1;
    t ^= (1 << (sizeof(float) * 8 - 1 - bitnumber1));
    for (int i = 0; i <= sizeof(int) * 8 - 1; i++) {
        putchar(mask & t ? '1' : '0');
        mask >>= 1;
        if ((i + 1) % 8 == 0 || i == 0)
            cout << ' ';
    }
    cout << endl;
    //4
    union {
        double d;
        int m[2];
    };
    cin >> d;

    mask = 1 << sizeof(int) * 8 - 1;
    int bitnumber2;
    cin >> bitnumber2;
    m[1] ^= (1 << (sizeof(float) * 8 - 1 - bitnumber2));
    for (int j = 0; j <= sizeof(int) * 8 - 1; j++)
    {
        putchar(m[1] & mask ? '1' : '0');
        mask >>= 1;
        if (j == 0 || j == 11)
            cout << " ";
    }
    mask = 1 << sizeof(int) * 8 - 1;
    for (int j = 0; j <= sizeof(int) * 8 - 1; j++)
    {
        putchar(m[0] & mask ? '1' : '0');
        mask >>= 1;
    }

    cout << endl;


}