#include <iostream>
#include <list>
#include <vector>
#include <string>

class HashTable {
private:
    static const int default_bucket_count = 10;
    std::vector<std::list<std::pair<std::string, int> > > table;
    int bucket_count;

    int hashFunction(const std::string& key) const {
        unsigned long hash = 0;
        for (size_t i = 0; i < key.length(); ++i) {
            hash = hash * 31 + key[i];
        }
        return hash % bucket_count;
    }

public:
    HashTable(int buckets = default_bucket_count) : bucket_count(buckets) {
        table.resize(bucket_count);
    }

    void insert(const std::string& key, int value) {
        int index = hashFunction(key);
        for (typename std::list<std::pair<std::string, int> >::iterator it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                it->second = value; // Update existing key
                return;
            }
        }
        table[index].push_back(std::make_pair(key, value));
    }

    bool search(const std::string& key, int& value) const {
        int index = hashFunction(key);
        for (typename std::list<std::pair<std::string, int> >::const_iterator it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->first == key) {
                value = it->second;
                return true;
            }
        }
        return false;
    }

    bool remove(const std::string& key) {
        int index = hashFunction(key);
        typename std::list<std::pair<std::string, int> >::iterator it = table[index].begin();
        for (; it != table[index].end(); ++it) {
            if (it->first == key) {
                table[index].erase(it);
                return true;
            }
        }
        return false;
    }

    void display() const {
        for (int i = 0; i < bucket_count; ++i) {
            std::cout << "Bucket " << i << ": ";
            for (typename std::list<std::pair<std::string, int> >::const_iterator it = table[i].begin(); it != table[i].end(); ++it) {
                std::cout << "[" << it->first << ": " << it->second << "] ";
            }
            std::cout << std::endl;
        }
    }
};

// Example usage
int main() {
    HashTable ht(5);

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("orange", 30);

    ht.display();

    int value;
    if (ht.search("banana", value)) {
        std::cout << "Found banana with value: " << value << std::endl;
    } else {
        std::cout << "Banana not found" << std::endl;
    }

    ht.remove("apple");
    ht.display();

    return 0;
}
