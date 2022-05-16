# simple timestamp trials

several proejcts with timestamp needed, format


```cpp
    std::chrono::time_point<std::chrono::system_clock> time_point;
    time_point = std::chrono::system_clock::now();
    std::time_t ttp = std::chrono::system_clock::to_time_t(time_point);
    std::cout << "Timestamp: " << std::ctime(&ttp) << "\n";
```

## build

```console
g++ test_timestamp.cpp -o test_timestamp
```

or with make

```console
cmake .
make
```

## docker


```console
docker build -f "Dockerfile" -t test_timestamp:latest "." 
```

