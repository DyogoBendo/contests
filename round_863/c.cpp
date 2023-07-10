#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> values;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            values.push_back(x);
        }

        vector<int> answer (n);

        int i = 0;
        int j = 0;
        while(i < n){
            if(j == n - 2){
                answer[i] = values[j];
                i ++;
            } else{
                if(values[j] < values[j + 1]){                    
                    if(i){
                        if(answer[i - 1] <= values[j]){                            
                            answer[i] = values[j];
                            i ++;
                        }  else{
                            answer[i] = values[j];
                            i ++;
                            answer[i] = values[j];
                            i++;                                      
                        }
                    } else{
                        answer[i] = values[j];
                        i ++;
                        answer[i] = values[j];
                        i++;                                
                    }                    
                } else{
                    if(i){
                        if(answer[i - 1] == values[j]){                            
                            j ++;
                            continue;                            
                        }
                    }
                    answer[i] = values[j];
                    i ++;
                }
                j ++;
            }

        }

        for (int k = 0; k < n; k++)
        {
            cout << answer[k] << " ";
        }
        cout << endl;        
        
    }
}