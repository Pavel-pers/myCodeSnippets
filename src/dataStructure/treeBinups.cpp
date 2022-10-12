#define _CRT_SECURE_NO_WARNINGS

#include <vector>

using ll = long long;

struct BinUps
{
    std::vector<std::vector<ll>> ej;

    ll getP(ll v, ll k, int i)
    {
        if (!k)
            return v;

        for (; i >= 0; i--)
        {
            if ((1 << i) <= k)
            {
                return getP(ej[i][v], k - (1 << i), i - 1);
            }
        }
    }

    void build(std::vector<ll> g)
    {
        ej.resize(32, std::vector<ll>(g.size()));
        ej[0] = g;

        for (int i = 1; i < 32; i++)
        {
            for (int u = 0; u < g.size(); u++)
            {
                ej[i][u] = ej[i - 1][ej[i - 1][u]];
            }
        }
    }

    BinUps(std::vector<ll> g)
    {
        build(g);
    }
};
