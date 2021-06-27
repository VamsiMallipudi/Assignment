#include <iostream>
using namespace std;
void fun(char* S)
{
    if (S[0] == '\0')
        return;
    if (S[0] == S[1])
    {
        int i = 0;
        while (S[i] != '\0') 
        {
            S[i] = S[i + 1];
            i++;
        }
        fun(S);
    }
    fun(S + 1);
}
int main()
{
    char S1[100];
    cin>>S1;
    fun(S1);
    cout <<S1<< endl;
}
