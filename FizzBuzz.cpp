class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n,"1");
        
        for(int i=0;i<n;i++)
        {
            int x=i+1;
            if(x%3==0 && x%5==0)
                ans[i]="FizzBuzz";
            else if(x%3==0)
                ans[i]="Fizz";
            else if(x%5==0)
                ans[i]="Buzz";
            else
                ans[i]=to_string(x);
        }
        
        return ans;
    }
};
