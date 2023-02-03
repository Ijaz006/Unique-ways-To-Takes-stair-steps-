
#include <iostream>
using namespace std;




void uniqueWays(int N,int n,int steptakes[])
{
    if(N == 0) return;
    if(n > N) return;
    if(n == N){
        for(int i = 0 ; i < N; i++)
        {
            if(steptakes[i] != 0)
                cout << steptakes[i] << " ";
        }
        cout << endl;
        return;
    }
    int i=1;
    while(N!=0){
        steptakes[n] = i;
        uniqueWays(N,n+i,steptakes);
        steptakes[n] = 0;
        ++i;
        --N;
        
    }


}

int main()
{

    int N;
    cin >> N;
    int  steptakes[N];

    for(int i = 0 ; i < N ; i++)
        steptakes[i] = 0;
        uniqueWays(N,0,steptakes);
    return 0;
}
