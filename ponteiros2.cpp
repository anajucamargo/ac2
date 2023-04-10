// Chama a biblioteca
#include <iostream>
using namespace std;

//chama  a variabvel
int main()
{
    //fala o ponteiro
    int *ptr = new int ;
    *ptr = 7;
    
    //mostra ao usuario 
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    
    //memoria do ponteiro
    delete ptr;
    ptr = nullptr;
    
    //mostra o pntoeiro ao usuario
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
}