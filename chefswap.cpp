#include <bits/stdc++.h>

using namespace std;
  
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,z=0;
       cin>>n;
         z=2*n;
       unsigned long long int sum=0;
       long long int a[n],b[n],c[n];
       long long int arr[z];
      
       long long int j=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           arr[j]=a[i];
           j++;
       }
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
           arr[j]=b[i];
           j++;
       }
       sort(a,a+n);
       sort(b,b+n);
       sort(arr,arr+z);
     
       long long int d=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==b[i])
           d++;
       }
       if(d==n)
       cout<<0<<endl;
       else
        {
           long long int f=1;
           int flag=0;
           for(int i=0;i<z-1;i++)
           {
               if(arr[i]==arr[i+1])
               f++;
               else
               {
                   if(f%2!=0)
                   {
                       flag=1;
                       break;
                   }
                   f=1;
               }
               
           }
           
           if(flag==1)
           cout<<-1<<endl;
           else
           {
              vector<long long int>v;
             for(int i=0;i<z;i++)
             {
                 if(i%2==0)
                v.push_back(arr[i]);
                 
             }
         
             set<long long int>s;
          set<long long int>::iterator it; 
             for(int i=0;i<v.size();i++)
             {
                 s.insert(v[i]);
             }
           
              map<long long int,long long int> M1; 
                
            for (int i = 0; i<v.size(); i++)
            {
 
               if (M1.find(v[i]) == M1.end())
               M1[v[i]] = 1; 
               else 
               M1[v[i]]++; 
               
             }  
      
             vector<long long int>vec;
             long long int least=-1;
            if(a[0]>=b[0])
            {
                least=b[0];
                for(int i=0;i<n;i++)
                vec.push_back(a[i]);
            }
            else
            {
                least=a[0];
             for(int i=0;i<n;i++)
                vec.push_back(b[i]);   
            }
               map<long long int,long long int> M2; 
            for (int i = 0; i<vec.size(); i++)
            {
 
               if (M2.find(vec[i]) == M2.end())
               M2[vec[i]] = 1; 
               else 
               M2[vec[i]]++; 
               
             }
            
            long long int e=0;
            vector<long long int>vf;
            for (it = s.begin(); it != s.end(); it++) 
            {
                e=abs(M1[(*it)]-M2[(*it)]);
          
                while(e--)
                {
                    vf.push_back(*it);
                }
                e=0;
            
            }
            sort(vf.begin(),vf.end());
         
            for(int i=0;i<(vf.size()/2);i++)
            {
                sum=sum+min(vf[i],2*least);
            }
           
             cout<<sum<<endl;
           }
        }
    }
       
    
  return 0;
}
