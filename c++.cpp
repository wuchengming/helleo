#include <iostream>
using namespace std;
class Clock
{
public:
    Clock (int xx,int yy)
    {
        x=xx;
        y=yy;
        cout<<"构造函数"<<endl;
    }
    int add()
    {
        return x+y;
    }
    ~Clock()
    {
    cout<<"析构函数"<<endl;
    }
private:
    int x,y;

};
int main()
{
    int x,y;
    cin>>x>>y;
    Clock c(x,y);
    cout<<c.add()<<endl;
}
