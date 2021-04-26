vector<int> cutTheSticks(vector<int> arr) {
    vector<int>vec;
    int i,min1;
    while(arr.size()!=0) 
    { 
        int count=0;
        min1=*min_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
    { 
        arr[i] =arr[i]-min1;
      count++;   
    }   
      arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
      vec.push_back(count);
    }
    return vec;
}

