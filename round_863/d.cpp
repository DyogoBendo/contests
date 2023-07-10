#include <bits/stdc++.h>

using namespace std;

int fib(int n){
    int a  = 1;
    int b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a;
        int a = a + b;
        int b = c;
    }

    return a;
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >>n >> x >> y;

        int x0 = 0;
        int xf = fib(n);
        int y0 = 0;
        int yf = fib(n + 1);


        int possible = 1;
        int situation = 0;
        while(xf - x0 && yf - x0){
            if(situation){                

                if(x > yf || x <= xf - yf){
                    situation = 0;
                    if(x > yf){
                        x0 = yf + 1;
                    } else{
                        xf = xf - yf;
                    }
                } else{
                    possible = 0;
                    break;
                }

            } else{
                if(y > xf || y <= yf - xf){
                    situation = 1;
                    if(y > xf){
                        y0 = xf + 1;
                    } else{
                        yf = yf - xf;
                    }
                } else{
                    possible = 0;
                    break;
                }
            }
        }
        
    }
}