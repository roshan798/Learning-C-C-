#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> s1;
    vector<int> s2;
    vector<string> s3;
    string str,temp;
    int q,op,l;
    cin>>q;
    for (int i=0; i<q; i++) {
        cin>>op;
        if (op==1) {
            cin>>temp;
            s1.push_back(op);
            s2.push_back(temp.length());
            str.append(temp);
        }
        else if (op==2) {
            cin>>l;
            temp=str.substr((str.length()-l),l);
            s1.push_back(op);
            str.erase(str.end()-l,str.end());
        }
        else if (op==3) {
            int pos;
            cin>>pos;
            cout<<str[pos-1];
        }
        else {
            if ((s1[s1.size()-1])==1) {
                l=s2[s2.size()-1];
                s2.pop_back();
                str.erase(str.end()-l,str.end());
                
            }
            else if ((s1[s1.size()-1])==2) {
                temp=s3[s3.size()-1];
                s3.pop_back();
                str.append(temp);
            }
            s1.pop_back();
        }
    }
    return 0;
}

