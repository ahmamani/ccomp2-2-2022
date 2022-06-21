#include <iostream>

using namespace std;

class Soles {
        int soles;
        int centimos;
    public:
        Soles(int s = 0, int c = 0) : soles(s), centimos(c) {}      

        /*Soles operator+ (const Soles o) {
            Soles tmp;
            tmp.centimos = centimos + o.centimos;
            tmp.soles = soles + o.soles;

            if(tmp.centimos >= 100) {
                tmp.soles += 1;
                tmp.centimos -= 100;
            }
            
            return tmp;
        }*/
        friend Soles operator+ (const Soles m, const Soles o);
        friend ostream& operator<< (ostream &output, const Soles &o);
};

Soles operator+ (const Soles m, const Soles o) {
    Soles tmp;
    tmp.centimos = m.centimos + o.centimos;
    tmp.soles = m.soles + o.soles;

    if(tmp.centimos >= 100) {
        tmp.soles += 1;
        tmp.centimos -= 100;
    }
    
    return tmp;
}

ostream& operator<< (ostream &output, const Soles &o) {
    output << "S/." << o.soles << "." << o.centimos;
    return output;
}

int main() {
    Soles s1(4, 50);
    Soles s2(5, 90);

    Soles s3 = s1 + s2;

    cout << s3 << endl;

    return 0;
}