// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    char n;
    int r;
    string biny="";
    for(int i=0;i<4;i++)
    {
        cin>>n;
        biny+=n;
    }
    // string bon=bitset<8>(n).to_string();
    cout<<biny<<endl;
    
    for(int i=0;i<4;i++)
    {
        if(pow(2,i)==4+i+1)
        {
            r=i;
            break;
        }
    }
    cout<<r<<endl;
    
    // int pos;
    vector<int>pos(3);
    for(int i=0;i<r;i++)
    {
        pos[i]=pow(2,i);
        // cout<<pos[i];
        // cout<<pos<<endl;
    }
    // std::cout << "Start small. Ship something.";
    vector<char>v(7);
    for(int i=0;i<pos.size();i++)
    {
        // v[pos[0]]=9;
        // v[pos[1]]=9;
        // v[pos[2]]=9;
        v[pos[i]-1]='?';
    }
    int k=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!='?')
        {
            v[i]=biny[k];
            k++;
        }
    }
    for(auto it:v)
    {
        cout<<it;
    }
    return 0;
    
    
}
