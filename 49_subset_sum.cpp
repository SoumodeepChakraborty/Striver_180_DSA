void func(int ind, int sum, vector<int> &num, int N, vector<int> &sumSubset){
    if(ind == N){
        sumSubset.push_back(sum);
        return ;
    }
    
    func(ind+1,sum+num[ind],num,N,sumSubset);
    func(ind+1,sum,num,N,sumSubset);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int N = num.size();
    vector<int>sumSubset;
    func(0,0,num,N,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    return sumSubset;
}
