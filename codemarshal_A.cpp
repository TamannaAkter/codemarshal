#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str1;
    cin>>s;
    str1="anik";
    size_t found =s.find(str1);
    if(found !=string :: npos)
    {
        cout<<"he did it again"<<endl;
    }
    else{
        cout<<"not this time"<<endl;
    }

}
