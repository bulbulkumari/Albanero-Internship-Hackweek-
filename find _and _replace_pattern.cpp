/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
bool match(string pattern,string words)
    {
        
        map<char ,char> m;
        map <char ,char> mp;
         map<char, char>::iterator itr;
        map<char, char>::iterator itr1;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(m.find(words[i])!=m.end())
                m.insert({words[i],pattern[i]});
            if(mp.find(pattern[i])!=mp.end())
                mp.insert({pattern[i],words[i]});
            if(m[words[i]]!=pattern[i]||mp[pattern[i]]!=words[i])
                return false;
        }
        
        return true;
        
        
    }
vector<string> findAndReplace(vector<string>& words, string pattern) {
       int n=pattern.length();
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
           
              bool k=match(pattern,words[i]);
                if(k)
                    v.push_back(words[i]);
        }
        return v;
    }

int main()
{
  vector <string> s ;
  vector <string> s1;
  string st,pattern;
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
  {
      cin >> st;
      s.push_back(st);
  }
   cin >> pattern;
   s1= findAndReplace(s,pattern);
    
   for(auto i=s1.begin();i!=s1.end();i++)
   {
       cout << *i;
   }
   
    
}


