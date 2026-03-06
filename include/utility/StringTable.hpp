//
// Created by Canh Minh Do on 2024/11/10.
//

#ifndef QCHECK_STRINGTABLE_HPP
#define QCHECK_STRINGTABLE_HPP

#include <vector>

class StringTable {
public:
    StringTable(int size = 256);

    ~StringTable();

    int encode(const char *name);

    int lookup(const char *name) const;

    const char *name(int code) const;

    void dump() const;

private:
    static int hash(const char *name);

    static int hash2(const char *name);

    void resize();

    std::vector<char *> stringTable;
    std::vector<int> hashTable;
};

inline const char *
StringTable::name(int code) const {
    return stringTable[code];
}

#endif//QCHECK_STRINGTABLE_HPP
