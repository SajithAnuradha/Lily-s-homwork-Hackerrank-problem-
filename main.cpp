int swap_count(vector <int> arr,vector <int> copy,int size){
    int Swap_Count=0;

    for (int x=0;x<size;x++){                 // use this function get swap counts
        if (arr[x]!=copy[x]){
            for (int y=x;y<size;y++){
                if (arr[y]==copy[x]){
                    swap(arr[x],arr[y]);
                        Swap_Count+=1;
                         break;
                }
            }
        }
    }
   return Swap_Count;
}




int lilysHomework(vector<int> arr) {

    int size=arr.size();
    vector<int >copy1;  // create a sorted array

    vector <int>copy2;  // create a riverse sorted array

    for (int x=0;x<size;x++){
        copy1.push_back(arr[x]);

    }

    sort(copy1.begin(),copy1.end());

    for (int z=size-1;z>-1;z--){              // use sorted array to create riverse sorted array
        copy2.push_back(copy1[z]);
    }

    // call the function to get swapping count to create sorted array or riverse sorted array
    int Swap_count1=swap_count(arr,copy1,size);
    int Swap_count2=swap_count(arr,copy2,size);


    return min(Swap_count1,Swap_count2); // then get minimum the two of swapping


    }

