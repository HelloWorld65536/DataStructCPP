Realisation of many data structures on C++

Function prototypes:
NUM_ARRAY:
  T get(unsigned long long INDEX)
  void set(unsigned long long INDEX, T VALUE)
STR_ARRAY:
  T get(std::string KEY)
  void set(std::string KEY, T VALUE)
LOG_ARRAY:
  bool get(T KEY)
  void set(T KEY, bool VALUE = true)
STACK:
  void pop()
  void push(T VALUE)
  T peek()
QUEUE:
  void pop()
  void push(T VALUE)
  T peek()
DEQUE:
  void pop_top()
  T peek_top()
  T peek_top()
  void pop_button()
  void push_button(T value)
  T peek_button()
LIST:
  T get()
  void set(T VALUE)
  void forward()
  void backward()
TREE:
  V get()
  void set(V VALUE)
  void forward(K KEY)
  void backward()
GRAPH:
  V get()
  void set(V VALUE)
  void go(K KEY)
