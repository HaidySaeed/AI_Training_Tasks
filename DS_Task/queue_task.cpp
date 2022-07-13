// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <queue>


void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    queue<int> gquiz;
    int size = 6;
    for (int i = 0;i < size;i++)
    {
        gquiz.push(i);
    }
  
    cout << "The queue content is : ";
    showq(gquiz);

    cout << "\nthe queue size is : " << gquiz.size();
    cout << "\n front is  : " << gquiz.front();
    cout << "\n back is : " << gquiz.back();

    cout << "\n pop  : ";
    gquiz.pop();
    showq(gquiz);
    cout << "\n push : ";
    gquiz.push(60);
    showq(gquiz);
}

