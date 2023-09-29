/*
    class A is made by using class b in such a way that class B is not exist independentlly but class
    A has own existance.
*/

#include<iostream>


class DebitCard
{
private:
    int _cvv_number;
    std::string _card_number;
public:
    DebitCard(int cvv,std::string number) {
        this->_cvv_number=cvv;
        this->_card_number=number;
    }
    ~DebitCard() {
        std::cout<<"Debit cad destroyed\n";
    }
};
class Account
{
private:
    DebitCard* obj;
    std::string _name;
public:
    Account(DebitCard* card, std::string _name)
    :obj(card) ,_name(_name){}
    ~Account() {}

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }
};

int main(){
    Account* a1=new Account(new DebitCard(781,"2345 76544"),"gyan");
    std::cout<<*a1;
}


/*
    int n1=10; // stack (automatic storage)
    int* n1=new int(10); // heap

    // card is a stack-allocated DebitCard instance
    DebitCard card; //stack (automatic storage).

    //card is a DebitCard pointer to a heap allocated DebitCard instance
    DebitCard* card=new DebitCard();
*/