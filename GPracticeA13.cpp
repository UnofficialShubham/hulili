
#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,n1;
  string w1,w2;
  vector<string> v;
  cin>>n;
  for(int ai=0;ai<n;ai++)
  { cin>>n1;
    for(int i1=0;i1<n1;i1++)
    { cin>>w1>>w2;
     vector<string>::iterator it; 
     it = find (v.begin(), v.end(), w1);
      if(it==v.end())
       {v.push_back(w1);
       }
       it = find (v.begin(), v.end(), w2);
      if(it==v.end())
       {v.push_back(w2);
       }
     
    } string var;
    if(v.size()%2==0)
     {var="Yes";}
    else
     {var="No";}
    cout<<"Case #"<<ai+1<<": "<<var<<"\n";
    v.clear();
  }
  return 0;
}

