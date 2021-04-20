 int count_set_bit(int n)
    {
        int count=0;
        while(n)
        {
            count++;
            n&=n-1;
        }
        return count;
    }
    int countBitsFlip(int a, int b){
        
        // Your logic here
        return count_set_bit(a^b);
        
    }
