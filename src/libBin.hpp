using ll = long long;

int count(long long val, int b = 64){
    int cnt = 0;
    for (int i = 0; i < b; i++)
        cnt += bool((1LL << i) & val);


    return cnt; 
}
int dist(ll a, ll s) {
    return count(a ^ s);
}

void setNbit(ll c, ll &val)
{
    val |= (1LL << c);
}
void dNbit(ll c, ll &val)
{
    val = ~(~val | (1 << c));
}
void bit(ll i, ll &val)
{
    val ^= (1LL << i);
}

ll func(ll val, int pw)
{
    return val << pw;
}
ll divBin(ll val, ll pw)
{
    return val >> pw;
}

ll k2(ll val)
{
    return val << 1;
}
ll divB(ll val)
{
    return val >> 1;
}

bool isD(ll val)
{
    return ~val & 1;
}

ll binPw(ll pw)
{
    return (1LL << pw);
}

bool getB(ll val, ll i)
{
    return (val >> i) & 1;
}

void setBitI(ll &val, int i, bool b)
{
    val ^= (getB(val, i) != b) << i;
}