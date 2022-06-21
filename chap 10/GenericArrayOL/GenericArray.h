#ifndef __GenericArray_H__
#define __GenericArray_H__

#include <iostream>

template <typename T>
class GenericArray {

    private:
        T *data;
        int size;

    public:       
        
        template <typename U>
        friend std::ostream& operator<< (std::ostream& o, const GenericArray<U> a);


        GenericArray() {
            data = new T[0];
            this->size = 0;
        }
        GenericArray(const T arr[], const int size) {
            data = new T[size];
            this->size = size;
            for(int i = 0; i < size; i++) {
                data[i] = arr[i];
            }
        }
        GenericArray( GenericArray &o ) {
            data = new T[o.size];
            size = o.size;
            for(int i = 0; i < size; i++) {
                data[i] = o.data[i];
            }
        }

        void push_back(T elem) {
            T *tmp = new T[size+1];
            tmp[size] = elem;
            for(int i = 0; i < size; i++) {
                tmp[i] = data[i];
            }
            size += 1;
            delete[] data;
            data = tmp;
        }

        void insert(const int pos, const T elem) {            
            T *tmp = new T[size+1];
            tmp[pos]= elem;
            for(int i=0; i<pos; i++)
                tmp[i]= data[i];
            for (int i=pos+1; i<=size; i++)
                tmp[i]= data[i-1];
            size+=1;
            delete[] data;
            data = tmp;        
        }

        void remove(int pos){
            T *tmp = new T[size-1];
            for(int i=0; i<pos; i++)
                tmp[i]= data[i];
            for (int i=pos+1; i<size; i++)
                tmp[i-1]= data[i];
            size-=1;
            delete[] data;
            data = tmp;
        }

        int getSize() const {
            return size;
        }

        void print() const {
            std::cout << "[ ";
            for(int i = 0; i < size; i++) {
                std::cout << data[i] << " - ";
            }
            std::cout << " ]" << std::endl;
        }

        ~GenericArray() {
            delete[] data;
        }
};

template <typename T>
std::ostream& operator<<(std::ostream& o, const GenericArray<T> a) {
    o << "[ ";
    for(int i = 0; i < a.getSize(); i++) {
        o << a.data[i] << " - ";
    }
    o << " ]";

    return o;
}

#endif