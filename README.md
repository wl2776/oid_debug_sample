# Building

```
conan install . -b missing -s \&:build_type=Debug -s build_type=Release -of build
cd build
cmake .. --preset conan-debug
make -j
```

