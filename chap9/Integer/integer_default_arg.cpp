#include <iostream>

using namespace std;

class Integer {
    public:
        int val;
        Integer(int v = 0) {
            val = v;            
        }
};

int main() {
    Integer i(3);
    Integer j;
    
    cout << i.val << endl;
    cout << j.val << endl;

    //Integer a[] = {Integer(2), Integer(3)};
    //Integer b[2];    

}
