#include <iostream>

using namespace std;
void ord(int v[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
}
int main()
{
    int v[100],nr=0,a,b;
     bool ok=std::cin.eof();
     while(!ok)
    {
        cin>>v[nr++];
        ok=std::cin.eof();
    }
    nr--;

    while(nr>1)
    {
        ord(v,nr);
        a=v[nr-1];
        b=v[nr-2];
        if(a!=b)
        {
            v[nr-2]=a-b;
            nr--;
        }
        else
            nr=nr-2;
    }
    if(nr==0)
        cout<<"-1";
    else
        cout<<v[0];

}
