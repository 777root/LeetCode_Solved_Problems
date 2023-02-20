#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
   vector<int> twoSum(vector<int> &nums, int target) {  
    
    	
        
      //#[NOTE]  input they will do ig inside dymamic array
                        //vector guys
        
        // int f;
    	// cout<<"enter how many elements u need in array"<<endl;
    	// cin>>f;
    	//just inputting dynamic array by vector
		
		//cout<<"just inputting dynamic array/vector below by dynamicarray/vector"<<endl;
		

        // int x; 

        // for (int i = 0 ; i<=f-1; i++){
    	// 	cout<<"Go on push back element :"; //for pushback inside dynamic array //
		// 	cin>>x;
		// 	nums.push_back(x);
    		
		// }
		//Mainalgo/answer below for The problem
		
		vector <int> indices;
		
		for (int a = 0 ; a<nums.size() ; a++){   
			for (int b=a+1 ; b<nums.size() ; b++ ) { 
				
				
				if (nums[a] + nums [b] == target ){
					cout<<"yea found";
					indices.push_back(a);
					indices.push_back(b);
					
				
					return indices ; 
					
					
				}
			}	
		}

    return indices;
		
	}
		
		

		  
};
