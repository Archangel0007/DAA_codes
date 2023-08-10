/*
  This code solves the 11th problem of leet code "Container with most water"
*/
int min(int a,int b){
    if(a<b){
        return(a);
    }
    return(b);
}
int maxArea(int* height, int n){
    int volume=0;
    int i=0;
    int j=n-1;
    while(i!=j){
        int temp=min(height[i],height[j])*(j-i);
        if(temp>volume){volume=temp;}
        if(height[i]>height[j]){j--;}
        else{i++;}
    }
    return(volume);
}
