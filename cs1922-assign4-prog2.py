import sys

class Trie:

    def __init__(self):
        self.num_size = 10
        self.size1 = 20
        self.m_nodes = self.size1
        self.nodes = 2
        self.trie = [[0 if i != self.num_size else []for i in range(self.num_size + 1)] for j in range(self.size1)]
        self.name_to_no = {}
    
    def new_nodes(self) :
        if self.nodes == self.m_nodes :
            self.trie.extend([[0 if i != self.num_size else []for i in range(self.num_size + 1)] for j in range(self.size1)])
            self.m_nodes += self.size1
        self.nodes += 1
        return self.nodes - 1

    def string_insertion(self, phone_no, name) :
        index = 1
        for c in phone_no.lower() :
            i = ord(c) - ord('0')    
            if i < 0 or i >= self.num_size :
                continue
            if self.trie[index][i] == 0 :
                new_index = self.new_nodes()
                self.trie[index][i] = new_index
                index = new_index
            else :
                index = self.trie[index][i]
        self.trie[index][self.num_size].append(name)
        
    def Insert(self, phone_no, name):
        if len(phone_no) > 0:
            if name not in self.name_to_no.keys():
                self.name_to_no[name] = phone_no
            self.string_insertion(phone_no, name)
            self.Insert(phone_no[1:], name)
            
    def depth_first_search(self, num, index = 1 , result = []):
        if index == 0:
            return
        for i in range(self.num_size):
            if self.trie[index][i] != 0:
                self.depth_first_search(num + str(i), self.trie[index][i], result)

        if len(self.trie[index][self.num_size]) != 0:
            for name in self.trie[index][self.num_size]:
                if name not in result:
                    result.append(name)

    def search(self, phone_no, index = 1):
        if index == 0:
            return 0
        elif len(phone_no) == 0:
            return index
        else:
            c = phone_no[0]
            i = ord(c) - ord('0')    # get ASCII value
            if i < 0 or i >= self.num_size :
                return 0
            index = self.trie[index][i]
            return self.search(phone_no[1:], index)
    
    def new_prog(self, file, string):
        with open(file) as f:
            for line in f.read().splitlines()[1:]:
                pair = line.rsplit(" ",1)
                self.Insert(pair[1], pair[0])
        
        result = []
        self.depth_first_search(string, self.search(string, 1), result)
        for name in sorted(result):
            print(name, self.name_to_no[name])


if __name__ == '__main__':
    if len(sys.argv) != 3 :
        print('Usage: python3 <file> <string>')
        sys.exit(1) 

    trie = Trie()
    trie.new_prog(sys.argv[1],sys.argv[2])
