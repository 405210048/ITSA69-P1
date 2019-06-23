#include<iostream>
//#include<fstream>
using namespace std;

int main(void)
{
    //ifstream file("request.txt");
    int sum,n, i;
    char id1[101];
    while(cin>>id1[0])
    {
    if(id1[0]<='H')
        n = (int)(id1[0]-'A')+10;

    else if(id1[0]>'I' && id1[0]<'O')
        n = (int)(id1[0]-'A')+9;

    else if(id1[0]>'O' && id1[0]<='Z')
        n = (int)(id1[0]-'A')+8;

    else if(id1[0]=='I')
        n=34;

    else
        n=35;

    sum=n/10+9*(n%10);
    for(i=8; i>=1; i--)
    {
        cin>>id1[9-i+1];
        n = (int)id1[9-i+1]-'0';
        sum+=n*i;
    }
    cin>>n;
    sum+=n;

    if(sum%10==0)
        cout<<"CORRECT!!!"<<endl;
    else
        cout<<"WRONG!!!"<<endl;

    }
    return 0;
}

