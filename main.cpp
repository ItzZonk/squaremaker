#include <iostream>
using namespace std;

int main()
{
    int h;
    int w;
    char m;

    cout<<"Choose character: ";
    cin>>m;

    cout<<"Choose hight: ";
    cin>>h;

    cout<<"Choose width: ";
    cin>>w;

    for (int h1 = 1; h1 <= h; h1++)
    {
        for (int w1 = 1; w1 <= w; w1++)
        {
            cout<<m<<" ";
        }
        cout<<endl;
    }
    


}

