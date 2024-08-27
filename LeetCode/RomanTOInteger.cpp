class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char, int> R;  //it is for declaring the I,V,X...etc
        R['I'] = 1;
        R['V'] = 5;
        R['X'] = 10;
        R['L'] = 50;
        R['C'] = 100;
        R['D'] = 500;
        R['M'] = 1000;

        int X = 0;
        int i;
        for(i=0 ; i<s.length() ; i++)
        {
            if(R[s[i]] < R[s[i+1]])
            {
                X -= R[s[i]];       //it is for when I is Come before V,X 
            }                       //eg. XIV = 14
                                    //X = 10 Then I comes then 10-1 = 9
                                    //V = 5     9+5 = 14;

            else                    
            {                       //Here it is full opposite ..
                X += R[s[i]];       
            }
        }
        return X;
    }
};