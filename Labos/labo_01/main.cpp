# include <iostream >
//EJERCICIO 2

/*int funcion(int x, int y){
    funcion = x + y;
    return funcion;
}
int main () {
    std :: cout << "El resultado es: " << funcion(2,10) << std :: endl ;
    return 0;
*/

//EJERCICIO 3
/*int ejercicio(int x, int y){
    int funcion = 0;
    if (x>y) {
        funcion = x + y;
    } else {
        funcion = x * y;
    }
    return funcion;
}
int main () {
    std :: cout << "El resultado es: " << ejercicio(2,10) << std :: endl ;
    return 0;
}
*/

//EJERCICIO 4
/*bool esPrimo(int numero);

bool esPrimo(int numero) {
    // Casos especiales
    if (numero == 0 || numero == 1 || numero == 4) return false;
    for (int x = 2; x < numero / 2; x++) {
        if (numero % x == 0) return false;
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
}

int main() {
    int numero;
    std::cout << "Escribi un numero:\n";
    std::cin >> numero;
    if (esPrimo(numero)) {
        std::cout << "Es primo";
    } else {
        std::cout << "NO es primo";
    }
}
*/

//RECURSION E ITERACION
//EJERCICIO 5
/*using namespace std;
int fibonacci(int x){
    if(x == 1 || x ==2){
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}
int main(){
    int n;
    cout<<"Hasta que numero calculamos la serie fibonacci?: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
*/

//EJERCICIO 6
int sumaDeImparesMenoresQueN(int n){
    int r = 0;
    for (int i = 1; i < n ; ++i) {
        if(i % 2 == 1){
            r += i;
        }
    }
    return r;
}


int main() {
    int n;
    std::cout << "Ingrese número:" << std::endl;
    std::cin >> n;
    std::cout << "Suma de impares menores que " << n << ": " << sumaDeImparesMenoresQueN(n) << std::endl;

}