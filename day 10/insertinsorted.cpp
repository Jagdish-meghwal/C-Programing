#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void display(vector<int> v)
{
    for(auto ele: v)
       cout<<ele<< " | ";
    cout<<endl;

}


int main()
{
    vector <int> arr={1,2,3,4,6,7,8,9};
    
    display(arr);
    int key=5;
    cout<<"enter element to insert  : ";
   // cin>>key;


      auto it=find_if(begin(arr),end(arr),[key](int ele){return ele>key;});
      /* auto it=begin(arr);
      while(it!=end(arr))
      {
          if(*it>key)
             break;
            ++it;
      }*/
      arr.insert(it,key);
   /*
     for(auto ele: arr)
       {
           if(key>ele)
                continue;
           
           else
            {
                arr.insert(find(begin(arr),end(arr),ele),key);
               break; 
            }
            
       }

   */
    
    display(arr);
    
}