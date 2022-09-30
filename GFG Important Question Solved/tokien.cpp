 #include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<string> tokens;
   string path="/";
    stringstream check1(path);
    string intermediate;
        
    while(getline(check1, intermediate, '/'))
    {
        tokens.push_back(intermediate);
    } 
    for(auto ite:tokens)
    {
        cout<<ite<<", ";
    }
}
 