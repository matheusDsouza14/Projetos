#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
/*int main()
{
    setlocale(LC_ALL,"portuguese"); //Set location , used to special caracters
    cout << "Macã"// Test
    //C++ online compiler: https://www.onlinegdb.com/online_c++_compiler
    /*//Shape Print
    //Triangule
    cout << "    /|" << endl;
    cout << "   / |" << endl;
    cout << "  /  |" << endl;
    cout << " /   |" << endl;
    cout << "/____|" << endl;*/
    /*//Variables
    int idade = 38 ,anos_contribuicao = 17, anos_faltante = 30 - anos_contribuicao;
    cout << "Idade: " << idade <<endl;
    cout <<"Anos de contribuicao: " << anos_contribuicao <<endl;
    cout << "Anos faltants para recebimento de aposentadoria: "<<anos_faltante<<endl;*/
    //Values tiped by user
    /*string nome;
    cout << "Digite seu nome ";
    getline(cin,nome);//Get entire lines tha user enter
    cout <<"seu nome é "<< nome;
    int idade;
    int anos_contribuicao;
    int anos_faltante;
    int idade_aposentar;
    cout << "Olá bem vindo ao PDA"<< endl;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite os anos de contribuição: ";
    cin >> anos_contribuicao;
    if (idade >= 60 && anos_contribuicao >= 15)
    {
        cout << "Você está apto a receber aposentadoria" << endl;
    }else if(idade<60){
        idade_aposentar = 60 - idade;
        cout << "Idade insuficiente para aposentar"<< endl;
        cout <<"Faltam "<< idade_aposentar << " anos";
    }
    else
    {
        anos_faltante = 15 - anos_contribuicao;
        cout << "Você não esta apto a receber aposentadoria" << endl;
        cout << "Faltam " << anos_faltante << " anos de comtribuição" << endl;
    }
    int contador1;
    int contador2;
    cout <<"Digite o número para inicio de contagem: ";
    cin >> contador1;
    cout << "Digite o número para terminar a contagem: ";
    cin >> contador2;
    while(contador1<contador2){
            contador1++;
            cout << contador1 << ",";
            if(contador1 == contador2){
                cout << contador1;
            }
    }*/
    /*//String
    string text = "Souza";
    cout << text.length()<<endl;;// shows  how many characters of the string
    cout << text[3]<<endl;; // Shows the specific character in the string
    text[1] = 'a' ;// Swap the index 1 with "a""
    cout << text.find("za")<<endl;; //Shows where index the following caracters  starts
    cout<< text.substr(0,2) <<endl; //Prints the caracters between index 0 and 2*/
    //Math functions
    /*cout << pow(2,2)<<endl ;// Prints two squared
    cout << sqrt(36)<<endl;// makes the square root of 36
    cout << round(3.6)<<endl; // Rounds a number
    cout << fmax(-45,36)<<endl;// Returns which is bigger*/
    return 0;
}*/
#include <iostream>
#include <cmath>
#include <locale> 
using namespace std;
double num1;
double num2;
double num3;
int square_root(){
    int result_sqr1 = sqrt(num1);
    int result_sqr2 = sqrt(num2);
    int result_sqr3 = sqrt(num3);
    cout << "A raiz quadrada de " << num1 <<" é "<< result_sqr1<<endl;
    cout << "A raiz quadrada de " << num2 <<" é "<< result_sqr2<<endl;
    cout << "A raiz quadrada de " << num3 <<" é "<< result_sqr3<<endl;
    return 0;
}

int main()
{
    string oper;
    cout<<"Digite o primeiro número: ";
    cin >> num1;
    cout<<"Digite o segundo número: ";
    cin>> num2;
    cout<<"Digite o terceiro número: ";
    cin>>num3;
    cout<<"Digite a operação: ";
    cin >> oper;
    switch(oper){
        case "adicao":
        
        break;
        case "adicao"
        
        break;
        case "adicao"
        
        break;
        case "adicao"
        
        break;
        case "adicao"
        
        break;
        case "raiz":
            square_root();
        break;
    }
    square_root();
}

