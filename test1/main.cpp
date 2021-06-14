#include <iostream>
#include <queue>
#include "stdio.h"
using namespace std;

main()
{

    priority_queue <int> p_queue;
    int N,a;
    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d",&a);
        p_queue.push(a);
    }
    /*for(int i = 0; i < N-1; i++)
    {
        p_queue.pop();
    }*/
    cout<<p_queue.top();

}
