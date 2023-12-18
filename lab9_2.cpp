void printO(int N,int M){
    if(N <= 0 || M <= 0){
    
    cout << "Invalid input";
    
    }else{
    
        for(int j = 0 ; j < N ; ++j){
            for(int i = 0 ; i < M ; ++i){
                cout << "O";
            }
            cout << endl;
        
        }
    }
}