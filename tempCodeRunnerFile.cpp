    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int breakP = i > n ? 2 * n - i : i;

        for (int j = 1; j <= n - breakP + 1; j++)
        {
            cout << "* ";
        }

        for (int sp = 1; sp <= 2 * breakP - 2; sp++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - breakP + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }