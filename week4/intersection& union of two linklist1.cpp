class Solution{
  public:
   Node* find(Node* a,unordered_map<int,int>mp,Node* res)
   {
      if(!a)return NULL;
      else
      {
          if(mp.find(a->data)!=mp.end())
          {
              res->data=a->data;
              res->next=find(a->next,mp,(res)->next);
          }
          else
            res=find(a->next,mp,res);
      }
      return res;
   }
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        if(!head1 ||!head2)return NULL;
        Node* res=NULL;
        unordered_map<int,int>mp;
        while(head1)
        {
            mp[head1->data]++;
            head1=head1->next;
        }
        return find(head2,mp,res);
    
    }
};
need to change further
