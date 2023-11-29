#include<iostream>
using namespace std;
class Search
{
  private:
  int arr[50];
  int key;
  int lim;
  int agg[50];
  int num1;
  int key1;
  
  
  public:
  void getdata()
  {
    cout<<"\nenter the number of elements in array:";
    cin>>lim;
    
    cout<<"\nenter the elements in array:";
    for(int i=0;i<=lim;i++)
    {
       cin>>arr[i];
    }
    
    cout<<"\nenter the element you want to search:";
    cin>>key;
   }
   void linear()
   {
      for(int i=0;i<lim;i++)
      {
        if(key==arr[i])
        {
          cout<<"\nthe element is found in the array";
          cout<<"\nthe element position is:"<<i;
        }
       }
        cout<<"\nthe element is not found in array";
    }
     
    void binaryget()
    {
           cout<<"\nenter the size of array:";
           cin>>num1;  
           cout<<"\nenter the inputs in ascending order:";
           for(int j=0;j<num1;j++)
           {
            cin>>agg[j];
           }
           cout<<"\nenter the number you want to search:";
           cin>>key1;
           
     }
     
     void binary_search()
     {
        int low=agg[0];
        int high=agg[num1-1];
        int mid;
        while(high >= low)
        {
            mid=low+high/2;
            if(agg[mid]==key1)
            {
               cout<<"\nthe element is found in array:"<<"indexis"<<mid;
               break;
             }
            else if(agg[mid] > key1)
            {  
                high=mid-1;
            }
            else if(agg[mid] < key1)
            {
                low=mid+1;
            }       
        }   
      }
};
       
      int main()
      {
         Search obj;
         obj.getdata();
         obj.linear();
         obj.binaryget();
         obj.binary_search();
         return 0;
      } 
      
      
      

        
