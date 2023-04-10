//chama a biblioteca
#include <iostream>
using namespace std;

//chama a variavel
int main()
{
    //uso da memoria ao ponteiro
    int Var = 3;
    int* pVar;
    pVar = &Var;
    
    //mostra ao usuario 
    cout<<Var<<endl;
    cout<<*pVar<<endl;
    cout<<pVar<<endl;
}
