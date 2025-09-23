int main()
{
    int N = parse_int(ltrim(rtrim(readline())));
    
    if(N%2 == 0){
        if(N >= 2 && N <=5){
            printf("Not Weird");
        }else if(N>= 6 && N<=20){
            printf("Weird");
        }else if (N>20) {
            printf("Not Weird");
        }
    }else {
        printf("Weird");
    }

    return 0;
}
