#include <iostream>
#include <list>
#include <string>

using namespace std;

class Observer
{
public:
    Observer() {}
    virtual ~Observer() {}
    virtual void Update() {}


};

class Blog
{
public:
    Blog(){}
    virtual ~Blog() {}
    void Attach(Observer *observer)
    {
        m_observers.push_back(observer);

    }
    void Remove(Observer* observer)
    {
        m_observers.remove(observer);

    }
    void Notify()
    {
        list<Observer*>::iterator iter = m_observers.begin();
        for(;iter != m_observers.end(); iter++)
            (*iter)->Update();

    }
    virtual void SetStatus(string s)
    {
        m_status = s;

    }
    virtual std::string GetStatus()
    {
        return m_status;

    }
private:
    list<Observer* > m_observers;
protected:
    std::string m_status;

};

class BlogBKY : public Blog
{
public:
    BlogBKY(string name):m_name(name) {}
    ~BlogBKY() {}
    void SetStatus(string s)
    {
        m_status = s ;

    }
    string GetStatus()
    {
        return m_status;

    }
private:
    string m_name;

};

class ObserverBlog : public Observer
{
public:
    ObserverBlog(string name,Blog *blog):m_name(name),m_blog(blog)
    {


    }
    ~ObserverBlog() {}
    void Update()
    {
        std::string status = m_blog->GetStatus();
        cout << m_name  <<"-------" << status <<endl;

    }
private:
    std::string m_name;
    Blog *m_blog;

};



