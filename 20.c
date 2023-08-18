bool isValid(char * s){
    int i, j=0, A=0, B=0, C=0;
    bool a=false, b=false, c=false;
    char top[strlen(s)+1];

    for (i=0; i<strlen(s); i++){
        if (s[i]=='('){
            a=true;
            A++;
            j++;
            top[j]='(';
            continue;
        }
        if (a==false && s[i]==')' || top[j]!='(' && s[i]==')') return false;

        if (a==true && s[i]==')' && top[j]=='('){
            A--;
            j--;
            if (A==0) a=false;
            if (s[i-1]=='['||s[i-1]=='{') return false;
            continue;
        }

        if (s[i]=='['){
            b=true;
            B++;
            j++;
            top[j]='[';
            continue;
        }
        if (b==false && s[i]==']' || top[j]!='[' && s[i]==']') return false;

        if (b==true && s[i]==']' && top[j]=='['){
            B--;
            j--;
            if (B==0) b=false;
            if (s[i-1]=='('||s[i-1]=='{') return false;
            continue;
        }

        if (s[i]=='{'){
            c=true;
            C++;
            j++;
            top[j]='{';
            continue;
        }
        if (c==false && s[i]=='}' || top[j]!='{' && s[i]=='}') return false;

        if (c==true && s[i]=='}' && top[j]=='{'){
            C--;
            j--;
            if (C==0) c=false;
            if (s[i-1]=='['||s[i-1]=='(') return false;
            continue;
        }
    }
    if (a==false && b==false && c==false && A==0 && B==0 && C==0) return true;
    else return false;
}
