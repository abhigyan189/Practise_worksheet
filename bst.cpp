

      #include<bits/stdc++.h>
      using namespace std;
      typedef long long int ll;
      typedef unsigned long long int ull;
      #define checker cout<<"CHECKED" 
      #define modulo 1000000007
      struct bst
      {
        int data ; 
        bst* left ;
        bst* right ;
      };

       
      void topview(bst* root)
      {
        if(root ==NULL) 
          return ;
        else
        {
          unordered_map<int , int> mp ;

          queue<pair<bst* , int >> q ;

          queue.push(make_pair(root , 0)) ;

          while(!q.empty())
          {
            bst* val = q.front().first;

            int hd = q.front().second;

            q.pop() ;

            if(mp.find(hd) == mp.end())
            {
              mp[hd] = val->data ;
              cout << val->data <<" ";
            }

            if(val ->left != NULL)
              q.push(make_pair(val->left , hd-1)) ;

            if(val ->right != NULL)  
              q.push(make_pair(val->right, hd+1)) ;
          }
        }
      }

      void leftview(bst* root, int level , int* max_level)
      {
        if(root==NULL)
          return ;

        if(*max_level < level)
        {
          cout << root->data<<" " ;
          *max_level = level ;
        }

        leftview(root->left , level+1, max_level);
        leftview(root->right , level + 1, max_level); 

      }


      int main()
      {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        #ifndef ONLINE_JUDGE 
        freopen("input.txt","r",stdin);
        freopen("outfitt.txt","w",stdout);
        #endif

        bst* root =NULL;

        root= insert(root , 10 );
        root= insert(root , 20 );
        root= insert(root , 30 );
        root= insert(root , 25 );
        root= insert(root , 45 );
        root= insert(root , 15 );
        root= insert(root , 17 );

        
        

       
        return 0 ;
    }
