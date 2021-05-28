class Solution {
public:
    bool canPlaceFlowers(vector<int>&flowerbed, int n) {
        if(n==0)return true;
        else if(n==1&&flowerbed.size()==1)return flowerbed[0]==0;
        int l=flowerbed.size();
        int count=0;
        for(int i=0;i<l;i++)
        {
         if(i==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                count+=1;
                flowerbed[i]=1;
            }
            else if(i==flowerbed.size()-1 && flowerbed[i]==0 && flowerbed[i-1]==0){
                count+=1;
                flowerbed[i]=1;       
            }
            else if(i>=1 && flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                count+=1;
                flowerbed[i]=1;
            }        
        }
        cout<<count;
        return count>=n;
    }
};
o(n)
  only one method
  
