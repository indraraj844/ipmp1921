int helper(int p)
 {
     if(p>=0 &&p<=9)return p;
     int sum=0;
     while(p)
     {
         sum+=p%10;
         p=p/10;
     }
     return  helper(sum);
 }

int superDigit(string n, int k) {
    int l=n.length();
    int p=stoi(n);
        int sum=0;
        while(p)
        {
            sum+=p%10;
            p/=10;
        }
   return helper(k*sum);
}

need to work 
