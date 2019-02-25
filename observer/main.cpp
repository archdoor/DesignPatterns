#include "observer.h"
int main()
{
    Blog *blog = new BlogBKY("onlycxue");
    Observer *observer1 = new ObserverBlog("hello",blog);
    blog->Attach(observer1);
    blog->SetStatus("发表博客！");
    blog->Notify();
    //delete blog;
    //delete observer1;
    return 0;
}
