#include <iostream>
#include<vector>
#include<cmath>
using namespace std;



int main() {
    vector<int> index;
    vector<pair<float,float>> coordinate;
    int n ;
    float x ,y;

   while(cin >> n >> x >> y && n != EOF ){

       index.push_back(n - 1);
       coordinate.push_back(make_pair(x,y));
   }
   int s =  index.size();

    float Map[s][s];
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            Map[i][j] = sqrt( pow(coordinate[i].first - coordinate[j].first , 2)  + pow((coordinate[i].second - coordinate[j].second ) , 2));
        }
    }





    return 0;
}
