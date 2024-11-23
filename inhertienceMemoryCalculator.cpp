#include <iostream>
#include <unordered_map>
using namespace std;

// Base Calculator class (Assumed for the sake of this example)
class Calculator {
protected:
    int seed;

public:
    Calculator(int s) : seed(s) {}

    // Method to calculate the k-th prime (simplified version for illustration)
    int kthPrime(int k) {
        int count = 0, num = 2, prime = 0;

        while (count < k) {
            bool isPrime = true;
            for (int i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                ++count;
                prime = num;
            }
            ++num;
        }
        return prime;
    }
};

class MemoryCalculator : public Calculator {
private:
    unordered_map<int, int> memo;
    int computeCount = 0;  // Tracks the number of computations
    int memoCount = 0;     // Tracks the number of memoized results

public:
    MemoryCalculator(int seed) : Calculator(seed) {}

    int kthPrime(int k) {
        if (memo.count(k)) {
            ++memoCount;  // Increment memo hit count
            return memo[k]; // Return the memoized result
        }
        
        ++computeCount; // Increment compute count
        int result = Calculator::kthPrime(k); // Call the base class method to compute the prime
        memo[k] = result; // Memoize the result
        return result;
    }

    int getComputeCount() const {
        return computeCount;
    }

    int getMemoCount() const {
        return memoCount;
    }
};

int main() {
    MemoryCalculator calc(42);  
    cout << "5th Prime: " << calc.kthPrime(5) << endl;
    cout << "7th Prime: " << calc.kthPrime(7) << endl;
    cout << "5th Prime again: " << calc.kthPrime(5) << endl;

    cout << "Number of computations: " << calc.getComputeCount() << endl;
    cout << "Number of memoized results: " << calc.getMemoCount() << endl;

    return 0;
}
