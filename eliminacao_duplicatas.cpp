#include <iostream>
#include <vector> //manipulacao de arranjo encurtador.com.br/krsZ0
#include <locale> //biblioteca manipulacao de diversas convenç?es culturais do utilizador (nessse codigo para acentuacao)
using namespace std;

int main(int argc, char *argv[]) { //argv - vetor de strings - - argc  um inteiro e possui o número de argumentos com os quais a funcao main()
    const int max = 5; // quant num lidos
    int num,i;
    vector<int> lista;  // int max [quant num lidos];
    
    for (i=0; i<max; i++){ 
    setlocale(LC_ALL, ""); //setlocale <locale>	 
	bool existe = false;
        cout << "\n";
		cout << "         Elimina��o de Duplicatas ";
        cout << "\n";
        cout << "    N�meros inseridos (sem dupicatas): {";
     for (int inserido : lista) cout << " " << inserido;
        cout << " }";
		cout << "\n";
        cout << "   Itens inseridos: " << i;
      	cout << "   Itens listados: " << lista.size();  //funcao size() retorna o tamanho da lista.
        cout << "\n";
		cout << endl << "Insira cinco n�meros, cada um entre 10 e 100, inclusive: ";
        cin >> num;

    for (int inserido : lista){ 
       if (inserido == num)    existe = true;  
    }  
    
    if (num>=10 && num <=100 && !existe);    
		lista.push_back(num);  //inclue no fim do vetor um elemento (push_back) https://www.inf.pucrs.br/~pinho/PRGSWB/STL/stl.html
	}	
    
        cout << "\n";
		cout << "      Itens inseridos: " << i;
		cout << "      Itens listados: " << lista.size();
		cout << "\n";
		cout << "   Lista sem valores duplicados:  { ";   
    
	for (int j = 0; j < lista.size(); j++){
		cout << lista[j] << " "; }
		cout << "}";
    }



 