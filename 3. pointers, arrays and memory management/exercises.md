- Indicate in red the code lines that are syntactically incorrect. 
- Indicate in green the expressions that are syntactically correct, but that are useless or might cause problems during execution. 
- Finally, what will appear on the display? Do not use your computer. 

```c
int main()
{
    int i,j;
    double d;
    int *ip = nullptr, *jp = nullptr;
    double *dp = nullptr;
    i = 7;
    ip = &7;
    jp = &i;
    *jp = j;
    *ip = i;
    ip = &j;
    &i = ip;
    j=4;
    (*ip)++;
    &d = dp;
    *ip*= i;
    *jp=*&j;
    ip++;
    i = ip-&i;
    dp = &i;
    dp = ip;
    &dp = &&d;
    *ip+=1;
    *ip++;
    cout <<endl<< i << j << d;
    cout <<endl<< *ip << *jp << *dp;
    return 0;
}
```
