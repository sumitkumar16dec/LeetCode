class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        int pro=1, n=arr.size();
        for(int i=0;i<k;i++){
            pro *= arr[n-i-1];
        }
        return pro;
    }
};
// TC: O(k), SC: O(n)

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */