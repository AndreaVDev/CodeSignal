bool almostIncreasingSequence(std::vector<int> sequence) {
    int val = 0;
    int currentBig = sequence.at(0);
    for (int i = 1; i < sequence.size(); i++){
        if( currentBig < sequence.at(i))
        {
            currentBig = sequence.at(i);
        }
        else{
            val++;
            if( val>1)
            {
                return false;
            }
            if( i > 1 ){
                if (sequence.at(i) > sequence.at(i-2)){
                    if( currentBig < sequence.at(i) ){
                    }
                    else{
                        currentBig = sequence.at(i);
                    }
                }
            }
            else{
                currentBig = sequence.at(i);
            }
        }
    }
    return true;
}