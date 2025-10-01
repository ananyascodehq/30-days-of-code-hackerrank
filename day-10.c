int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int max = 0, count = 0;    
    while(n>0){
     if(n & 1){
        count++;
        
        if(count > max) max = count;
        
     } else{
        count = 0;
     } 
     
     n>>=1;
    }
    
    printf("%d\n", max);
    return 0;
}
