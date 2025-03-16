class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         std::stack<int> stack;

    for (int asteroid : asteroids) {
        bool exploded = false;
        while (!stack.empty() && asteroid < 0 && stack.top() > 0) {
            if (abs(asteroid) > stack.top()) {
                stack.pop();
            } else if (abs(asteroid) == stack.top()) {
                stack.pop();
                exploded = true; 
                break;
            } else {
                exploded = true; 
                break;
            }
        }
        if (!exploded) {
            stack.push(asteroid);
        }
    }
    vector<int> result;
    while (!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }
    reverse(result.begin(), result.end());
    return result;
    }
};
