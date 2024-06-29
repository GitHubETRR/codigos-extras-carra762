
#include <iostream>
using namespace std;

//clase
class num{
    private :
        int x;
        int y;
        int z;
        public :
        
        //setters
        void set_x(int x_otro) {
            do {
                if(x_otro < 1000 && x_otro > -1000) x = x_otro;
                else cout << "ingrese un valor entre 1000 y -1000 :";
            } while (x_otro > 1000 && x_otro < -1000);
        }

        void set_y(int y_otro) {
            do {
            if(y_otro < 1000 && y_otro > -1000) y = y_otro;
            else cout << "ingrese un valor entre 1000 y -1000 :";
            } while (y_otro > 1000 && y_otro < -1000);
        }
        //método
        void sumar(int x, int y) { 
            z = x + y;
        }

        //getters
        int get_z() { 
            return (z);
        }

        int get_x() {
            return (x);
        }

        int get_y() {
            return (y);
        }

}num1, num2; //objetos

int main (void) {
    class num num1;
    cout << "Este programa compara dos sumas y devuelve el mas grande." << endl;
    int x1, y1, x2, y2;
    cout << "(1) ingrese el primer numero: ";
    cin >> x1;
    num1.set_x(x1);
    cout << "(1) ingrese el segundo numero: ";
    cin >> y1;
    num1.set_y(y1);
    num1.sumar(x1, y1);
    cout << "suma 1 = " << num1.get_z() << endl;
    
    cout << "(2) ingrese el primer numero: ";
    cin >> x2;
    num2.set_x(x2);
    cout << "(2) ingrese el segundo numero: ";
    cin >> y2;
    num2.set_y(y2);
    num2.sumar(x2, y2);
    cout << "suma 2 = " << num2.get_z() << endl;

    if(num1.get_z() > num2.get_z()){
        cout << num1.get_z() << " >  " << num2.get_z() << endl;
        cout << "la suma 1 es mayor.";
    } else if(num1.get_z() < num2.get_z()){
        cout << num1.get_z() << " < " << num2.get_z() << endl;
        cout << "la suma 2 es mayor.";       
    } else if(num1.get_z() == num2.get_z()){
        cout << num1.get_z() << " = " << num2.get_z() << endl;
        cout << "las sumas son iguales"; 
    }

    return 0;
}