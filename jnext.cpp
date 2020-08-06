#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int>v1,v2;
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            v1.push_back(c);
            v2.push_back(c);
        }
        next_permutation(v1.begin(),v1.end());
        int flag=0,f1=0;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
            {
                flag=1;
                break;
            }
        }
        int s=v2.size()-1;
       
       for(int i=0;i<s;i++)
        {
            if(v2[i]<v2[i+1])
            {
                
                f1=1;
                break;
            }
        }
        
        if(flag==0||f1==0)
        cout<<-1<<endl;
        else
        {
            for(int i=0;i<v1.size();i++)
           {
           cout<<v1[i];
            } 
        
        cout<<endl;
        }
    }
   
   
	return 0;
}
