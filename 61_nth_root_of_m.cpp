double multiply(double number,int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=number;
    }
    return ans;
}

double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double low = 1;
    double high = m;
    double eps = 1e-8;
    
    while((high-low)>eps){
        double mid = (high+low)/2.0;
        if(multiply(mid,n)<m)
            low=mid;
        else
            high=mid;
        
    }
    return low;
}
