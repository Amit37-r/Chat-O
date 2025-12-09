#include<bits/stdc++.h>
using namespace std;
bool solve(int amount , int minval , int maxval , vector<int>& result){


for(int first = maxval ; first >= minval ; first--){
if(amount < first) continue;


vector<int>temp;

temp.push_back(first);
int remain = amount - first;

int curr = maxval;

while(remain > 0 && curr >= minval){

    if(curr <= remain){
        temp.push_back(curr);
        remain   -= curr;
    }
    else {

        curr--;
    }
}
if(remain == 0){
    result = temp;
    return true;
}

}

return false;

}

int main(){
     int amount= 2150;
    int minval = 100;
    int maxval = 1000;
    vector<int>result;

    if(solve(amount , minval , maxval , result)){

        cout<< " minimumnumber og gift size" << result.size();
      cout << "giftcard";
for(int i = 0  ; i<result.size() ; i++){

    cout<< "giftcard" << result[i];
}
    }
else {

    cout<< " no valid gigtcard possible";
}

return 0;

}




     

    
