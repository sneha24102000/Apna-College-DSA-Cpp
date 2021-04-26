string to_upper(string str){
    //code
    
    for(int i=0 ; i<str.length() ; i++)
          if('a' <= str[i] && str[i] <= 'z')
              str[i] = str[i] - 'a' + 'A';
    return str;          
    
}