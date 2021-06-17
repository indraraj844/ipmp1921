 struct box
    {
        int l;
        int w;
        int h;
    };
    bool comp(struct box a,struct box b)
    {
        return (a.w * a.l > b.w * b.l)?true:false;
    }
 
    int maxHeight(int height[],int width[],int length[],int n)
    {
      int len=3*n;
      box arr[len];
      int index=0;
      for(int i=0;i<n;i++)
      {
          arr[index].h=height[i];
          arr[index].w=max(length[i],width[i]);
          arr[index].l=min(length[i],width[i]);
          index++;
          arr[index].h=length[i];
          arr[index].w=max(height[i],width[i]);
          arr[index].l=min(height[i],width[i]);
              index++;
           arr[index].h=width[i];
          arr[index].w=max(length[i],height[i]);
          arr[index].l=min(length[i],height[i]);
      
      }
     qsort (arr,len,sizeof(arr[0]),comp);
      int lis[len];
      for(int i=0;i<len;i++)
      {
          lis[i]=arr[i].h;
      }
      for(int i=1;i<len;i++)
      {
        for(int j=0;j<i;j++)
        {
            if(arr[i].l<arr[j].l && arr[i].w<arr[j].w && lis[i]<lis[j]+arr[i].h)
            lis[i]=lis[j]+arr[i].h;
        }
      }
      int m=lis[0];
      for(int i=1;i<len;i++)
       m=max(m,lis[i]);
       
       return m;
    }
thankyou
