string s;
    cin>>s;
    int len = s.length();
    int answer[len][len];
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            answer[i][j]=0;
        }
    }
    for (float pivot = 0; pivot < s.length(); pivot += .5)
    {

        float palindromeRadius = pivot - (int)pivot;
        while ((pivot + palindromeRadius)< s.length() && (pivot - palindromeRadius) >= 0 && s[((int)(pivot - palindromeRadius))] == s[((int)(pivot + palindromeRadius))])
        {

            answer[(int)(pivot - palindromeRadius)][(int)(pivot + palindromeRadius)]++;
            palindromeRadius++;
        }
    }

    for(int i=1;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            answer[j][i] += answer[j][i-1];
        }
    }
    for(int i=len-2;i>=0;i--)
    {
        for(int j=0;j<len;j++)
        {
            answer[i][j] += answer[i+1][j];
        }
    }


//Answer stores the number of palindromes in each substring
