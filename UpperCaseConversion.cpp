string transform(string s)
{
    // code here
    for(int i=0 ; i<s.length() ; ++i)
    {
        if(i==0 || s[i-1] == ' ')
        s[i] = toupper(s[i]);
        
    }
    
    return s;
}