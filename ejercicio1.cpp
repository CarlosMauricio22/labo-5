 #include <iostream> 
 using namespace std;
int main(void)
{
int mayor, menor, residuo;
cout << "MCD DE DOS NUMEROSN\n\n";
cout << "Digite el numero mayor: ";
cin >> mayor;
cout << "Digite el numero menor: ";
cin >> menor;
do
{
residuo = mayor % menor;
if(residuo != 0){
mayor = menor;
menor = residuo;
}
}
while(residuo != 0);
cout << "El MCD es: " << menor;
cout << endl;
return 0;
 }