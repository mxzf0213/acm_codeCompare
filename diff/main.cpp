#include <bits/stdc++.h>
using namespace std;
int n,m,k,t;
int main()
{
    int i,j;
    system("g++ -std=c++11 H:/code/gen/main.cpp -o H:/code/gen/bin/Debug/gen.exe");
    system("g++ -std=c++11 H:/code/dy/main.cpp -o H:/code/dy/bin/Debug/dy.exe");
    system("g++ -std=c++11 H:/code/compare/main.cpp -o H:/code/compare/bin/Debug/compare.exe");
    t=1000;
    while(t--)
    {
        system("H:/code/gen/bin/Debug/gen.exe>1.in");
        system("H:/code/dy/bin/Debug/dy.exe<1.in>1.out");
        system("H:/code/compare/bin/Debug/compare.exe<1.in>2.out");
        if(system("fc 1.out 2.out>diff.txt"))
        {
            ifstream file;
            file.open("diff.txt");
            string s;
            while(getline(file,s))
            {
                cout<<s<<endl;
            }
            file.close();
            break;
        }
    }
    return 0;
}
