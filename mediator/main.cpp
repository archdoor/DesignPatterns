#include <iostream>  
#include <string>
using namespace std;

#define SAFE_DELETE(p) if (p) { delete p; p = NULL;  }

/*声明抽象中介类*/
class Mediator;

/*定义抽象人类*/
class Person
{
public:
    virtual void SetMediator(Mediator *mediator){} 
    virtual void SendMessage(string &message){}
    virtual void GetMessage(string &message){}
protected:
    Mediator *p_mediator; //中介    

};

/*定义抽象中介类*/
class Mediator
{
public:
    virtual void Send(string &message, Person *person){}
    virtual void SetRenter(Person *renter){}
    virtual void SetLandlord(Person *landlord){}


};

/*定义租客类*/
class Renter:public Person
{
public:
    void SetMediator(Mediator *mediator){p_mediator = mediator;}
    void SendMessage(string &message){ p_mediator->Send(message,this); }
    void GetMessage(string &message){cout<<"租房者收到房东发来的消息："<<message;}

};

/*定义房东类*/
class Landlord:public Person
{
public:
    void SetMediator(Mediator *mediator){p_mediator = mediator;}
    void SendMessage(string &message){ p_mediator->Send(message,this); }
    void GetMessage(string &message){cout<<"房东收到租客发来的消息："<<message;}

};

/*定义具体中介类*/
class HouseMediator:public Mediator
{
public:
    HouseMediator():p_renter(NULL),p_landlord(NULL){}
    void SetRenter(Person *renter){p_renter = renter;}
    void SetLandlord(Person *landlord){p_landlord = landlord;}
    void Send(string &message, Person *person)
    {//接收消息的对象为该对象的对应对象
        if(person == p_renter)
            p_landlord->GetMessage(message);
        else
            p_renter->GetMessage(message);
    }
private:
    Person *p_renter;
    Person *p_landlord;

};

int main(int argc, char *argv[])  
{  
    Mediator *mediator = new HouseMediator();
    Person *person1 = new Renter();
    Person *person2 = new Landlord();
    mediator->SetRenter(person1);
    mediator->SetLandlord(person2);
    person1->SetMediator(mediator);
    person2->SetMediator(mediator);
    string aaa = "我想在深圳北站附近租套房子，一室一厅\n";
    string bbb = "我出租一条房子，一室一厅，深圳北站附近\n";
    person1->SendMessage(aaa);
    person2->SendMessage(bbb);
    SAFE_DELETE(person1);
    SAFE_DELETE(person2)
        SAFE_DELETE(mediator);
    return 0;  
}



