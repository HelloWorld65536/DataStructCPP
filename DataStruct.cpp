#include<map>
#include<memory>
#include<stdlib.h>
template<typename T>
class LIST_NODE {
    T VALUE;
    std::shared_ptr<LIST_NODE> FORW = nullptr;
    std::shared_ptr<LIST_NODE> BACK = nullptr;
};
template<typename K, typename V>
class TREE_NODE {
    V VALUE;
    std::shared_ptr<TREE_NODE> PARENT_NODE;
    std::map<K, std::shared_ptr<TREE_NODE>> DAUGHTER_NODE;
};
template<typename K, typename V>
class GRAPH_NODE {
    V VALUE;
    K NAME;
    std::map<K, std::shared_ptr<GRAPH_NODE>> NEAR_NODE;
};

template<typename T>
class NUM_ARRAY {
    public:
        T get(unsigned long long INDEX) {
            if(INDEX > SIZE - 1)
                return NULL;
            else
                return *(PTR + INDEX);
        }
        void set(unsigned long long INDEX, T VALUE) {
            if(INDEX > SIZE - 1) {
                if(realloc(PTR, INDEX - SIZE - 1) = NULL)
                    throw "Unable To Expand Array";
            }
            else
                *(PTR + INDEX) = VALUE;
        }
    private:
        std::unique_ptr<T> PTR  = malloc(1, sizeof(T));
        unsigned long long SIZE = 1;
};
template<typename T>
class STR_ARRAY {
    public:
        T get(std::string KEY) {
            return MAIN[KEY];
        }
        void set(std::string KEY, T VALUE) {
            MAIN[KEY] = VALUE;
        }
    private:
        std::map<std::string, T> MAIN;
};
template<typename T>
class LOG_ARRAY {
    public:
        void set(T KEY, bool VALUE = true) {
            if(VALUE = true)
                MAIN.insert(KEY);
            else
                MAIN.erase(KEY);
        }
        bool get(T KEY) {
            return MAIN.contains(KEY);
        }
    private:
        std::set<T> MAIN;
};
template<typename T>
class STACK {
    private:
        void pop () {
            if(MAIN.empty())
                throw "Stack Is Empty. Can\'t pop()";
            else
                MAIN.pop();
        }
        void push(T VALUE) {
            MAIM.push(VALUE);
        }
        T peek() {
            if(MAIN.empty())
                throw "Stack Is Empty. Can\'t peek()";
            else
                return MAIN.top();
        }
    public:
        std::stack<T> MAIN;
};
template<typename T>
class QUEUE {
    private:
        void pop () {
            if(MAIN.empty())
                throw "Queue Is Empty. Can\'t pop()";
            else
                MAIN.pop();
        }
        void push(T VALUE) {
            MAIM.push(VALUE);
        }
        T peek() {
            if(MAIN.empty())
                throw "Queue Is Empty. Can\'t peek()";
            else
                return MAIN.front();
        }
    public:
        std::queue<T> MAIN;
};
template<typename T>
class DEQUE {
    public:
        void pop_top() {
            if(MAIN.empty())
                throw "Deque Is Empty. Can\'t pop_top()";
            else
                MAIN.pop_front();
        }
        void push_top(T value) {
            MAIN.push_front(value);
        }
        T peek_top() {
            if(MAIN.empty())
                throw "Deque Is Empty. Can\'t peek_button()";
            else
                return MAIN.front();
        }
        void pop_button() {
            if(MAIN.empty())
                throw "Deque Is Empty. Can\'t pop_button()";
            else
                MAIN.pop_back();
        }
        void push_button(T value) {
            MAIN.push_back(value);
        }
        T peek_button() {
            if(MAIN.empty())
                throw "Deque Is Empty. Can\'t peek_button()";
            else
                return MAIN.back();
        }
    private:
        std::deque<T> MAIN;
};
template<typename T>
class LIST {
    public:
        T get() {
            return (*CURRENT_NODE).VALUE;
        }
        void set(T VALUE) {
            (*CURRENT_NODE).VALUE = VALUE;
        }
        void forward() {
            if((*CURRENT_NODE).FORW = nullptr) {
                (*CURRENT_NODE).FORW = malloc(sizeof(LIST_NODE));
                CURRENT_NODE = (*CURRENT_NODE).FORW;
            }
            else
                CURRENT_NODE = (*CURRENT_NODE).FORW;
        }
        void backward() {
            if((*CURRENT_NODE).BACK = nullptr) {
                (*CURRENT_NODE).BACK = malloc(sizeof(LIST_NODE));
                CURRENT_NODE = (*CURRENT_NODE).BACK;
            }
            else
                CURRENT_NODE = (*CURRENT_NODE).BACK;
        }
    private:
        std::unique_ptr<LIST_NODE> CURRENT_NODE = malloc(sizeof(LIST_NODE));
};
template<typename K, typename V>
class TREE {
    public:
        V get() {
            return (*CURRENT_NODE).VALUE;
        }
        void set(V VALUE) {
            (*CURRENT_NODE).VALUE = VALUE;
        }
        void forward(K KEY) {
            if((*CURRENT_NODE).DAUGHTER_NODE.contains(KEY))
                CURRENT_NODE = (*CURRENT_NODE).DAUGHTER_NODE[KEY];
            else
                (*CURRENT_NODE).DAUGHTER_NODE[KEY] = malloc(sizeof(TREE_NODE));
                (*CURRENT_NODE).DAUGHTER_NODE[KEY].PARENT_NODE = CURRENT_NODE; 
                CURRENT_NODE = (*CURRENT_NODE).DAUGHTER_NODE[KEY];
        }
        void backward() {
            if((*CURRENT_NODE).PARENT_NODE != nullptr)
                CURRENT_NODE = (*CURRENT_NODE).PARENT_NODE;
            else
                throw "Can\'t Change Tree Node By Parent Node";
        }
    private:
        std::shared_ptr<TREE_NODE> CURRENT_NODE;
};
template<typename K, typename V>
class GRAPH {
    public:
        V get() {
            return (*CURRENT_NODE).VALUE;
        }
        void set(V VALUE) {
            return (*CURRENT_NODE).VALUE = VALUE;
        }
        void go(K KEY) {
            if((*CURRENT_NODE).NEAR_NODE.contains(KEY))
                CURRENT_NODE = (*CURRENT_NODE).NEAR_NODE[KEY];
            else
                (*CURRENT_NODE).NEAR_NODE[KEY] = malloc(sizeof(GRAPH_NODE));
                (*((*CURRENT_NODE).NEAR_NODE[KEY])).NEAR_NODE[(*CURRENT_NODE).NAME] = CURRENT_NODE;
                CURRENT_NODE = (*CURRENT_NODE).NEAR_NODE[KEY];
        }
    private:
        std::shared_ptr<GRAPH_NODE> CURRENT_NODE;
};
