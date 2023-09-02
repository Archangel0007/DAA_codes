/*
  This code Solves the 2278th problem of leetcode "Percentage of Letter in String"
*/
int percentageLetter(char * s, char l){
    int count=0;
    for( int i=0; i< strlen(s);i++){
        if(s[i]==l){count++;}
    }
    return((count*100)/strlen(s));
}
