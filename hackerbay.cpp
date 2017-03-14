#include<iostream>
using namespace std;
int main()
{
    int n,i,j,p,a,b;
    string s;
    cout<<"enter no of inputs";
    cin>>n;
    for(j=0;j<n;j++)
    {
    cout<<"enter the string";
    cin>>s;

    a=0;b=0;i=0;
    while(s[i]!='\0')
    {
        if(s[i++]=='a')
            a++;
            else
                b++;
    }
    if(a<b)
        cout<<a;
    else
        cout<<b;
        cout<<endl;
    }
    return 0;
}
