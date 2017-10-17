//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int cow[80001], pre[80001];

int main()
{
    int n;
    int i;
    cow[0]=-1;
    
    cin >> n;
    for(i=1;i<=n;i++){
        char command;
        int num;
        cin >> command;
        if(command=='a')
            cin >> num, cow[i]=num, pre[i]=i-1;
        else if(command=='s')
            cow[i]=cow[pre[i-1]], pre[i]=pre[pre[i-1]];
        else
            cin >> num, cow[i]=cow[num-1], pre[i]=pre[num-1];
        cout << cow[i] << endl;
    }
    
    return 0;
}
