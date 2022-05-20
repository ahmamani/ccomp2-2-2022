#include <iostream>

using namespace std;

class Integer {
    public:
        int val;
        Integer(int val) {
            this->val = val;            
        }
        void setVal(int val) {
            this->val = val;
        }
};

int main() {
    Integer i(3);
    Integer *ptr;
    ptr = &i;
    
    cout << i.val << endl;
    cout << (*ptr).val << endl;
    cout << ptr->val << endl;

}
