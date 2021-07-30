#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        Complex operator + (Complex obj){
            Complex temp;
            temp.real = this->real + obj.real;
            temp.imag = this->imag + obj.imag;
            return temp;
        }
        void print(){
            cout << this->real << "+" << this->imag << "i" << endl;
        }

        friend ostream & operator << (ostream &out, Complex obj);
};

ostream & operator << (ostream &out, Complex obj){
    out << obj.real << "+" << obj.imag << "i" << endl;
    return out;
}

int main(){

    Complex a(5, 1);
    Complex b(3, 2);
    Complex c;
    c = a+b;
    //printing using user defined print() method.
    c.print();
    //printing with insertion operator(<<) overloading.
    cout << c << endl;

    return 0;
}
