#include <iostream>
#include<cstdlib>

using namespace std;
int factorial(int *numero){
int *resultado=numero;
for(int x=*numero;x>1;x--){
*resultado*=(x-1);
// resultado=resultado*(x-1)
}
  cout<<"El factorial es: "<<*resultado <<endl;
}

int main()
{
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                              Factorial(Punteros)                              |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    int numero=0, *ptr;
    cout<<"ingrese un numero: ";
    cin>>numero;
    ptr=&numero;
    cout<<endl;
    factorial(ptr);
    cout<<endl;
    system("pause");
    return EXIT_SUCCESS;
}


