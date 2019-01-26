#include <iostream>
#include<string>

using namespace std;

class shop{

private:
    string produkty_nazwy[5]={"rezystor","tranzystor","kondensator","diody","cewka"};
    double produkty_cena[5]={5,6,4,10,2};
    int produkty_ilosc[5]={0,0,0,0,0};

public:
    shop(){
    cout<<"Witaj w sklepie internetowym "<<endl;
    }

    void showProdukts(){
    for(int i=0;i<sizeof(produkty_nazwy)/sizeof(string);i++){
        cout<<(i+1)<<" Nazwa "<<produkty_nazwy[i]<<" - "<<produkty_cena[i]<<" (zamowiono: "<<produkty_ilosc[i]<<")"<<endl;
    }
    }


    void zamowienie(int i, int ilosc){
    produkty_ilosc[i]=ilosc;

    };
    void showBasket(){
        double sum =0;
        for(int i=0;i<sizeof(produkty_nazwy)/sizeof(string);i++){
        if(produkty_ilosc[i]>0){
          cout<<(i+1)<<" Nazwa "<<produkty_nazwy[i]<<" - "<<produkty_cena[i]<<" (zamowiono: "<<produkty_ilosc[i]<<")"<<endl;
          sum=sum+=(produkty_cena[i]*produkty_ilosc[i]);
        }

        }
        cout <<"Razem: "<<sum<<endl;
    }



};



int main()
{
    shop s1;
    s1.showProdukts();
    s1.zamowienie(0,2);
    s1.showBasket();
    s1.zamowienie(2,2);
    s1.showBasket();



    return 0;
}
