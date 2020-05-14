#include "Array.h"
Array::Array() : n(0), values(nullptr){}

Array::Array(int n) : n(n){
    if(n > 0){
        this->values = new int[this->size()];
    }
}
int Array::size(){
    return this->n;
}

void Array::print() {
    for(int i = 0; i < this->size(); i++){
        std::cout << this->values[i] << " ";
    }
    std::cout << std::endl;
}

int& Array::operator [](int index){
    if(index < this->size()){
        return this->values[index];
    }
}

bool Array::operator >(Array& a){
    return this->size() > a.size();
}
bool Array::operator <(Array& a){
    return this->size() < a.size();
}
bool Array::operator !=(Array& a){
    return this->size() != a.size();
}
bool Array::operator ==(Array& a) {
    return this->size() == a.size();
}
Array& Array::operator+(Array& a){
    auto all = new Array(a.size() + this->size());
    for(int i = 0; i < this->size(); i++){
        (*all)[i] = (*this)[i];
    }
    for(int i = 0; i < a.size(); i++){
        (*all)[this->size() + i] = a[i];
    }
    return *all;
}