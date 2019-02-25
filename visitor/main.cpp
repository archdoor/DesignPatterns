#include<iostream>
#include<string>
#include<chrono>
#include<vector>
using std::cout;
using std::endl;

//前向声明,访问者
class Visitor;

//被访问的抽象类,只有一个接口，用来接受访问者
class Object
{
public:
    virtual void accept(Visitor&v) = 0;
};

//具体的被访问的对象，学生。
class StudentA :public Object
{
    std::string name;
    int score;
public:
    StudentA(std::string name_);
    int getScore();
    std::string getName()
    {
        return name;
    }
    void setScore(int num);
    virtual void accept(Visitor&v);
};

//抽象访问者,只有一个接口，访问.
class Visitor
{
public:
    virtual void visit(Object* obj)=0;

};

//具体的访问者一，班主任，实现访问（学生并给学分)
class ClassLeader :public Visitor
{
public:
    virtual void visit(Object* obj);
};
//具体的访问者二，校长，实现访问（学生并批评不及格的学生)
class HeadMaster :public Visitor
{
public:
    virtual void visit(Object* obj);
};

//随机分数生成器
class ScoreGen
{
public:
    static int getScore()
    {
        auto tp=std::chrono::system_clock().now();
        auto d=tp.time_since_epoch();
        int score_temp = d.count() % 100;
        return score_temp;
    }
};

int main()
{
    std::vector<Object*> room;
    for (int i = 0; i < 10; i++)
    {
        std::string name_ = "student";
        name_ += std::to_string(i);
        room.push_back(new StudentA(name_));
    }

    ClassLeader leader;
    for (auto const& item:room)
    {
        item->accept(leader);//学生接待班主任（班主任给学分）;
    }

    HeadMaster master;
    for (auto const& item : room)
    {
        item->accept(master);//学生接待校长（校长稽核）;
    }

    for (auto const& item : room)
    {
        delete item;
    }
    return 0;
}

StudentA::StudentA(std::string name_)
    :score(0),name(name_)
{

}

int StudentA::getScore()
{
    return score;
}

void StudentA::setScore(int num)
{
    score = num;
}

void StudentA::accept(Visitor & v)
{
    v.visit(this);
}

void ClassLeader::visit(Object * obj)
{
    StudentA* s = dynamic_cast<StudentA*>(obj);
    int score = ScoreGen::getScore();
    s->setScore(score);
    std::cout << "班主任来访:" << s->getName() << ",并给予学分：" << score << endl;
}

void HeadMaster::visit(Object * obj)
{
    StudentA* s = dynamic_cast<StudentA*>(obj);
    if (s->getScore()<60)
    {
        cout <<"校长来访，点名批评"<< s->getName() << ",得分:" << s->getScore() << ",不及格" << endl;
    }
}




