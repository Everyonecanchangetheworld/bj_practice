//fail _ 10818 왜 다른 사람들은 어레이를 안쓰는거지 ?....

#include <iostream>
//#include <math.h>
//#include <cstdlib>
//#include <ctime>

using namespace std;

int main(int argc, char** argv){
    //srand((unsigned)time(NULL));
    int N,min,max;
    int root[1000001];
    cin >> N;
    for(int i = 0 ; i<N ; i++)
    cin>>root[i];
    // if(N>=1){
    //     for(int i = 0 ; i<N ; i++)
    //         root[i]=*argv[i+1];
    // }
    for(int j = 0; j<N ; j++){
      //  cout << root[i] << " ";
    }

/*
    for(int i = 0 ; i < N ; i ++){
        min = root[i] // I assume min 
        for(int j = 0 ; i < N ; j++){
            if(min > root[j] )
                min = root[j];
        }
    }
    
    for(int i = 0 ; i < N ; i ++){
        max = root[i] // I assume max  
        for(int j = 0 ; i < N ; j++){
            if(max < root[j] )
                max = root[j];
        }
    }
    cout << min << " " << max;
*/
}