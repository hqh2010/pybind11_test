import sys
sys.path.insert(0, '/home/uos/Desktop/pybind11_test/build')
import test

if __name__ == "__main__":
    result = test.demo(3, 4)
    print(result )
