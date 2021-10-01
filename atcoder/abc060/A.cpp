
#include "iostream"
#include "cstdio"
#include "cstring"
#include "string"

using namespace std;
string a,b,c;
int main()
{
    cin>>a>>b>>c;
    int lena=a.length();
    int lenb=b.length();
    if(b[0]==a[lena-1]&&(c[0]==b[lenb-1]))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
