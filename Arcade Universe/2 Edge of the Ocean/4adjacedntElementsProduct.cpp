int adjacentElementsProduct(std::vector<int> inputArray) {
   
    int max = 0;
    std::vector<int> product;
   for(int i = 0; i < inputArray.size() - 1; i++){
        product.push_back(inputArray[i] * inputArray[i+1]);
    }
       
max = product[0];

    // seeking the max
    for(int k = 0; k < product.size(); k++){
        if (product[k] > max){
            max = product[k];
        }
    }
       return max;
}
    

