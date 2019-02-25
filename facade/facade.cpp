#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
 
class LightSystem
{
public:
        void on()
        {
                    cout << "开灯..." << endl;
                        
        }
            void off()
            {
                        cout << "关灯..." << endl;
                            
            }

};
class MovieSystem
{
public:
        void on()
        {
                    cout << "放电影..." << endl;
                        
        }
            void off()
            {
                        cout << "关闭电影..." << endl;
                            
            }

};
class SounderSystem
{
public:
        void on()
        {
                    cout << "打开音响..." << endl;
                        
        }
            void off()
            {
                        cout << "关闭音响..." << endl;
                            
            }

};
class MusicSystem
{
public:
        void on()
        {
                    cout << "放音乐..." << endl;
                        
        }
            void off()
            {
                        cout << "关闭音乐..." << endl;
                            
            }

};
class MicrophoneSystem
{
public:
        void on()
        {
                    cout << "麦克风打开..." << endl;
                        
        }
            void off() 
            {
                        cout << "麦克风关闭..." << endl;
                            
            }

};
//智能生活，给用户提供简洁的界面
class HomeSystem
{
public:
    //KTV模式...
    void OpenKTV()
    {
        //关灯
        light.off();
        //打开音响
        sounder.on();
        //音乐走起
        music.on();
        //打开麦克风
        microphone.on();
        cout << "*********KTV模式 欢迎您********" << endl;
    }
    void CloseKTV()
    {

        light.on();
        sounder.off();
        music.off();
        microphone.off();
        cout << "**********KTV模式 已经关闭********" << endl;
    }
    //观影模式...
    void OpenMovie()
    {
        //关灯
        light.off();
        //打开音响
        sounder.on();
        //放电影
        sounder.on();
        cout << "*********家庭影院模式 欢迎您********" << endl;
    }
    void CloseMovie()
    {
        light.on();
        sounder.off();
        sounder.off();
        cout << "*********家庭影院模式 已经关闭********" << endl;
    }
private:
    LightSystem light;
    MovieSystem movie;
    MusicSystem music;
    SounderSystem sounder;
    MicrophoneSystem microphone;
};

//客户端 只需要和系统统一的接口进行 交互，没有必要知道更多 -->迪米特法则（最少知道原则）
//给用用户提供 简洁的接口 是外观模式 最重要的一点
int main(int argc, char *argv[])
{
    HomeSystem home;
    home.OpenKTV();//开启KTV模式
    home.CloseKTV();

    home.OpenMovie();//开启电影模式
    home.CloseMovie();
    return 0;
}
