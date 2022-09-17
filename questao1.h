#include <iostream>
#define jurosAnual 0.03
#define taxadesaque 0.02
using namespace std;

class ContadePoupança{
  public:
    ContadePoupança(string nome,float saldo);
    float calculeRendimentoMensal();
    void sacar(float quantia);
    void tostring();
    string getNome();
    float getSaldo();
    void setNome(string n);
    void setSaldo(float saldo);

  private:
    string nome;
    float saldo;
};
ContadePoupança::ContadePoupança(string nome,float saldo){
  this->nome=nome;
  this->saldo=saldo;
}
float ContadePoupança::calculeRendimentoMensal(){
  float rendimento = (saldo*jurosAnual)/12;
  this->saldo=saldo+rendimento;
  return saldo;
}
void ContadePoupança::sacar(float quantia){
  float sacartotal=quantia+(quantia*taxadesaque);
  if (sacartotal>saldo){
    cout<<"Saldo indisponivel! "<<endl;
  }
  else{
    saldo=saldo-sacartotal;
  }
}
string ContadePoupança::getNome(){
  return nome;
}
float ContadePoupança::getSaldo(){
  return saldo;
}
void ContadePoupança::setNome(string n){
  this->nome=n;
}
void ContadePoupança::setSaldo(float saldo){
  if (saldo<0){
    cout<<"Quantia de saldo invalida"<<endl;
  }
}
void ContadePoupança::tostring(){
  cout<<"\n Titular da Conta: "<<getNome()<<" ,saldo: "<<getSaldo()<<endl;
}

