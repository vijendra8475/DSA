ector <int> m(a.size());
    for(int i=0; i<a.size(); i++) {
        int newIndex = (i + n) % a.size();
        m[newIndex] = a[i];
    }
    a = m;