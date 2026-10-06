#include "Vector.h"

Vector::Vector() : length(0), value(0.0){}
Vector::Vector(int count, float value) : length(count), capacity(count*2) {
    tab = new float[count*2];
    for (int i = 0; i < count; ++i) {
        tab[i] = value;
    }
}

Vector::~Vector(){
    delete [] tab;
}

int Vector::size() const{
    return length;
};

void Vector::push_back(const float& f){
    if(length>=capacity){
        float* tmp = tab;
        tab = new float[capacity*2];
        for (int i = 0;i<length;i++){
            tab[i]= tmp[i];
        }
        delete [] tmp;
    }
    tab[length ]= f;
    length ++;


}