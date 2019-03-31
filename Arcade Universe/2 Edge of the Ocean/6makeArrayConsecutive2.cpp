int makeArrayConsecutive2(std::vector<int> statues) {
    int diff = 0;
    int sum  = 0;

    for(int i = 0; i < statues.size() - 1; i++){
        for(int h = statues.size() - 1; h > i; h--){
            if(statues[h]<statues[h-1]){
                std::swap(statues[h],statues[h-1]);
            }
        }
    }

    for(int j = 0; j < statues.size() -1; j++){
        diff = statues[j+1] - statues[j];
        if(diff > 1){
            sum += diff - 1;
        }

    }
    return sum;
}
