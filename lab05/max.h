#ifndef LAB5_MAX_H
#define LAB5_MAX_H

template<typename T>
T max(T* array, int n){
    T maxVal = array[0];
    for(int i = 0; i < n; i++){
        if(array[i] > maxVal){
            maxVal = array[i];
        }
    }
    return maxVal;
}

#endif //LAB5_MAX_H
