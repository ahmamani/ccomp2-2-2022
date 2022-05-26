#ifndef __INTEGERARRAY_H__
#define __INTEGERARRAY_H__

#include <iostream>

class IntegerArray {

    private:
        int *data;
        int size;

    public:       
    
        IntegerArray() {
            data = new int[0];
            this->size = 0;
        }
        IntegerArray(const int arr[], const int size) {
            data = new int[size];
            this->size = size;
            for(int i = 0; i < size; i++) {
                data[i] = arr[i];
            }
        }
        IntegerArray( IntegerArray &o ) {
            data = new int[o.size];
            size = o.size;
            for(int i = 0; i < size; i++) {
                data[i] = o.data[i];
            }
        }

        void push_bach(int elem) {
            int *tmp = new int[size+1];
            tmp[size] = elem;
            for(int i = 0; i < size; i++) {
                tmp[i] = data[i];
            }
            size += 1;
            delete[] data;
            data = tmp;
        }

        void insert(const int pos, const int elem) {            
            int *tmp = new int[size+1];
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
            int *tmp = new int[size-1];
            for(int i=0; i<pos; i++)
                tmp[i]= data[i];
            for (int i=pos+1; i<size; i++)
                tmp[i-1]= data[i];
            size-=1;
            delete[] data;
            data = tmp;
        }

        void print() const {
            std::cout << "[ ";
            for(int i = 0; i < size; i++) {
                std::cout << data[i] << " - ";
            }
            std::cout << " ]" << std::endl;
        }

        ~IntegerArray() {
            delete[] data;
        }
};

#endif