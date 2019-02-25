#include<iostream>
using namespace std;
class SaleBook
{
public:
    virtual void Sale()=0;

};
class BookShop : public SaleBook
{
private:
    static int Bookcount;
public:
    void Sale()
    {
        cout << "BookShop" << endl;
        Bookcount++;

    }
    static int Getcount()
    {
        return Bookcount;

    }

};
class TaoBao : public SaleBook
{
private:
    SaleBook *sale;
public:
    TaoBao(SaleBook *s)
    {
        sale=s;

    }
    void Sale()
    {
        cout << "TaoBao" << endl;
        sale->Sale();

    }

};
int BookShop::Bookcount=0;
int main()
{
    SaleBook *shop=new BookShop;
    SaleBook *taobao=new TaoBao(shop);   //代理

    shop->Sale();
    taobao->Sale();
    taobao->Sale();

    cout << BookShop::Getcount() << endl;
    return 0;

}

