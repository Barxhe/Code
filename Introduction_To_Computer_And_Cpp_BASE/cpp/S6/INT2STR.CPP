#include <iostream>
using namespace std;

int main(){
	
    int n, index=0;//����
    cin >> n;
    
    while (n > 0){//int2strת��
        if (index == 0) cout << n%10;
        else cout << " " << n%10;
        index++;
        n /= 10;
    }
    
    cout << endl;//���
    return 0;
}
