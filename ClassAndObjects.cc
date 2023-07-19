#include<iostream>
using namespace std;
class YoutubeChannel
{
    public:
    string Name;
    string OwnerName;
    int subscriberCount;
};

int main()
{
    YoutubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.subscriberCount = 200000;

    cout<<"Name : "<<ytChannel.Name<<endl;
    cout<<"Owner Name"<<ytChannel.OwnerName<<endl;
    cout<<"subscriber count"<<ytChannel.subscriberCount<<endl;

    return 0;
}