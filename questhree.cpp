#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
    int b[n];
    int j=1;
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
            continue;
        else
        {
            b[j]=a[i];
            j++;
        }
            
    }
    for(int i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
    
}
