#ifndef DFA_H
#define DFA_H

#include <set>
#include "NFA.h"

using namespace std;

class DFA : protected NFA {
    public:
        DFA(const NFA &nfa);

    private:
        map<char, set<int> > getTrans(string sigma, set<int> q0, vector<shared_ptr<q> > Q_nfa);
};
