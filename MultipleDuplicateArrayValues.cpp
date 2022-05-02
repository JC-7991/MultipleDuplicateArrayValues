#include <iostream>
#include <bits/stdc++.h>
 
void duplicates(int arr[], int len){
 
  bool ifPresent = false;

  std::vector<int> al;
 
  for(int i = 0; i < len - 1; i++){

    for(int j = i + 1; j < len; j++){

      if(arr[i] == arr[j]){

        auto it = find(al.begin(), al.end(), arr[i]);
                                     
        if(it != al.end()){
          break;
        }
 
        else{
          al.push_back(arr[i]);
          ifPresent = true;
        }

      }

    }

  }
 
  if(ifPresent == true){

    std::cout << "[" << al[0] << ", ";
    for(int i = 1; i < al.size() - 1; i++){
      std::cout << al[i] << ", ";
    }
    std::cout << al[al.size() - 1] << "]";
    
  }

  else{
    std::cout << "No duplicates present in the array.\n";
  }

}
 
int main(){

  int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11, 7, 7};
  
  int n = sizeof(arr) / sizeof(arr[0]);
 
  duplicates(arr, n);
 
  return 0;

} 