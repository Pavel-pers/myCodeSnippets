int count(long long val, int b = 64){
    int cnt = 0;
    for (int i = 0; i < b; i++)
        cnt += bool((1LL << i) & val);


    return cnt; 
}