bool checkPalindrome(std::string inputString) {
    string verify;
    for(std::string::reverse_iterator rit=inputString.rbegin(); rit!=inputString.rend(); ++rit){
        verify += *rit ;
        
    }
    cout<<verify;
    if(verify == inputString){
        return true;
    }
    else{
        return false;
    }
}
