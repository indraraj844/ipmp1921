method 1
  simple method check all time mudelo by 4
  
  method 2 
   get floor and ceil value of log4(n)
  
  method 3
  int isPowerOfFour(unsigned int n)
    {
      if(n && !(n & (n-1)))
      {
          int count=0;
         while(n>1)
         {
            count++;
            n>>=1;
         }
         return count%2==0;
      }
      return 0;
    }
logic
1.first check it is power of two or not
2. count of zero before 1 should be a odd number

thankyou
